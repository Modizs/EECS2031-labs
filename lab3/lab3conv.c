/***************************************
* EECS2031B – Lab3 *
* Author: Saleh, Mohamed *
* Email: mido1996@my.yorku.ca *
* eecs_username: Mido1996 *
* york_num: 213704150 *
****************************************/
#include <stdio.h>


float calIntFloat(int, char,float);
float calIntInt (int, char,int);
float calFloatFloat (float, char,float);

main(){

 int op1; float op2;  char operator;
 float resu, resu2, resu3;


 while(1){
   printf("Enter operand1 operator operand2 separated by blanks: " );
   scanf( "%d %c %f",  &op1, &operator, &op2);
  
   if (op1 == -1 && op2==-1) 
      break;
   resu = calIntFloat(op1, operator,op2);
   resu2 = calIntInt(op1,operator, op2); 
   resu3 = calFloatFloat(op1,operator, op2);

   printf("Your input '%d %c %f' result in \n %f (fun_IF) \n %f (fun_II) \n %f (fun_FF)\n\n",op1, operator, op2, resu,resu2, resu3);

 } 


}
 
float calIntFloat(int op1, char operator, float op2)
{
   float resu; 
   if(operator == '+')
     resu = op1 + op2;
   else if (operator == '-')
     resu = op1 - op2;
   else if (operator == '*')
     resu = op1 * op2;
   else resu = op1 / op2;

   return resu;
}

float calIntInt(int op1, char operator, int op2)
{  
   float resu;
   if(operator == '+')
     resu = op1 + op2;
   else if (operator == '-')
     resu = op1 - op2;
   else if (operator == '*')
     resu = op1 * op2;
   else resu = op1 / op2;

   return resu;
}

float calFloatFloat(float op1, char operator, float op2)
{
   float resu;
   if(operator == '+')
   resu = op1 + op2;
   else if (operator == '-')
     resu = op1 - op2;
   else if (operator == '*')
     resu = op1 * op2;
   else resu = op1 / op2;

   return resu;
}
