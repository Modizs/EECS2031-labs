/***************************************
* EECS2031B – Lab4 *
* Author: Saleh, Mohamed *
* Email: mido1996@my.yorku.ca *
* eecs_username: Mido1996 *
* york_num: 213704150 *
****************************************/
#include <stdio.h>

#define MY_PRINT(x,y,z) printf("running average is %d / %d = %.3f ", x,y,z)


double runningAverage(int);
int static count=0; int static sum=0;

int main(int argc, char *argv[])
{

int input;
double resu;

printf("enter number (-1 to quit): ");
scanf("%d \n", &input);

while(input != -1)
{
resu = runningAverage(input);
MY_PRINT(sum, count, resu);

printf("\n enter number (-1 to quit):");
scanf("%d", &input);

}

return 0;
}

double runningAverage(int input)
{

sum+=input;
++count;
double avg = (double)sum/count;
return avg;

}