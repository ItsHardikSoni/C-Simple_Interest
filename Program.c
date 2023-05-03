It calculates simple interest for a set of values representing.
principal, number of years and rate of interest.


#include<stdio.h>
#include<conio.h>
int main()
{
	int p,t;
	float r,si;
	p = 1000;
	r = 8.5;
	t = 3;
	/*Formula of Simple Interest*/
	si = p*r*t/100;
	printf(" %f\n", si);
	return 0;
}
