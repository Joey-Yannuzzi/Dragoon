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

    private void Start()
    {
        transform.position = mainPlayer.transform.position + offset;
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.A) && !isCommanding)
        {
            transform.Translate(Vector3.left);
        }

        if (Input.GetKeyDown(KeyCode.D) && !isCommanding)
        {
            transform.Translate(Vector3.right);
        }

        if (Input.GetKeyDown(KeyCode.W) && !isCommanding)
        {
            transform.Translate(Vector3.up);
        }

        if (Input.GetKeyDown(KeyCode.S) && !isCommanding)
        {
            transform.Translate(Vector3.down);
        }

        if (isSelected && Input.GetKeyDown(KeyCode.Space))
        {
            tempCharacter.GetComponent<Unit>().getMoveVision();
            isRange = true;
            isSelected = false;
        }

        else if (!isRange && Input.GetKeyDown(KeyCode.Space))
        {
            tempCharacter.GetComponent<Unit>().killAll();
        }

        else if (hasTarget && Input.GetKeyDown(KeyCode.Space) && !isCommanding)
        {
            hasTarget = false;
            isCommanding = true;
            commandController.GetComponent<CommandControl>().setUpCommand(tempCharacter, this.gameObject);
        }
        else if (commandController.GetComponent<CommandControl>().getSelected())
        {
            commandController.GetComponent<CommandControl>().Reset();
            tempCharacter.GetComponent<Unit>().move(transform.position - offset, this.gameObject);
            isRange = false;
            isSelected = false;
            isCommanding = false;
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
}