/***************************************
* EECS2031B – Lab4 *
* Author: Saleh, Mohamed *
****************************************/

#include <stdio.h>

#define MY_PRINT(z)  printf("running average is %.3f\n", z)


double r_avg(int);

int main(int argc, char *argv[])
{
	
   int input;  
   printf("enter number (-1 to quit): ");
   scanf("%d", &input);

   while (input != -1){
        double res = r_avg(input);
        MY_PRINT(res);

        printf("enter number (-1 to quit): ");
        scanf("%d", &input);
    }
	
    return 0;
}

double r_avg(int currentInput)
{
    static int localSum; 
    static int localCount;
    
    localSum += currentInput;
    localCount ++;
    double resu = (double)localSum/localCount;
    return resu;
     
}
