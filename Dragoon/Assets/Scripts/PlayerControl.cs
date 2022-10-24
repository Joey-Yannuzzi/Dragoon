using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using unit;

public class PlayerControl : MonoBehaviour
{
    private bool isActive = true;
    private int count;

    // Start is called before the first frame update
    void Start()
    {
        count = transform.childCount;
        setActive(true);
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void LateUpdate()
    {
        count = transform.childCount;
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
        for (int bogus = 0; bogus < count; bogus++)
        {
            this.gameObject.transform.GetChild(bogus).gameObject.GetComponent<Unit>().setActive(true);
        }
    }
}
