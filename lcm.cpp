#include <stdio.h>
#include <math.h>

#define MAX_ARRAY_SIZE 100

int get_lcm(int a, int b);

int main(int argc, char **argv) {

	if ( argc != 3 )
	{
		puts("Error! Wrong number of parameters. Usage: lcm x y");
		return 1;
	}

	int num1, num2, lcm;

	num1 = atoi ( argv[1] );
	num2 = atoi  ( argv[2] );

	lcm = get_lcm(num1, num2);
	if ( lcm != -1 )
	{
		printf("You entered: %d and %d\n", num1, num2);
		printf("The least common multiple is: %d\n", lcm);
	}
	else
	{
		puts("Could not compute LCM!");
	}

	return 0;
}

int get_lcm(int a, int b)
{
	int a_mults[MAX_ARRAY_SIZE];
	int b_mults[MAX_ARRAY_SIZE];

	int a_temp,  b_temp;
	a_temp = b_temp = 0;

	for ( int i = 0; i < MAX_ARRAY_SIZE; i += 1 )
	{
		a_temp = a_temp + a;
		a_mults[i] = a_temp;
	}

	for ( int i = 0; i < MAX_ARRAY_SIZE; i += 1 )
	{
		b_temp = b_temp + b;
		b_mults[i] = b_temp;
	}

	int i;

	for ( i = 0; i < MAX_ARRAY_SIZE; i++)
	{
		for ( int j = 0; j < MAX_ARRAY_SIZE; j++)
		{
			if ( a_mults[i] == b_mults[j] )
			{
				return a_mults[i];
			}
		}
	}
	return -1;
}
