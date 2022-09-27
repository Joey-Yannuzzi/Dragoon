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

        // Start is called before the first frame update
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {

        }

        public void getMoveVision()
        {
            Vector3 tempOffset = new Vector3(0, 0, 0);
            int nonsense = 0;
            for (int bogus = 0; bogus <= mov; bogus ++)
            {
                tempOffset = new Vector3(squareOffsetX, squareOffsetY + bogus, 0.01f);
                Debug.Log(tempOffset);
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

            for (int bogus = 0; bogus < x - Math.Abs(transform.position.x); bogus++)
            {
                if (x > transform.position.x)
                {
                    transform.Translate(Vector3.right);
                }
                else
                {
                    transform.Translate(Vector3.left);
                }
            }
            for (int bogus = 0; bogus < y - Math.Abs(transform.position.y); bogus++)
            {
                if (y > transform.position.y)
                {
                    transform.Translate(Vector3.up);
                }
                else
                {
                    transform.Translate(Vector3.down);
                }
            }

            cursor.SetActive(true);

        }
    }
}
