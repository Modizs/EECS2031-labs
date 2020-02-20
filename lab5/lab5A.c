/***************************************
* EECS2031B � Lab 5 *
* Author: Saleh, Mohamed *
* Email: mido1996@my.yorku.ca *
* eecs_num: 213704150 *
* Yorku #: Mido1996
****************************************/
#include <stdio.h>

void reorder(int *, int *, int *);
void swap(int *px, int *py);
void swapIncre(int*, int*, int*);

int main( ) {
  int a, b,c; 

  scanf("%d %d %d", &a, &b,&c);
  while(a != -1) {
     printf("Original inputs:   a:%-4d  b:%-4d  c:%-4d\n", a, b,c);     
     swapIncre(&a, &b, &c);  
     printf("Rearranged inputs: a:%-4d  b:%-4d  c:%-4d\n\n", a, b,c);  

     scanf("%d %d %d", &a, &b,&c);
   }

}

void swapIncre(int* x, int* y, int* z){
   int temp = *x;
   *x = *z;
   *z = temp;
   *x += 100;


   *y *= 2;
}
