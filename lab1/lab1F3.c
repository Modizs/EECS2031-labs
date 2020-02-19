/***************************************
* EECS2031B – Lab1 *
* Author: Saleh, Mohamed *
* Email: mido1996@my.yorku.ca *
* eecs_username: mido1996 *
* York Student #: 213704150 
****************************************/

#include <stdio.h> // define EOF

main(){
 int c;
 int count = 0;
 int count2 = 0;
 c = getchar();
 while(c != EOF) /* no end of file*/
 { 
    if( c == '\n'){
        count--;
        count2++;
    }
   count++; //include spaces and '\n'

   c = getchar(); /* read next */

 }

 printf("# of chars: %d\n",count);
 printf("# of lines: %d\n",count2);

}
