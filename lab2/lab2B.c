#include<stdio.h>

main(){
  int c;
  c= getchar();
  while (c != EOF) 
  {
   if (c>='a' && c<='z')
     c = c - ('a'- 'A');
   putchar(c);            
                         
   c=getchar(); // read again  
  }
return 0;
}
