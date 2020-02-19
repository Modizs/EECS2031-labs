/***************************************
* EECS2031B – Lab3 *
* Author: Saleh, Mohamed *
* Email: mido1996@my.yorku.ca *
* eecs_username: Mido1996 *
* york_num: 213704150 *
****************************************/
#include <stdio.h>
#include <string.h>
#define SIZE 10
 
int my_atoi (char c[]);  
double my_pow (int base, int power);
   
int main(){
 int a,b;
 char arr  [SIZE];

 printf("Enter a word of postive number or 'quit': " );
 scanf("%s", arr);
 while(strcmp(arr,"quit"))
 {
   printf("%s\n", arr);
   int i;

   a = atoi(arr);
   printf("atoi:     %d (%#o, %#X)\t%d\t%.0f\n", a,a,a, a*2, my_pow(a,2));
  
   a= my_atoi(arr);
   printf("my_atoi:  %d (%#o, %#X)\t%d\t%.0f\n", a,a,a, a*2, my_pow(a,2));

   /* read again */
   printf("\nEnter a word of postive number or 'quit': " );
   scanf("%s", arr);
 }

 return 0;

}

int my_atoi (char c[]){

  int current_value=0;
  int len = strlen(c);  
   
  
  int pos = len-1; 
  int pw = 0;
  while (pos >=0)
  {
     int v = c[pos] -'0';

     current_value += v * my_pow(10, pw);
     
     pos --;  
     pw++; 
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