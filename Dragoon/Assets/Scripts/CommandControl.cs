using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CommandControl : MonoBehaviour
{
    private GameObject[] enemies;
    private bool selected;

    // Start is called before the first frame update
    void Start()
    {
        enemies = GameObject.FindGameObjectsWithTag("Enemy");
        Reset();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void setUpCommand(GameObject target, GameObject cursor)
    {

        for (int bogus = 0; bogus < enemies.Length; bogus++)
        {
            if ((target.transform.position.x + 1 == enemies[bogus].transform.position.x || target.transform.position.x - 1 == enemies[bogus].transform.position.x) && (target.transform.position.y == enemies[bogus].transform.position.y))
            {
                this.transform.GetChild(1).gameObject.SetActive(true);
                break;
            }
            else if ((target.transform.position.y + 1 == enemies[bogus].transform.position.y || target.transform.position.y - 1 == enemies[bogus].transform.position.y) && (target.transform.position.x == enemies[bogus].transform.position.x))
            {
                this.transform.GetChild(1).gameObject.SetActive(true);
                break;
            }
        }

        transform.GetChild(2).gameObject.SetActive(true);
        transform.GetChild(3).gameObject.SetActive(true);
    }

    public void Reset()
    {
        setSelected(false);

        for (int bogus = 0; bogus < transform.childCount; bogus++)
        {
            transform.GetChild(bogus).gameObject.SetActive(false);
        }
    }

    public bool getSelected()
    {
        return (selected);
    }

    public void setSelected(bool selected)
    {
        this.selected = selected;
    }
}
