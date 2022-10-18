using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using unit;

public class EnemyControl : MonoBehaviour
{
    private bool isActive;
    private int count;
    public GameObject controller;
    private bool phaseRunning;
    private GameObject child;
    private int currentChild;

    // Start is called before the first frame update
    void Start()
    {
        currentChild = 0;
        count = transform.childCount;
        setActive(false);
        phaseRunning = false;
        child = this.gameObject.transform.GetChild(currentChild).gameObject;
    }

    // Update is called once per frame
    void Update()
    {
        if (controller.GetComponent<Controller>().getEnemyStart()  && !phaseRunning)
        {
            phaseRunning = true;
            moveInit();
        }
    }
    
    //Unessasary
    //Remains from PlayerControl, which is base model for this script
    //Checks which enemies are active and inactive at the end of each frame
    private void LateUpdate()
    {
        checkCount();
    }

    private void setActive(bool active)
    {
        isActive = active;
    }

    public bool getActive()
    {
        return (isActive);
    }

    private void checkCount()
    {
        int tempCount = 0;
        
        for (int bogus = 0; bogus < count; bogus++)
        {
            if (!this.gameObject.transform.GetChild(bogus).gameObject.GetComponent<Unit>().getActive())
            {
                tempCount++;
            }
        }

        if (tempCount == count)
        {
            setActive(false);
        }
    }

    public void Reset()
    {
        setActive(true);
        phaseRunning = false;

        for (int bogus = 0; bogus < count; bogus++)
        {
            this.gameObject.transform.GetChild(bogus).gameObject.GetComponent<Unit>().setActive(true);
        }
    }

    //Initiates enemy movement
    //tells current selected child to move
    //increments to next child in list (if possible)
    //if no child an exception will occur
    //exception triggers object to become inactive
    //inactivity ends enemy phase
    private void moveInit()
    {
        child.GetComponent<Unit>().enemyMove();

        try
        {
            currentChild++;
            child = this.gameObject.transform.GetChild(currentChild).gameObject;
            phaseRunning = false;
        }
        catch
        {
            setActive(false);
            currentChild = 0;
            child = this.gameObject.transform.GetChild(currentChild).gameObject;
        }
    }
}
