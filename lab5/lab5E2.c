/***************************************
* EECS2031B – Lab 5 *
* Author: Saleh, Mohamed *
* Email: mido1996@my.yorku.ca *
* eecs_num: 213704150 *
* Yorku #: Mido1996
****************************************/


#include <stdio.h>

#define MAX 20

int largest(int * x, int);
void display(int *arr, int);

 main(int argc, char *argv[])
 {
     int array[MAX], count;

     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array + count) = i;
        count++;
     }
      printf("Inputs: ");
      display(array, count);

  
     printf("\nLargest value: %d\n", largest(array, count));
     
     return 0;
 }
 

 void display(int *arr, int len)
 {
   int i=0;
   while ( i < len){
      printf("%d ", *(arr+i) ); 
       i++;
   } 
 }

 int largest(int * arr, int len)
 {
     int biggest = *arr;
     int i=1;
     while( i < len){
        int a = * (arr+i);
        if(a > biggest)
           biggest = a;
        i++;
     } 
     return biggest;
 }
