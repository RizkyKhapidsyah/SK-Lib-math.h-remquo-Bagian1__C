#include <stdio.h>      /* printf */
#include <math.h>       /* remquo */
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	double numer = 40.2;
	double denom = 7.3;
	int quot;
	double hasil = remquo(numer, denom, &quot);

	printf("numerator: %f\n", numer);
	printf("denominator: %f\n", denom);
	printf("remainder: %f\n", hasil);
	printf("quotient: %d\n", quot);

	_getch();
	return 0;
}