/***************************************
* EECS2031B – Lab 5 *
* Author: Saleh, Mohamed *
* Email: mido1996@my.yorku.ca *
* eecs_num: 213704150 *
* Yorku #: Mido1996
****************************************/
#include <stdio.h>
#include <string.h>

void sortArr(char *c);
void sortArr2(char *c);


int main()
{
   int result;  char c; int i;  int count=0;
   char arr[50];
   fgets(arr,50,stdin);
   while ( strcmp(arr,"quit\n") )
   {
       arr[strlen(arr)-1] = '\0'; 

       sortArr(arr);
       printf("%s\n\n", arr);

       fgets(arr,50,stdin);

    }
   return 0;
}

/*  selection sort */
void sortArr(char * c)
{

   int n = strlen(c); 
   int i;
   for (i=0; i<n-1; i++){
     int j; int minPos=i;
     for (j=i+1; j<n; j++){

         if (*(c+j) < *(c+minPos)){
           minPos = j; 
         }
     } 
     // swapping
     char tmp = *(c+i);
     *(c+i) = *(c+minPos);
     *(c+minPos) = tmp;
     
    } 

}

/* selection sort, another version, local pointers c1 c2 */
void sortArr2(char * c)
{

   int n = strlen(c); 
   int i;
   char *c1 = c;
   for (i=0; i<n-1; i++){
     int j = i+1; 
     int minPos=i;
     char * c2 = c+j;
     for (; j<n; j++){

         if (*c2 < *(c+minPos)){
           minPos = j; 
         }
         c2++;
     }
     char tmp = *c1;
     *c1 = *(c+minPos);
     *(c+minPos) = tmp;
     
     c1++;
    }

}


int isPalindrome (char * str)
{
    int i;
    int length = strlen(str);
    if (length<1) return 1;

   
    for (i=0; i<length/2; i++)
    {
      char a =  *(str+i) ;
      char b =  *(str + length-1-i)  ;

      if (a != b)
         return 0;
    }
	 
    return 1;
}

int isPalindrome2 (char *str)
{
    int length = strlen(str);
    int i=0; int j = length-1;
    while ( i < j)
    {
       if (*(str+i) != *(str+j)) 
          return 0;
       i++;
       j--;
    }
    return 1;
 }

int isPalindrome3 (char * str){   
    int len = strlen(str);
    char * end = str + len -1;   
    int i;
    while( str < end)
    {
        if ( * str != * end  ) 
           return 0;
        str ++;    
        end --;      
     }
     return 1;
}
