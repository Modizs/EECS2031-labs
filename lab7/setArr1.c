/***************************************
* EECS2031B – Lab 7 * * Author: Saleh, Mohamed * * Email: mido1996@my.yorku.ca *
* eecs_num: mido1996 * * York #: 213704150
 ****************************************/

#include <stdio.h>

void setArr (int, int);

int * arr[10]; // array of 10 int pointers, global variable

int main(int argc, char *argv[])
{
     int i;
       
     setArr(0, -10);
     setArr(1, 100);
     setArr(2, 200);
     setArr(3, 300);
     setArr(4, 400);
       
     for(i=0; i<5;i++)
         printf("arr[%d] -*-> %d %d\n", i, *arr[i], **(arr+i));  /* should be -10, 100, 200, 300, 400 */

     return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value v */
void setArr (int index, int v){
     int i = v;
     * arr[index] = i;
}


/* you get Segmentation Fault because there was not initialization of each pointer.
There are some garbage value contained in it. Trying to store information to that garbage
address which causes a Segmentation Fault. C language reacts by giving a segmentation fault to protect against this attempt.
This is same as:

int * p;  *p = 5;
*/
