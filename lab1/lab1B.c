/***************************************
* EECS2031B – Lab1 *
* Author: Saleh, Mohamed *
* Email: mido1996@my.yorku.ca *
* eecs_username: mido1996 *
* York Student #: 213704150 
****************************************/

#include <stdio.h>


int sum (int i, int j)
{
  return i+j;           
}


main()
{
  int m, d, y;
  printf("Enter month, day and year separated by spaces: " );
 
  scanf( "%d %d %d",  &m, &d, &y);     /* assign value to a b  */
 
  printf("The input '%d %d %d'. is reformatted as %d/%d/%d and %d-%d-%d", m, d, y, y, m, d, y, m, d);
}
