using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile : MonoBehaviour
{
    public GameObject attackSquare;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Impassable"))
        {
            Destroy(this.gameObject);
        }
        else if ((collision.gameObject.CompareTag("Mountain") || collision.gameObject.CompareTag("Enemy")) && this.gameObject.CompareTag("Move"))
        {
            Instantiate(attackSquare, transform.position, new Quaternion(0, 0, 0, 0), transform.parent.transform);
            Destroy(this.gameObject);
        }
    }
}
