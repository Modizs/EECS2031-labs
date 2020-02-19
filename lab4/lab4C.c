/***************************************
* EECS2031B – Lab4 *
* Author: Saleh, Mohamed *
****************************************/
#include <stdio.h>  
#include <ctype.h>  
#include <string.h> 
#include <stdlib.h> 


#define SIZE 20
#define SIZE2 40

int main(int argc, char *argv[])
{

    char input[SIZE2];
    char name[SIZE]; int ag; float wag;

    char resu[SIZE2], resu2[SIZE2], resu3[SIZE2];
	
    printf("Enter name, age and wage (exit to quit): ");

    fgets(input, 40, stdin);
    while (strcmp(input, "exit\n"))
    {       
        sscanf(input, "%s %d %f", name, &ag, &wag);
        ag += 10;
        wag *= 2; 
        name[0]=toupper(name[0]);
	 

        sprintf(resu, "%s-%d-%.3f-[%d,%d]", name,ag,wag, (int)floor(wag),(int)ceil(wag)); 
        
        strcpy(resu2, resu);
        sprintf(resu3, "%s", resu);

        printf("%s\n%s\n%s\n\n", resu, resu2, resu3);


        printf("Enter name, age and wage (exit to quit): ");
	fgets(input, 40, stdin);
     } 
     return 0;
}
