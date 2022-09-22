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
            Vector3 tempOffset = new Vector3(0, squareOffsetY, 0);
            for (int bogus = 0; bogus <= mov; bogus++)
            {
                Instantiate(moveSquare, (transform.position + tempOffset) + (new Vector3(0, 1, 0) * bogus), new Quaternion(0, 0, 0, 0), transform);
            }

            for (int bogus = -1; bogus >= mov * -1; bogus--)
            {
                Instantiate(moveSquare, (transform.position + tempOffset) + (new Vector3(0, 1, 0) * bogus), new Quaternion(0, 0, 0, 0), transform);
            }

            tempOffset = new Vector3(squareOffsetX, squareOffsetY, 0);
            for (int bogus = 1; bogus <= mov; bogus++)
            {
                Instantiate(moveSquare, (transform.position + tempOffset) + (new Vector3(1, 0, 0) * bogus), new Quaternion(0, 0, 0, 0), transform);
            }

            for (int bogus = -1; bogus >= mov * -1; bogus--)
            {
                Instantiate(moveSquare, (transform.position + tempOffset) + (new Vector3(1, 0, 0) * bogus), new Quaternion(0, 0, 0, 0), transform);
            }
            //Instantiate blue squares here
            //worry about terrain later
        }

        public void getAttackVision()
        {
            //Instantiate red squares here
        }
    }
}
