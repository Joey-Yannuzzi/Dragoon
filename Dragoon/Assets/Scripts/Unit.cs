using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace unit
{
    public class Unit : MonoBehaviour
    {
        public int lvl, exp, hp, str, skl, spd, lck, def, res, con, mov;
        private int attack, defense;
        private int accuracy, avoid;
        private int maxHp;
        private int atkSpd;
        public GameObject moveSquare;
        public GameObject attackSquare;
        public float squareOffsetY;
        public float squareOffsetX;
        public float speed;
        private bool isActive;
        private SpriteRenderer spriteRender;
        private GameObject target;
        private bool isSearching = false;

        // Start is called before the first frame update
        void Start()
        {
            spriteRender = GetComponent<SpriteRenderer>();
            isActive = true;
            maxHp = hp;
            target = null;
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

            setAttack();
            setDefense();
            setAtkSpd();
            setAccuracy();
            setAvoid();

            if (isSearching && target)
            {
                hitCheck(target);
                isSearching = false;
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

        public void move(Vector3 target, GameObject cursor, bool isAttack)
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

            if (!isAttack)
            {
                Reset();
            }
            else
            {
                getAttackVision();
            }
        }

        private void getAttackVision()
        {
            for (int bogus = -1; bogus <= 1; bogus++)
            {
                if (bogus != 0)
                {
                    Instantiate(attackSquare, new Vector3(transform.position.x + bogus + squareOffsetX, transform.position.y + squareOffsetY, 0.01f), new Quaternion(0, 0, 0, 0), transform);
                    Instantiate(attackSquare, new Vector3(transform.position.x + squareOffsetX, transform.position.y + bogus + squareOffsetY, 0.01f), new Quaternion(0, 0, 0, 0), transform);
                }
            }
        }

        private void Reset()
        {
            killAll();
            setTarget(null);
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

        //Initiates attack sequence
        //Gets all available enemeis/players depending on who is attacking
        //searhces if enemy is one tile away from destination
        //if true, run hitCheck() and break out of loop because only one attack is permitted
        //Logic Bug: players cannot select target, closest target is chosen
        public void attackInit(String type, Vector3 cursorPos, GameObject cursor)
        {
            //GameObject[] victim = getEntities(type);
            //GameObject target = cursor.GetComponent<CursorSet>().selectTarget(type);
            move(cursorPos, cursor, true);
            cursor.GetComponent<CursorSet>().setAttacking(true);
            isSearching = true;

            /*for (int bogus = 0; bogus < victim.Length; bogus++)
            {
                if ((cursorPos.x + 1 == victim[bogus].transform.position.x || cursorPos.x - 1 == victim[bogus].transform.position.x) && cursorPos.y == victim[bogus].transform.position.y)
                {
                    hitCheck(victim[bogus]);
                    break;
                }
                else if ((cursorPos.y + 1 == victim[bogus].transform.position.y || cursorPos.y - 1 == victim[bogus].transform.position.y) && cursorPos.x == victim[bogus].transform.position.x)
                {
                    hitCheck(victim[bogus]);
                    break;
                }
            }*/
        }

        //Checks the hit rate of the incoming attack
        //calculates true accuraxy by subtracting unit's accuracy from the victims avoid
        //Then generates two random float values, and averages them
        //If the average is less than trueAcc, the attack hits, and damage() runs
        //If not, the attack misses
        //Visual Bug: attack sequence does not play, as it has not been implemented or created yet, therefore, animations are immidiate (or as fast as the computer can calculate)
        private void hitCheck(GameObject victim)
        {
            System.Random rand = new System.Random();
            int trueAcc = accuracy - victim.GetComponent<Unit>().getAvoid();
            Debug.Log(trueAcc);
            float rn1 = (float)rand.NextDouble();
            float rn2 = (float)rand.NextDouble();
            float ave = ((rn1 + rn2) / 2) * 100;
            Debug.Log(ave);

            if (ave < trueAcc)
            {
                damage(victim);
            }
            else
            {
                Debug.Log("miss");
                Reset();
            }
        }

        //Calculates damage done to the victim
        //less than 0 damage is not possible, and is changed back to 0 damage
        //Sends damage number to the victim so it can subtract the damage number
        private void damage(GameObject victim)
        {
            int damage = attack - defense;

            if (damage < 0)
            {
                damage = 0;
            }

            victim.GetComponent<Unit>().takeDamage(damage);
            Reset();
        }

        //Subtracts damage from current hp
        //If hp drops below 1, unit dies
        //If not unit is still alive
        public void takeDamage(int damage)
        {
            hp = hp - damage;

            if (hp < 1)
            {
                Debug.Log(this.gameObject.name + " died");
                Destroy(this.gameObject);
            }
            else
            {
                Debug.Log(this.gameObject.name + " took " + damage + " damage");
            }
        }

        private GameObject[] getEntities(String type)
        {
            GameObject[] entities = GameObject.FindGameObjectsWithTag(type);
            return (entities);
        }

        private int getAttack()
        {
            return (attack);
        }

        //Subject to change when weapons/advantage/effectiveness is implemented
        private void setAttack()
        {
            attack = str;
        }

        private int getDefense()
        {
            return (defense);
        }

        //Subject to change when terrain
        private void setDefense()
        {
            defense = def;
        }

        private int getAccuracy()
        {
            return (accuracy);
        }

        private void setAccuracy()
        {
            accuracy = 75 + (skl * 2) + (lck / 2);
        }

        public int getAvoid()
        {
            return (avoid);
        }

        private void setAvoid()
        {
            avoid = (atkSpd * 2) + lck;
        }

        private int getAtkSpd()
        {
            return (atkSpd);
        }

        private void setAtkSpd()
        {
            atkSpd = spd;
        }

        public GameObject getTarget()
        {
            return (target);
        }

        public void setTarget(GameObject target)
        {
            this.target = target;
        }
    }
}
