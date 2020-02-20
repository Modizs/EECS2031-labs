/***************************************
* EECS2031B – Lab 6 *
* Author: Saleh, Mohamed *
* Email: mido1996@my.yorku.ca *
* eecs_num: mido1996 *
* Yorku #: 213704150
****************************************/

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

 #define MAXLINES 30

 void exchange(char p[][50]);
 void printArray(char p[][50], int);

 main()
 {
     int count=0;  char inputs[MAXLINES][50];
     printf("sizeof inputs: %d\n\n", sizeof inputs);
 
     printf("Enter string: ");
     fgets(inputs[count], 50, stdin);
     
     while (strcmp("xxx\n", inputs[count]) !=0 )
     {
     
       count++;
       
       printf("Enter string: ");
       fgets(inputs[count], 50, stdin);
     
     }
     printf("\n");
     printArray(inputs, count);

     int i;
     for(i=0; i< 50; i++){
       char tmp = inputs[0][i];
       inputs[0][i] = inputs[1][i];
       inputs[1][i] = tmp;
     }

     exchange(inputs);

     printf("\n== after swapping ==\n");
     printArray(inputs, count); 

     
     return 0;
 }


 void exchange(char p[][50])
 {
     int a, b;
     char tmp[50];
     strcpy(tmp,p[2]);
     strcpy(p[2],p[3]);
     strcpy(p[3], tmp);

     int i;
     for(i=0; i< 50; i++){
       char tmp = p[4][i];
       p[4][i] = p[5][i];
       p[5][i] = tmp;
     }

 }

 void printArray(char p[][50], int n)
 {
     int count;

     for (count = 0; count < n; count++)
        printf("[%d]: %s", count, p[count]);
 }                         // or  *(p+count)
