#include<stdio.h>

short int adder_sum (short int a1, short int a0, short int cin)	// Defining the the function adder_sum 
{
  short int not_a1, not_a0, not_cin;
  short int temp1, temp2, temp3, temp4, res1;
  not_a1 = !a1;
  not_a0 = !a0;
  not_cin = !cin;
  temp1 = not_a0 && not_a1 && cin;
  temp2 = not_a0 && a1 && not_cin;
  temp3 = a0 && not_a1 && not_cin;
  temp4 = a0 && a1 && cin;
  res1 = temp1 || temp2 || temp3 || temp4;
  return res1;			// Returns the output 
}

short int adder_carry (short int a1, short int a0, short int cin)	// Defining the adder_carry
{
  short int temp1, temp2, temp3, res2;
  temp1 = a1 && a0;
  temp2 = a1 && cin;
  temp3 = a0 && cin;
  res2 = temp1 || temp2 || temp3;
  return res2;			// Returns the output
}

void
main ()
{
  short int x, y, z, sum, carry;
  printf (":::1-BIT FULL ADDER:::\n");	// Program about 1-bit Full adder 
  printf ("Enter the BINARY INPUTS\n");	// Taking the Inputs 
  scanf ("%hd\n %hd\n %hd", &x, &y, &z);
  if ((x == 0 || x == 1) && (y == 0 || y == 1) && (z == 0 || z == 1))	// Conditions that satifies the the Full Adder  
    {
      sum = adder_sum (x, y, z);	// Declaring the function Sum                            
      carry = adder_carry (x, y, z);	// Declaring the function Carry
      printf ("SUM= %hd", sum);	// Printing the output sum
      printf ("\nCARRY= %hd", carry);	// Printing the output carry
    }
  else				// Inputs which are excet these conditions 
    printf ("INVALID!!!!!!!!!!");
}
