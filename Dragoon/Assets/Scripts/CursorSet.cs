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
            Debug.Log("selected");
            tempCharacter.GetComponent<Unit>().getMoveVision();
            isSelected = false;
        }

        else if (!isSelected && Input.GetKeyDown(KeyCode.Space))
        {
            Debug.Log("unselected");
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            isSelected = true;
            tempCharacter = collision.gameObject;
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
        }
    }
}