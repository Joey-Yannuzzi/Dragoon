using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
                    Instantiate(attackSquare, (transform.position - (tempOffset - new Vector3(0, 1, 0))) + (new Vector3(1, 0, 0) * (bogus - (mov + 1))), new Quaternion(0, 0, 0, 0), transform);
                }

                for (int bogus2 = (mov * -1) + bogus; bogus2 <= mov - bogus; bogus2++)
                {
                    Instantiate(moveSquare, (transform.position + tempOffset) + (new Vector3(1, 0, 0) * bogus2), new Quaternion(0, 0, 0, 0), transform);

                    if (bogus == 0)
                    {

                    }
                    else
                    {
                        Instantiate(moveSquare, (transform.position - (tempOffset - new Vector3(0, 1, 0))) + (new Vector3(1, 0, 0) * bogus2), new Quaternion(0, 0, 0, 0), transform);
                    }
                }

                Instantiate(attackSquare, (transform.position + tempOffset) + (new Vector3(1, 0, 0) * ((mov + 1) - bogus)), new Quaternion(0, 0, 0, 0), transform);

                if (bogus == 0)
                {

                }
                else
                {
                    Instantiate(attackSquare, (transform.position - (tempOffset - new Vector3(0, 1, 0))) + (new Vector3(1, 0, 0) * ((mov + 1) - bogus)), new Quaternion(0, 0, 0, 0), transform);
                }
            }

            Instantiate(attackSquare, transform.position + (tempOffset + new Vector3(0, 1, 0)), new Quaternion(0, 0, 0, 0), transform);
            Instantiate(attackSquare, transform.position - tempOffset, new Quaternion(0, 0, 0, 0), transform);
            //worry about terrain later
        }
    }
}
