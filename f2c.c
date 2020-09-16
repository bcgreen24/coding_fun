#include <stdio.h>

#define LOWER 0
#define UPPER 200
#define STEP 5

float f2c(int f);

int main(void)
{
	int fahr;
	printf("Fahrenheit\t\tCelsius\n");
	printf("---------------------------------------\n");
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
	{
		printf("%3df \t\t %6.1fc\n", fahr, f2c(fahr));
	}
	return 0;
}

float f2c(int f)
{
    return (5.0/9.0)*(f-32);
}

