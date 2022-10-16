using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace unit
{
    public class Unit : MonoBehaviour
    {
        public int lvl, exp, hp, str, skl, spd, lck, def, res, con, mov;
        public GameObject moveSquare;
        public GameObject attackSquare;
        public float squareOffsetY;
        public float squareOffsetX;
        public float speed;
        private bool isActive;
        private SpriteRenderer spriteRender;

        // Start is called before the first frame update
        void Start()
        {
            spriteRender = GetComponent<SpriteRenderer>();
            isActive = true;
        }

        // Update is called once per frame
        void Update()
        {
            if (isActive && this.gameObject.CompareTag("Player"))
            {
                spriteRender.color = new Color(255, 255, 255);
            }
            else if (isActive && this.gameObject.CompareTag("Enemy"))
            {
                spriteRender.color = new Color(255, 0, 0);
            }
            else
            {
                spriteRender.color = new Color(0, 0, 0);
            }
        }

        public void getMoveVision()
        {
            Vector3 tempOffset = new Vector3(0, 0, 0);
            int nonsense = 0;
            for (int bogus = 0; bogus <= mov; bogus ++)
            {
                tempOffset = new Vector3(squareOffsetX, squareOffsetY + bogus, 0.01f);
                Instantiate(attackSquare, (transform.position + tempOffset) + (new Vector3(1, 0, 0) * (bogus - (mov + 1))), new Quaternion(0, 0, 0, 0), transform);

                if (bogus ==0)
                {

                }
                else
                {
                    tempOffset = new Vector3(squareOffsetX, squareOffsetY + bogus, -0.01f);
                    Instantiate(attackSquare, (transform.position - (tempOffset - new Vector3(0, 1, 0))) + (new Vector3(1, 0, 0) * (bogus - (mov + 1))), new Quaternion(0, 0, 0, 0), transform);
                }

                for (int bogus2 = (mov * -1) + bogus; bogus2 <= mov - bogus; bogus2++)
                {
                    tempOffset = new Vector3(squareOffsetX, squareOffsetY + bogus, 0.01f);
                    Instantiate(moveSquare, (transform.position + tempOffset) + (new Vector3(1, 0, 0) * bogus2), new Quaternion(0, 0, 0, 0), transform);

                    if (bogus == 0)
                    {

                    }
                    else
                    {
                        tempOffset = new Vector3(squareOffsetX, squareOffsetY + bogus, -0.01f);
                        Instantiate(moveSquare, (transform.position - (tempOffset - new Vector3(0, 1, 0))) + (new Vector3(1, 0, 0) * bogus2), new Quaternion(0, 0, 0, 0), transform);
                    }
                }

                tempOffset = new Vector3(squareOffsetX, squareOffsetY + bogus, 0.01f);
                Instantiate(attackSquare, (transform.position + tempOffset) + (new Vector3(1, 0, 0) * ((mov + 1) - bogus)), new Quaternion(0, 0, 0, 0), transform);

                if (bogus == 0)
                {

                }
                else
                {
                    tempOffset = new Vector3(squareOffsetX, squareOffsetY + bogus, -0.01f);
                    Instantiate(attackSquare, (transform.position - (tempOffset - new Vector3(0, 1, 0))) + (new Vector3(1, 0, 0) * ((mov + 1) - bogus)), new Quaternion(0, 0, 0, 0), transform);
                }

                nonsense = bogus;
            }

            tempOffset = new Vector3(squareOffsetX, squareOffsetY + nonsense, 0.01f);
            Instantiate(attackSquare, transform.position + (tempOffset + new Vector3(0, 1, 0)), new Quaternion(0, 0, 0, 0), transform);
            tempOffset = new Vector3(squareOffsetX, squareOffsetY + nonsense, -0.01f);
            Instantiate(attackSquare, transform.position - tempOffset, new Quaternion(0, 0, 0, 0), transform);
            //worry about terrain later
        }
        public void killAll()
        {
            int count = transform.childCount;

            for (int bogus = 0; bogus < count; bogus++)
            {
                Destroy(this.gameObject.transform.GetChild(bogus).gameObject);
            }
        }

        public void move(Vector3 target, GameObject cursor)
        {
            cursor.SetActive(false);
            float x = target.x;
            float y = target.y;
            float z = target.z;
            int loopX = (int) (x - transform.position.x);
            int loopY = (int) (y - transform.position.y);
            Vector3 xMove;
            Vector3 yMove;
            try
            {
                xMove = new Vector3(loopX / Math.Abs(loopX), 0, 0);
            }
            catch (DivideByZeroException)
            {
                xMove = new Vector3(0, 0, 0);
            }

            try
            {
                yMove = new Vector3(0, loopY / Math.Abs(loopY), 0);
            }
            catch (DivideByZeroException)
            {
                yMove = new Vector3(0, 0, 0);
            }

            while (transform.position.x != target.x)
            {
                transform.Translate(xMove * speed);
            }

            while (transform.position.y != target.y)
            {
                transform.Translate(yMove * speed);
            }

            killAll();
            cursor.SetActive(true);
            setActive(false);
        }

        //Enemy only script
        //Activated by EnemyControl.moveInit()
        //Searches for all player objects
        //Runs enemyMoveCalc() with players parameter
        //is returned the player closest to the enemy
        //Sets player's position to the enemy's target and calculates direction of the player
        //runs a while loop to allign the enemy on the x position of the target
        //runs similar while loop to allign to y position of the target
        //Logic Bug: enemy has the ability to overlap a player; will fix through testing later
        //while loops stop when the position is met, or if tempMov goes to 0, because this means the enemy used up all their movement for the turn
        //finally, runs setActive() with false parameter which helps the EnemyControl script know what enemies moved, and what enemies did not move
        //Edit: DivideByZeroException still activated even through I thought it would not; need to look more into this
        public void enemyMove()
        {
            GameObject[] players;
            GameObject closest;
            players = GameObject.FindGameObjectsWithTag("Player");
            closest = enemyMoveCalc(players);
            Vector3 target = closest.transform.position;
            float x = target.x;
            float y = target.y;
            int loopX = (int)(x - transform.position.x);
            int loopY = (int)(y - transform.position.y);
            Vector3 xMove;
            Vector3 yMove;

            try
            {
                xMove = new Vector3(loopX / Math.Abs(loopX), 0, 0);
            }
            catch (DivideByZeroException)
            {
                xMove = new Vector3(0, 0, 0);
            }

            try
            {
                yMove = new Vector3(0, loopY / Math.Abs(loopY), 0);
            }
            catch (DivideByZeroException)
            {
                yMove = new Vector3(0, 0, 0);
            }

            if (xMove.x < 0)
            {
                x++;
            }
            else if (xMove.x > 0)
            {
                x--;
            }
            else if (yMove.y < 0)
            {
                y++;
            }
            else if (yMove.y > 0)
            {
                y--;
            }

            int tempMov = mov;

            while (transform.position.x != x && tempMov > 0)
            {
                transform.Translate(xMove * speed);
                tempMov--;
            }

            while (transform.position.y != y && tempMov > 0)
            {
                transform.Translate(yMove * speed);
                tempMov--;
            }

            setActive(false);
        }

        //Enemy only script
        //Calculates closest gameObject to the enemy
        //Used to see which player is closest
        //Sets the return gameObject to second gameObject in array
        //Compares said return value to the object before it in the array
        //Checks to see which is closer, by using the distance formula
        //If the new distance is less than the original distance, overwrite the player and distance to the new one
        //Efficiency Fix: have the for loop run from int = 1 to int = length + 1, instead of starting at 0
        //After loop, return the player variable
        //Called in enemyMove()
        //Bug: will fail if only one player exists; must fix later
        private GameObject enemyMoveCalc(GameObject[] players)
        {
            double distance = 0;
            double tempDistance = 0;
            GameObject player = null;
            GameObject tempPlayer = null;

            for (int bogus = 0; bogus < players.Length + 1; bogus++)
            {
                if (bogus == 1)
                {
                    player = players[bogus];
                    distance = Math.Sqrt(Math.Pow(this.gameObject.transform.position.x - player.transform.position.x, 2) + Math.Pow(this.gameObject.transform.position.y - player.transform.position.y, 2));
                }

                if (bogus > 0)
                {
                    tempPlayer = players[bogus - 1];
                    tempDistance = Math.Sqrt(Math.Pow(this.gameObject.transform.position.x - tempPlayer.transform.position.x, 2) + Math.Pow(this.gameObject.transform.position.y - tempPlayer.transform.position.y, 2));

                    if (tempDistance < distance)
                    {
                        distance = tempDistance;
                        player = tempPlayer;
                    }
                }
            }
            return (player);
        }

        public bool getActive()
        {
            return (isActive);
        }

        public void setActive(bool active)
        {
            isActive = active;
        }
    }
}
