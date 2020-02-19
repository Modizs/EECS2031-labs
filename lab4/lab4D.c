/***************************************
* EECS2031B – Lab4 *
* Author: Saleh, Mohamed *
* Email: mido1996@my.yorku.ca *
* eecs_username: Mido1996 *
* york_num: 213704150 *
****************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 20
#define COLUMNS 30


int main(int argc, char *argv[])
{
        char inputs[ROWS][COLUMNS];
        
        int current_row = 0; int i;
        char name[10]; 
        int age; 
        float wage;
       
        while(1)        
        { 
	   
           printf("Enter name age and wage: ");
           fgets(inputs[current_row], 30, stdin);   
         
           sscanf(inputs[current_row],"%s %d %f", name, &age, &wage); 
	   if (! strcmp(name, "xxx")) break;

           age += 10;
           wage *= 1.5;
	   
           for(i=0; i< strlen(name); i++){
              name[i] = toupper(name[i]);
           }
	     
           sprintf(inputs[current_row+1], "%s %d %.2f\n", name,age,wage);
           current_row += 2;
		   
        }
       
        printf("\nrecords generated in %s %s %s\n", __FILE__, __DATE__, __TIME__);
        for(i=0; i< current_row; i++)
           fputs(inputs[i],stdout); 
          

       return 0;
}
