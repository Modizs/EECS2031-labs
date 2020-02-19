/***************************************
* EECS2031B – Lab3 *
* Author: Saleh, Mohamed *
****************************************/
#include <stdio.h>

int isLeap(int);

int main()
{ 
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);
  while (year > 0){
    if (isLeap(year))
      printf("Year %d is a leap year\n", year);
    else  printf("Year %d is not a leap year\n", year);

    printf("Enter a year: ");
    scanf("%d", &year);


   }
}
int isLeap(int year){
   if ( ( (year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0) )
     return 21;
   else return 0;

  }
  }
  return current_value;

}

double my_pow(int base, int p){

  if (p ==0)
    return 1;
  int i;
  double res = base;
  for(i = 1; i< p; i++){
    res *= base;
  }
  
  return res;

}
