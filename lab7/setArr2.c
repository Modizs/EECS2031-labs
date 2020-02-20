/*************************************** 
* EECS2031B – Lab 7 *
* Author: Saleh, Mohamed *
****************************************/

#include <stdio.h>

void setArr (int, int);

int * arr[10]; // array of 10 int pointers

int main(int argc, char *argv[])
{
     int i;
       
     setArr(0, -10);
     setArr(1, 100);
     setArr(2, 200);
     setArr(3, 300);
     setArr(4, 400);
       
        
     for(i=0; i<5;i++)
        printf("arr[%d] -*-> %d %d\n", i, *arr[i], **(arr+i) );   /* should be -10,100, 200,300,400 */
     return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value v */
void setArr (int index, int v){
     int i = v;
     arr[index] = &i;
}

/* this version is better than setArr1 because each pointer and pointer to pointer gets the address of variable i.
But because i is a local variable in function setArr(), which is in STACK and vanishes when setArr() returns, that’s why you get some weird results.
*/ 
