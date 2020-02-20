/***************************************
* EECS2031B – Lab 5 *
* Author: Saleh, Mohamed *
****************************************/

#include <stdio.h>

#define MAX 20
 

int largest(int * x);
void display(int *arr);

 main(int argc, char *argv[])
 {
     int array[MAX], count;


     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array + count) = i;
        count++;
     }
     *(array+count) = -100; 

      printf("inputs: ");
      display(array);

     printf("\nLargest value: %d\n", largest(array));
     
     return 0;
 }
 
 void display(int *arr)
 {
   int i=0;
   while ( * (arr+i) >= 0){
      printf("%d ", *(arr+i) ); 
      i++;
   } 
 }


 int largest(int * arr)
 {
     int biggest = *arr; 
     int i=1;
     while( *(arr+i) >= 0){
        int a = * (arr+i);
        if(a > biggest)
           biggest = a;
        i++;
     } 
     return biggest;
 }
