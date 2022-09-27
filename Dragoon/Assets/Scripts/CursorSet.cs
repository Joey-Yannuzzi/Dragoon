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

    private void Start()
    {
        transform.position = mainPlayer.transform.position + offset;
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
        {
            transform.Translate(Vector3.left);
        }

        if (Input.GetKeyDown(KeyCode.D))
        {
            transform.Translate(Vector3.right);
        }

        if (Input.GetKeyDown(KeyCode.W))
        {
            transform.Translate(Vector3.up);
        }

        if (Input.GetKeyDown(KeyCode.S))
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

        else if (hasTarget && Input.GetKeyDown(KeyCode.Space))
        {
            tempCharacter.GetComponent<Unit>().move(transform.position - offset, this.gameObject);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Player") && !isRange)
        {
            isSelected = true;
            tempCharacter = collision.gameObject;
            Debug.Log("selected");
        }
        else if (collision.gameObject.CompareTag("Bounds"))
        {
            Debug.Log("Restart");
            Start();
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            isSelected = false;
            Debug.Log("unselected");
        }

        else if (collision.gameObject.CompareTag("Attack"))
        {
            isRange = false;
        }
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (isRange && collision.gameObject.CompareTag("Move"))
        {
            hasTarget = true;
        }
    }
}