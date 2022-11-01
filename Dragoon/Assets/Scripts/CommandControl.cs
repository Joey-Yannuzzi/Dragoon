using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class CommandControl : MonoBehaviour
{
    private GameObject[] enemies;
    private bool selected;
    private EventSystem eventSystem;
    public GameObject system;

    // Start is called before the first frame update
    void Start()
    {
        eventSystem = system.GetComponent<EventSystem>();
        enemies = GameObject.FindGameObjectsWithTag("Enemy");
        Reset();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void setUpCommand(Vector2 target, GameObject cursor)
    {
        enemies = GameObject.FindGameObjectsWithTag("Enemy");

        for (int bogus = 0; bogus < enemies.Length; bogus++)
        {
            if ((target.x + 1 == enemies[bogus].transform.position.x || target.x - 1 == enemies[bogus].transform.position.x) && (target.y == enemies[bogus].transform.position.y))
            {
                this.transform.GetChild(1).gameObject.SetActive(true);
                break;
            }
            else if ((target.y + 1 == enemies[bogus].transform.position.y || target.y - 1 == enemies[bogus].transform.position.y) && (target.x == enemies[bogus].transform.position.x))
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
        //setSelected(false);
        eventSystem.SetSelectedGameObject(transform.GetChild(3).gameObject);

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
