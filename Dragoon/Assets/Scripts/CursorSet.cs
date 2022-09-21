using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CursorSet : MonoBehaviour
{
    public GameObject mainPlayer;
    public Vector3 offset;
    private bool isSelected = false;

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