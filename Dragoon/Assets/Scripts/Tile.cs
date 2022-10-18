using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using unit;

public class Tile : MonoBehaviour
{
    public int check;
    public GameObject attackSquare;
    private bool fixIt;

    // Start is called before the first frame update
    void Start()
    {
        fixIt = false;
        check = 0;
       /* Debug.Log("Start");
        GameObject[] terrain = GameObject.FindGameObjectsWithTag("Impassable");
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
        Debug.Log(enemies.Length);

        for (int bogus = 0; bogus < terrain.Length; bogus++)
        {
            if (terrain[bogus].transform.position == this.transform.position)
            {
                this.transform.GetComponentInParent<Unit>().tempMoveCount();
                Debug.Log(this.transform.GetComponentInParent<Unit>().getTempMove());
            }
        }
        for (int bogus = 0; bogus < enemies.Length; bogus++)
        {
            if (enemies[bogus].transform.position == this.transform.position)
            {
                this.transform.GetComponentInParent<Unit>().tempMoveCount();
                Debug.Log(this.transform.GetComponentInParent<Unit>().getTempMove());
            }
        }*/
    }

    // Update is called once per frame
    void Update()
    {
        if (fixIt)
        {
            create();
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Impassable"))
        {
            this.transform.GetComponentInParent<Unit>().tempMoveCount();
            this.transform.GetComponentInParent<Unit>().tempMoveCount();
            check++;
            Destroy(this.gameObject);
        }
        else if ((collision.gameObject.CompareTag("Mountain") || collision.gameObject.CompareTag("Enemy")) && this.gameObject.CompareTag("Move"))
        {
            this.transform.GetComponentInParent<Unit>().tempMoveCount();
            this.transform.GetComponentInParent<Unit>().tempMoveCount();
            //StartCoroutine(create());
            //Instantiate(attackSquare, transform.position, new Quaternion(0, 0, 0, 0), transform.parent.transform);
            check++;
            fixIt = true;
            //Destroy(this.gameObject);
        }
        /*else if (collision.gameObject.CompareTag("Player") && collision.gameObject != this.transform.parent.gameObject)
        {
            check++;
            Destroy(this.gameObject);
        }*/
        else
        {
            check++;
        }
    }

    private void create()
    {
        Instantiate(attackSquare, transform.position, new Quaternion(0, 0, 0, 0), transform.parent.transform);
        Destroy(this.gameObject);
    }
}
