/***************************************
* EECS2031B – Lab4 *
* Author: Saleh, Mohamed *
****************************************/
int count=0,sum=0;
double resu;

int main(int argc, char *argv[])
{

int input;

printf("enter number (-1 to quit): ");
scanf("%d", &input);

while(input != -1)
{
sum=sum+input;
count++;
runningAverage();
printf("running average is %d / %d = %.3f ", sum,count,resu);
/* read again */
printf("enter number (-1 to quit): ");
scanf("%d", &input);

}

return 0;
}
