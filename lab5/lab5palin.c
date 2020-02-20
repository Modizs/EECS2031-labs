/***************************************
* EECS2031B – Lab 5 *
* Author: Saleh, Mohamed *
****************************************/
#include <stdio.h>
#include <string.h>


int isPalindrome (char *);
int isPalindrome2 (char *);
int isPalindrome3 (char *);

void printReverse (char *);

int main ()
{   
   int result;  char c; int i;  int count=0;
   char arr[40];
  
   fgets(arr,40,stdin);
   while ( strcmp(arr, "quit\n"))
   {
      arr[strlen(arr)-1] = '\0'; 

      printReverse(arr);
   
      result = isPalindrome3 (arr);
      if (result==1) 
         printf ("\nIs a palindrome.\n\n");
      else 
         printf ("\nNot a palindrome.\n\n");
 
      fgets(arr,40,stdin);
    }
    
    return 0;
}


void printReverse(char * str){
  int i;
  for (i= strlen(str)-1; i >=0 ; i--)
     putchar(*(str+i));
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
