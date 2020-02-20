/*************************************** 
* EECS2031B – Lab 7 *
* Author: Saleh, Mohamed *
****************************************/

#include <stdio.h>
#include <stdlib.h>

int len();
void insertBegining(int);

struct node {
   int data;
   struct node * next;
};

struct node * head;

main()
{
   head = NULL;

  
  insertBegining(100);
  insertBegining(200);
  insertBegining(300);
  insertBegining(400);
  insertBegining(500);


  int i;
  struct node * cur;
  for(cur= head; cur != NULL; cur= cur->next)
    printf("%d ", cur->data);
  printf("\n");
}

int len(){
  int count = 0;
  struct node * curr;
  curr = head;
  while (curr != NULL){
    count ++;
    curr = curr -> next;
  }
  return count;

}

void insertBegining(int dat){

   
   struct node * newP;
   newP = malloc(sizeof(struct node));
        
   newP -> data = dat;
   
   newP -> next = head;
   
   head = newP;

}

/*  H1 does not work because the node structure is created in stack, which is deallocated when the function returns to main.
 We need space in Heap instead. Same issue in setArr2.c.
  Similar implementation in Java works, since we use 'new' to construct the node, 'new' is the way to request to HEAP so
the node is created in HEAP.
malloc/calloc is the way to request HEAP in C. */
