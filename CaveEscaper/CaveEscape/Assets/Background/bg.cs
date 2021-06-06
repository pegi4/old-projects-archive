using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bg : MonoBehaviour
{
    // Start is called before the first frame update
    float x = -3.587581f;
    float y = 3.415837f;
    float z = 0;
    void Start()
    {
        transform.position = new Vector3(x, y, z);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
        {
            transform.position += new Vector3(0.0005f, 0, 0);
        }
        //Right
        if (Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow))
        {
            transform.position += new Vector3(-0.0005f, 0, 0);
        }
    }
}
