/***************************************
* EECS2031B – Lab4 *
* Author: Saleh, Mohamed *
* Email: mido1996@my.yorku.ca *
* eecs_username: Mido1996 *
* york_num: 213704150 *
****************************************/
#include <stdio.h>

int main()
{
   int age = 10, age2=100;
   int *ptr = &age;
   printf("age: %d %d\n", age, *ptr); 


   *ptr =  14;
   printf("age: %d %d\n", age, *ptr);  

   int *ptr2 = &age2;
   *ptr2 = *ptr;
   printf("age2:%d %d\n", age2, *ptr2);

   ptr2 = ptr;
   printf("ptr2's pointee: %d\n", *ptr2);
   printf("age: %d %d %d\n", age, *ptr, *ptr2);
  
   (*ptr2)--;   
   printf("age: %d %d %d\n", age, *ptr, *ptr2);  

   printf("%p %p %p\n", &age, ptr, ptr2); 
}
 
 
