//Challenge_loop_if_basicmath

#include<stdio.h>
#include<math.h>

int main()
{
	double Avr, d, sd, a, b, c, sum = 0, e= 0;
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);

	if (a > b)
	{
		c = a - b +1;
		for (int i = a; i>=b; i--)
		{
			printf("%d ", i);
			sum += i;
		}
	}

	else if (a<b)
	{
		c = b - a +1 ;
		for (int i=a; i<=b; i++)
		{
			printf("%d ", i);
			sum += i;
		}
	}

	Avr = sum / c;
	if (a > b)
	{
		for (int i= a; i>=b ; i--)
		{
			d = pow(i-Avr,2);
			e += d;
		}
	}
	else if (a < b)
	{
		for (int i= a; i <= b; i++)
		{
			d = pow(i - Avr, 2);
			e += d;
		}
	}

	sd = sqrt(e /(c-1));

	printf("\nAverage = %lf", Avr);
	printf("\nS.D. = %lf", sd);
}