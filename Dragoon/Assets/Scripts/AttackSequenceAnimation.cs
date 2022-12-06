using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackSequenceAnimation : MonoBehaviour
{
    [SerializeField] private int frameSkip;
    private int frame;
    [SerializeField] private GameObject enemy, player;
    private bool playerTurn, init = false;
    [SerializeField] float distance;
    private bool moveBack;
    private Vector3 playerPos, enemyPos;
    private int count;

    void Start()
    {
        moveBack = false;
        playerPos = player.transform.position;
        enemyPos = enemy.transform.position;
        count = 0;
    }

    void Update()
    {
        
    }

    private void FixedUpdate()
    {
        if (init)
        {
            frame++;

            if (frame%frameSkip == 0 && playerTurn)
            {
                playerMove();
            }
            else if (frame%frameSkip == 0 && !playerTurn)
            {
                enemyMove();
            }
        }
    }

    public void animationInit(bool playerTurn)
    {
        this.playerTurn = playerTurn;
        init = true;
    }

    private void playerMove()
    {
        if (!moveBack)
        {
            
            if (getDistance() < distance)
            {
                player.GetComponent<Animator>().SetBool("isRunning", false);
                player.GetComponent<Animator>().SetTrigger("isAttacking");
                moveBack = true;
            }
            else
            {
                player.GetComponent<Animator>().SetBool("isRunning", true);
                player.transform.Translate(Vector3.right);
            }
        }

        if (player.transform.position == playerPos)
        {
            moveBack = true;
            player.GetComponent<Animator>().SetBool("isRunning", false);
        }

        if (moveBack && player.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).IsName("Idle"))
        {
            player.transform.Rotate(0, 180, 0);
            player.transform.Translate(Vector3.right);
            moveBack = false;
            count++;
        }

        if (count == 2)
        {
            count = 0;
            playerTurn = false;
        }
    }

    private void enemyMove()
    {
        if (!moveBack)
        {

            if (getDistance() < distance)
            {
                enemy.GetComponent<Animator>().SetBool("isRunning", false);
                enemy.GetComponent<Animator>().SetTrigger("isAttacking");
                moveBack = true;
            }
            else
            {
                enemy.GetComponent<Animator>().SetBool("isRunning", true);
                enemy.transform.Translate(Vector3.left);
            }
        }

        if (enemy.transform.position == enemyPos)
        {
            moveBack = true;
            enemy.GetComponent<Animator>().SetBool("isRunning", false);
        }

        if (moveBack && enemy.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).IsName("Idle"))
        {
            enemy.transform.Rotate(0, 180, 0);
            enemy.transform.Translate(Vector3.left);
            moveBack = false;
            count++;
        }

        if (count == 2)
        {
            count = 0;
            playerTurn = true;
        }
    }

    private float getDistance()
    {
        float distance;
        distance = Vector3.Distance(player.transform.position, enemy.transform.position);
        return (distance);
    }
}
