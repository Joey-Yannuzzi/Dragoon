using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using unit;

public class EnemyControl : MonoBehaviour
{
    //Variables
    private bool isActive;
    private int count;
    public GameObject controller;
    private bool phaseRunning;
    private GameObject child;
    private int currentChild;

    //Runs on initiation
    //sets currentChild equal to 0
    //Sets the count equal to the number of the transform's children
    //runs setActive with false parameter
    //sets the phase bool to false
    //Sets the child equal to the GameObject of the child with currentChild's index
    void Start()
    {
        currentChild = 0;
        count = transform.childCount;
        setActive(false);
        phaseRunning = false;
        child = this.gameObject.transform.GetChild(currentChild).gameObject;
    }

    //Runs every frame
    //Checks if the controller's enemyStart bool is true and if the phase is not running
    //If true run the phase, and set the current child to the child with the corresponding index
    //Run moveInit method
    void Update()
    {
        if (controller.GetComponent<Controller>().getEnemyStart()  && !phaseRunning)
        {
            phaseRunning = true;
            child = this.gameObject.transform.GetChild(currentChild).gameObject;
            moveInit();
        }
    }
    
    //Unessasary
    //Remains from PlayerControl, which is base model for this script
    //Checks which enemies are active and inactive at the end of each frame
    private void LateUpdate()
    {
        count = transform.childCount;
        checkCount();
    }

    //Setter for isActive
    private void setActive(bool active)
    {
        isActive = active;
    }

    //Getter for isActive
    public bool getActive()
    {
        return (isActive);
    }

    //Method used to check if all the enemy units acted
    //Run in EnemyControl script LateUpdate
    //checks if the children of the enemy controller GameObject are inactive
    //Incriments a counter for each inactive child
    //If the counter is equal to the total number of children set isActive to false
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

    //Method used to reset all the children and the controller
    //Run in Controller script setStart method
    //Sets isActive to true
    //Unruns the phase
    //Sets each valid child as active
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
