/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  int num, bit, position;
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */


  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &bit);
  
  position = (num >> bit) & 1;
  printf("The bit in position %d of number %d is: %d\n", bit, num, position);

  int mask;
  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &bit);

  mask = 1 << bit;
  num = num | mask;
  printf("Number with bit %d set to 1: %d\n", bit, num);
  num = num & ~mask;
  printf("Number with bit %d set to 0: %d\n", bit, num);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &bit);

  mask = 1 << bit;
  num = num ^ mask;
  printf("Number with bit %d toggled: %d\n", bit, num);

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */

  printf("Please enter a number:\n");
  scanf("%d", &num);
  num = ~num & 1;
  printf("%d\n", num);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  int oct1, oct2, hex, code1, code2, code3, code4;

  printf("Please enter the first number (octal): \n");
  scanf("%o", &oct1);
  printf("Please enter the second number (octal): \n");
  scanf("%o", &oct2);
  hex = oct1 + oct2;
  printf("The sum in hexadecimal: %X\n", hex);
  code1 = (hex >> 3) & 1;
  code2 = (hex >> 5) & 1;
  code3 = (hex >> 7) & 1;
  code4 = (hex >> 11) & 1;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", code1, code2, code3, code4);

  printf("Bye!\n");
  
  return 0;
}
