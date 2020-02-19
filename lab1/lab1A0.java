/***************************************
* EECS2031B – Lab1 *
* Author: Saleh, Mohamed *
****************************************/

import java.util.Scanner;
public class Lab1A0 {

 public static void main(String[] args) {
 
  Scanner scan = new Scanner(System.in); // or use bufferedReaders or Console 
  System.out.print("Please enter the name: ");
  String name = scan.next();

  System.out.print("Please enter the number: ");
  int a = scan.nextInt();

  int b = a * 2;
  int c = a*3; 
  
  System.out.printf("Hi "+name+ ", double and triple of input "+a+ " is "+b+ " and "+c+ ", respectively" );       
  //System.out.printf();

 }   
}
