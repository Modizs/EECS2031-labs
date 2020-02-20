/***************************************
* EECS2031B – Lab 7 * * Author: Saleh, Mohamed * * Email: mido1996@my.yorku.ca *
* eecs_num: mido1996 * * York #: 213704150
 ****************************************/

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 50
#define MAX_LEN 30

struct integers
{
  int int1;
  int int2;
};

struct node {
   int data;
   struct node *next;
};


void init( );
void display();
int len();
int search(int);
int get(int);
void insert(int d );
void insertAfter(int key, int index);
void delete0 (int d);
void delete (int d);
void deleteEnh (int d);




struct node * head;

int main()
{
    int i, key, index;

    struct integers arr[MAX_LEN];

    char buffer[BUFFER_SIZE];
    int int1, int2;
    int count= 0;

    FILE * file;
    file = fopen("data.txt", "r");

    while (fgets(buffer, BUFFER_SIZE, file) != NULL)
    {
       sscanf(buffer, "%d %d", &int1, &int2);

       arr[count].int1 = int1;
       arr[count].int2 = int2;
       count++;
    }

    fclose(file);

    for(i=0; i< count; i++){
        printf("arr[%d]: %d %d\n", i, arr[i].int1, arr[i].int2);
    }

    printf("\n");
    init();

    i=0;
    for(; i< count; i++){
        struct integers current = arr[i];
        int value = current.int1 + current.int2;

        insert(value);
        printf("insert %d: (%d)", value, len());
        display();
    }

    int removeList [] = {0,1,2,3,  5,6,7,8,9, -10000};
    i=0;
    while ( (key=removeList[i]) != -10000){
        
        delete(key);
        printf("remove %d: (%d)", key, len()); display();
        i++;
    }

    int addList [] = {7,3,5,6,8,9, 2,0,1, -10000};
    i=0;
    while ( (key=addList[i]) != -10000){
        
        insert(key);
        printf("insert %d: (%d)", key, len());
        display();
        i++;
    }

    printf("\n");
    key =-4; index =2; insertAfter(key,index);
    printf("insert %d after index %d: (%d)\t", key,index,len()); display();
    key =-6; index = 0; insertAfter(key,index);
    printf("insert %d after index %d: (%d)\t", key,index,len()); display();
    key =-8; index = 6;insertAfter(key,index);
    printf("insert %d after index %d: (%d)\t", key,index,len()); display();



    printf("\n");
    int searchList [] = {5,50,9,19,0,-4, -10000};
    i=0;
    while ( (key = searchList[i++]) != -10000 ){
         
        printf("search %3d ....  ", key);
        
        if (search(key))
            printf("found\n");
        else
            printf("not found\n");
    }


    int v = get(0);  printf("\nget(0): %d\n", v);
    v = get(3);  printf("get(3): %d\n", v);
    v = get(6);  printf("get(6): %d\n", v);
    v = get(11);  printf("get(11): %d\n", v);


}

void init( )
{
    head = NULL;
}

void display()
{
    struct node *current = head;
    while (current != NULL){
       printf( "%4d", current->data );
       current = current -> next;
    }printf( "\n" );

}

int len()
{
    struct node * current = head;
    int count=  0;
    while (current != NULL)
    {
       count++;
       current = current -> next;
    }
    return count;
}


int get(int index){
    struct node * current = head;

    int i = 0;
    while (i < index){
        current = current -> next;
        i++;
    }
       
    return current -> data;


}

int search (int key)
{
    struct node * current = head;

    while (current != NULL ){
       if (current->data == key)
         return 1;
       
       current = current -> next;
  }
  return 0;
}

void insert(int d )
{
    struct node * newP = malloc (sizeof(struct node));
    newP -> data = d;

    if (head == NULL){
        newP -> next = head;
        head = newP;
    }
    else{
        struct node * current = head;

        while (current -> next != NULL)
        {
            current  = current -> next;
        }
       newP-> next = current->next;
       current-> next = newP;

    }

 }

void insertAfter(int d, int index)
{
    struct node * newP = malloc (sizeof(struct node));
    newP -> data = d;

    struct node * current = head;

    int i = 0;
    while (i < index){
        current = current -> next;
        i++;
    }
    
    newP->next = current->next;
    current->next = newP;

 }

void delete0(int d)
{
   if (head -> data == d){
        head = head -> next;
    }

   else
    {
        struct node * current = head;
        while ( current -> next-> data != d )
            current  = current  -> next;

        current -> next = current->next->next;
    }
}


void delete(int d)
{
   
   if (len() == 0){

       fprintf(stderr, "empty");
       return;
   }
   if (head -> data == d){
        struct node * tmp = head;
        head = head -> next;
        
        free(tmp);
    }

   else
    {
        struct node * current = head;
        while ( current -> next-> data != d )
            current  = current  -> next;
        
        struct node * tmp = current -> next;
        current -> next = current->next->next;
        free(tmp);
    }
}


void deleteEnh(int d)
{
   if (len() == 0){

       fprintf(stderr, "empty");
       return;
   }

   if (head -> data == d)
   {
       struct node * tmp = head;
       head = head -> next;
       free(tmp);
    }
    else{
        struct node * current = head;
        
        while ( current -> next != NULL && current -> next-> data != d )
            current  = current  -> next;

        
        if (current -> next != NULL){
           struct node * tmp = current -> next;
           current -> next = current->next->next;
           free (tmp);
        }
       
    }

}
