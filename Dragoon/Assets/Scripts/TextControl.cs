using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TextControl : MonoBehaviour
{
    public TextMeshProUGUI phaseText;
    public GameObject timer;
    private bool isTimed;
    private GameObject tempTimer;

    // Start is called before the first frame update
    void Start()
    {
        phaseText.text = "";
        tempTimer = null;
    }

    // Update is called once per frame
    void Update()
    {
        try
        {
            if (tempTimer.GetComponent<Timer>().getTime() < 0)
            {
                isTimed = false;
                phaseText.text = "";
                phaseText.color = Color.white;
                tempTimer = null;
            }
        }
        catch
        {

        }
    }

    public void playerPhaseShow()
    {
        isTimed = true;
        phaseText.color = Color.blue;
        phaseText.text = "PLAYER PHASE";
        tempTimer = Instantiate(timer);
    }

    public void enemyPhaseShow()
    {
        isTimed = true;
        phaseText.color = Color.red;
        phaseText.text = "ENEMY PHASE";
        tempTimer = Instantiate(timer);
    }

    public bool getTimed()
    {
        return (isTimed);
    }
}
