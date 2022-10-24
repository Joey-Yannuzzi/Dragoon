using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Controller : MonoBehaviour
{
    private int phase; //0 = player, 1 = enemy, 2 = ally, 3 = 3rd army, -1 = inactive
    private bool start;
    private bool isEnemy = false;
    private bool isPlayer = false;
    private bool isAlly = false;
    private bool is3rd = false;
    public GameObject cursor;
    private int count;
    public GameObject playerController;
    public GameObject enemyController;
    private bool enemyStart;
    private int runCount;

    // Start is called before the first frame update
    void Start()
    {
        runCount = 0;
        phase = -1;
        setStart(true);
        cursor.SetActive(false);
        enemyStart = false;
        Cursor.visible = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (isPlayer)
        {
            playerPhase();
        }
        else if (isEnemy)
        {
            enemyPhase();
        }
        else if (isAlly)
        {
            allyPhase();
        }
        else if (is3rd)
        {
            armyPhase();
        }
        else if (start)
        {
            switch (phase)
            {
                case 0:
                    isPlayer = true;
                    this.gameObject.GetComponent<TextControl>().playerPhaseShow();
                    break;
                case 1:
                    isEnemy = true;
                    this.gameObject.GetComponent<TextControl>().enemyPhaseShow();
                    break;
                case 2:
                    isAlly = true;
                    break;
                case 3:
                    is3rd = true;
                    break;
            }
            start = false;
        }

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Cursor.visible = true;
        }
    }

    public bool getStart()
    {
        return (start);
    }

    private void setStart(bool start)
    {
        playerController.GetComponent<PlayerControl>().Reset();
        enemyController.GetComponent<EnemyControl>().Reset();
        this.start = start;
        phase++;
        runCount = 0;
    }

    private void playerPhase()
    {
        if (!this.gameObject.GetComponent<TextControl>().getTimed() && runCount == 0)
        {
            cursor.SetActive(true);
            runCount++;
        }
        if (!playerController.gameObject.GetComponent<PlayerControl>().getActive())
        {
            isPlayer = false;
            setStart(true);
            cursor.SetActive(false);
        }
    }

    private void enemyPhase()
    {
        if (!this.gameObject.GetComponent<TextControl>().getTimed())
        {
            setEnemyStart(true);
        }
        if (!enemyController.gameObject.GetComponent<EnemyControl>().getActive())
        {
            isEnemy = false;
            setEnemyStart(false);
            setStart(true);
        }
        //Debug.Log("Enemy Phase start");
    }

    private void allyPhase()
    {
        //Debug.Log("Ally phase start");
        isAlly = false;
        setStart(true);
    }

    private void armyPhase()
    {
        //Debug.Log("3rd Team phase start");
        is3rd = false;
        phase = -1;
        setStart(true);
    }

    private void setEnemyStart(bool enemyStart)
    {
        this.enemyStart = enemyStart;
    }

    public bool getEnemyStart()
    {
        return (enemyStart);
    }
}
