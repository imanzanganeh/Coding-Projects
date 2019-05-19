#include <stdio.h>

int main(int argc, char *argv[]) 
{
	// lf = long float, which is a double
	// f = float, float is smaller than double(twice as small)
	char idnum[10];
	int workhr;
	float salary;
	printf("Input the Employee ID(Max. 10 chars): ");
	scanf("%s", &idnum);// if you use %d, then result is 342 instead of 0342
	printf("Input the working hrs: ");
	scanf("%d", &workhr);
	printf("Salary amount/hr: ");
	scanf("%f", &salary); // if you use %d, then salary becomes 0.  Not enough bits when using an int.  if you use %lf and salary is declared as a float, salary * workhr becomes 0.  Same reason as comment down below
	printf("Employees ID = %s", idnum);
	printf("\n");
	printf("Salary = U$ %.2f", salary * workhr);// since salary is declared as double, you need %f or %lf.  Since double is being used, use %lf.  If using float, use %f.  If salary is float and you use format specifier %lf, then salary is 0 due to salary* workhr being such a small number compared to %lf that it is considered 0(remember, lf is a long float which is a double, which is twice as big as a normal float).
}