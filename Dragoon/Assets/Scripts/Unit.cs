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
            if (isActive)
            {
                spriteRender.color = new Color(255, 255, 255);
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
