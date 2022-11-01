using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using unit;

public class Wait : MonoBehaviour
{
    private GameObject player;
    [SerializeField] private GameObject cursor; 
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (cursor.GetComponent<CursorSet>().getTempcharacter())
        {
            player = cursor.GetComponent<CursorSet>().getTempcharacter();
        }
    }

    public void onClick()
    {
        transform.GetComponentInParent<CommandControl>().setSelected(true);
        transform.GetComponentInParent<CommandControl>().Reset();
        player.GetComponent<Unit>().move(cursor.transform.position - cursor.GetComponent<CursorSet>().offset, cursor, false);
    }
}
