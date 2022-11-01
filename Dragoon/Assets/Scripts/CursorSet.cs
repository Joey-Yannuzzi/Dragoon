using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using unit;

public class CursorSet : MonoBehaviour
{
    public GameObject mainPlayer;
    public Vector3 offset;
    private bool isSelected = false;
    private GameObject tempCharacter;
    private bool isRange = false;
    private bool hasTarget = false;
    public GameObject commandController;
    private bool isCommanding = false;
    private bool enemySelected = false;
    private bool isAttacking = false;
    private bool isEnemy = false;

    private void Start()
    {
        transform.position = mainPlayer.transform.position + offset;
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.A) && (!isCommanding || isAttacking))
        {
            transform.Translate(Vector3.left);
        }

        if (Input.GetKeyDown(KeyCode.D) && (!isCommanding || isAttacking))
        {
            transform.Translate(Vector3.right);
        }

        if (Input.GetKeyDown(KeyCode.W) && (!isCommanding || isAttacking))
        {
            transform.Translate(Vector3.up);
        }

        if (Input.GetKeyDown(KeyCode.S) && (!isCommanding || isAttacking))
        {
            transform.Translate(Vector3.down);
        }

        if (isSelected && Input.GetKeyDown(KeyCode.Space))
        {
            tempCharacter.GetComponent<Unit>().getMoveVision();
            isRange = true;
            isSelected = false;
        }

        else if (!isRange && !isAttacking && Input.GetKeyDown(KeyCode.Space))
        {
            tempCharacter.GetComponent<Unit>().killAll();
        }

        else if (hasTarget && Input.GetKeyDown(KeyCode.Space) && !isCommanding)
        {
            hasTarget = false;
            isCommanding = true;
            commandController.GetComponent<CommandControl>().setUpCommand(new Vector2(transform.position.x - offset.x, transform.position.y - offset.y), this.gameObject);
        }
        else if (commandController.GetComponent<CommandControl>().getSelected() && !isAttacking)
        {
            Debug.Log("moved");
            //commandController.GetComponent<CommandControl>().Reset();
            //tempCharacter.GetComponent<Unit>().move(transform.position - offset, this.gameObject, false);
            isRange = false;
            isSelected = false;
            isCommanding = false;
            commandController.GetComponent<CommandControl>().setSelected(false);
        }
        else if (isAttacking && isEnemy && Input.GetKeyDown(KeyCode.Space))
        {
            Debug.Log("attacked");
            tempCharacter.GetComponent<Unit>().setTarget(selectTarget("Enemy"));
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Player") && !isRange && collision.gameObject.GetComponent<Unit>().getActive())
        {
            isSelected = true;
            tempCharacter = collision.gameObject;
        }
        else if (collision.gameObject.CompareTag("Bounds"))
        {
            Start();
        }
        else if (collision.gameObject.CompareTag("Attack"))
        {
            isEnemy = true;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            isSelected = false;
        }

        else if (collision.gameObject.CompareTag("Attack"))
        {
            isRange = false;
            isEnemy = false;
        }
        else if (collision.gameObject.CompareTag("Move"))
        {
            hasTarget = false;
        }
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (isRange && collision.gameObject.CompareTag("Move"))
        {
            hasTarget = true;
        }
    }

    private bool getIsCommanding()
    {
        return (isCommanding);
    }

    public void setIsCommanding(bool isCommanding)
    {
        this.isCommanding = isCommanding;
    }

    public GameObject getTempcharacter()
    {
        return (tempCharacter);
    }

    private void setTempCharacter(GameObject tempCharacter)
    {
        this.tempCharacter = tempCharacter;
    }

    private void setEnemySelected(bool enemySelected)
    {
        this.enemySelected = enemySelected;
    }

    public bool getEnemySelected()
    {
        return (enemySelected);
    }

    private bool getAttacking()
    {
        return (isAttacking);
    }

    public void setAttacking(bool isAttacking)
    {
        this.isAttacking = isAttacking;
    }

    public GameObject selectTarget(string type)
    {
        GameObject[] victims = GameObject.FindGameObjectsWithTag(type);
        GameObject target = null;

        for (int bogus = 0; bogus < victims.Length; bogus++)
        {
            if (transform.position - offset == victims[bogus].transform.position && Input.GetKeyDown(KeyCode.Space))
            {
                target = victims[bogus];
                isAttacking = false;
                break;
            }
        }

        return (target);
    }
}