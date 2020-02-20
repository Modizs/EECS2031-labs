/***************************************
* EECS2031B – Lab 6 *
* Author: Saleh, Mohamed *
* Email: mido1996@my.yorku.ca *
* eecs_num: mido1996 *
* Yorku #: 213704150
****************************************/
#include <stdio.h>
#include <stdlib.h>

int getSum (char*[], int);

int getDiff(char*[], int);

int main(int argc, char *argv[])
{
        printf("There are %d arguments (excluding \"%s\")\n", argc-1, argv[0]);
        int i;
        if(getSum){
        for (i=1;i < argc; i++)
        {
           printf("%s ", argv[i]);
           if (i != argc -1) 
              printf("+ ");
        }
                printf("\n= %d\n", getSum(argv, argc-1));
        }if(getDiff){
        for (i=1;i < argc; i++)
        {
           printf("%s ", argv[i]);
           if (i != argc -1) 
              printf("- ");
        }
                printf("= %d\n", getDiff(argv, argc-1));

        }

        return 0;
        

}

int getSum(char * arr[], int howmany)
{
        int i; int sum = 0;

        for (i=1;i <= howmany ; i++)
        {
           sum += atoi( arr[i] );  
        }

        return sum;
}



int getDiff(char * arr[], int howmany)
{
        int i; int diff = 0;
	
        for (i=1;i <= howmany ; i++)
        {  

           diff -= atoi( arr[i] );  
        }
        
	return diff;
}
