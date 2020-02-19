/***************************************
* EECS2031B – Lab1 *
* Author: Saleh, Mohamed *
* Email: mido1996@my.yorku.ca *
* eecs_username: mido1996 *
* York Student #: 213704150 
****************************************/

#include <stdio.h>

float sum (float i, float j);


int main()
{
   float x, y;
   printf("Enter two float numbers separated by ##: ");
   scanf("%f##%f", &x, &y );
   float su= sum(x,y);
   printf( "%.6f + %.6f = %.6f\n", x,y, su);

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i+j;             
}