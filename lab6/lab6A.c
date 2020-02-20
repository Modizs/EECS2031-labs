/***************************************
* EECS2031B – Lab 6 *
* Author: Saleh, Mohamed *
****************************************/

#include <stdio.h>
#include <string.h>

main(){

 int *p, in=10; p = &in;
 printf("%d\n\n", *p );

 char arr[]="hello";
 char *ptr = arr;
 printf("%s %s %s\n", &arr[0], arr, ptr);  
 printf("%d %d %d\n", strlen(&arr[0]), strlen(arr), strlen(ptr));
 
 printf("%s %s %s\n", &arr[2], arr+2, ptr+2); 
 printf("%d %d %d\n\n", strlen(&arr[2]), strlen(arr+2), strlen(ptr+2));


 printf("%c %c %c\n", arr[0], *ptr, *arr, ptr[0]); 
 
 printf("%c %c %c\n", arr[1], *(ptr+1), *(arr+1) ); 

 
 printf("%c %c %c\n\n", arr[4], *(ptr+4), *(arr+4) ); 

 
 int i=1; int j=3;  int k; int n;
 int * arrP[3]; 
 
 int * pi = &i;
 arrP[0]= pi;
 arrP[1]= &j;
 arrP[2]= &k;
 
 *arrP[2] = 5; 

 n=0;
 for (; n<3; n++)  
   printf("%d %d\n", *arrP[n], **(arrP+n));  
 
 int ** pp0 = arrP;

 for (n=0; n<3; n++)  
   printf("%d\n",  **(pp0+n)); 
 


 char * planets[] = {"Mercury", "Venus", "Earth",
	                     "Mars", "Jupiter", "Saturn",
	                     "Uranus", "Neptune", "Pluto"};
 
 printf("\n%s  %s  %d %d\n", planets[0], *planets, strlen(planets[0]), strlen(*planets));
 
 printf("%s  %s\n", planets[1], *(planets+1));
 
 printf("%s  %s\n", planets[4],*(planets+4));
 
  printf("%s  %s\n", planets[5],*(planets+5));
 
 printf("%s  %s\n\n", planets[7],*(planets+7));
 
 char **pp = planets;

 printf("%s\n", *(pp)); 
 
 printf("%s\n", *(pp+1));
 
 printf("%s\n", *(pp+4));
 
 printf("%s\n", *(pp+5));
 
  printf("%s\n\n", *(pp+7));

  printf("%c  %c  %c\n", planets[0][0],  **planets,  **pp );
  printf("%c  %c  %c\n", planets[4][3],  *(*(planets+4)+3),  *(*(pp+4)+3) );
  printf("%c  %c  %c\n", planets[6][0],   *(*(planets+6)+0),  *(*(pp+6)+0) );
  printf("%c  %c  %c\n", planets[7][12],   *(*(planets+7)+12),  *(*(pp+7)+12) );  

}
