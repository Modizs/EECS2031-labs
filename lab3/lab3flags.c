/***************************************
* EECS2031B – Lab3 *
* Author: Saleh, Mohamed *
****************************************/
#include <stdio.h>

void printBinary(int);

int main() {

  int r, g,b;
  unsigned int rgb_pack;
  int r_unpack, g_unpack,b_unpack;
  int r8,g8,b8;
  int alpha = 100;

  printf("enter R value (0~255): ");
  scanf("%d",&r);
  printf("enter G value (0~255): ");
  scanf("%d",&g);
  printf("enter B value (0~255): ");
  scanf("%d",&b);

  while(! (r<0 || g<0 || b <0) )
 {		
    printf("A: %d\t", alpha);  printBinary(alpha); printf("\n");
    printf("R: %d\t", r);  printBinary(r); printf("\n");
    printf("G: %d\t", g);  printBinary(g); printf("\n"); 
    printf("B: %d\t", b);  printBinary(b); printf("\n"); 

    r8 = r << 16;
    g8 = g << 8;
    b8 = b;
    rgb_pack = r8 | g8 | b8 | (alpha <<24);

    printf("\nPacked:\t"); printBinary(rgb_pack);printf(" (%d)\n", rgb_pack);
    printf("\nUnpacking  ......\n");

    r_unpack = rgb_pack >> 16 & 255; 
    g_unpack = rgb_pack >> 8  & 0Xff; 
    b_unpack = rgb_pack >> 0  & 0377;



    r_unpack = (rgb_pack & 0xff0000) >> 16;   
    g_unpack = (rgb_pack  & 0Xff00) >> 8; 
    b_unpack = rgb_pack  & 0XFF;

     

    r_unpack = rgb_pack << 8 >> 24;  
    g_unpack = rgb_pack << 16 >> 24;
    b_unpack = rgb_pack << 24 >> 24;  


    printf("R: ");
    printBinary(r_unpack);
    printf(" (%d, %#o, %#X)\n", r_unpack, r_unpack, r_unpack);

    printf("G: ");
    printBinary(g_unpack);
    printf(" (%d, %#o, %#X)\n", g_unpack, g_unpack, g_unpack);

    printf("B: ");
    printBinary(b_unpack); 
    printf(" (%d, %#o, %#X)\n", b_unpack, b_unpack, b_unpack);
    printf("------------------------------------\n"); 

    //read again
    printf("\nenter R value: ");
    scanf("%d",&r);
    printf("enter G value: ");
    scanf("%d",&g);
    printf("enter B value: "); 
    scanf("%d",&b);

  }

}

