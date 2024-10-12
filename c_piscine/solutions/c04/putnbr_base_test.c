#include "./ft_putnbr_base.c"
#include <limits.h>
#include <stdio.h>
#include <string.h>

void test_pnb(int nbr, int base, char *basearg)
{
	char bstr[40];
	printf("nbr: %d\n", nbr);
	printf("base: %d\n", base);
	switch (base) 
		{
			case 2:
			strcpy(bstr, "01");
			break;

			case 8:
			strcpy(bstr, "01234567");
			break;

			case 10:
			strcpy(bstr, "0123456789");
			break;

			case 16:
			strcpy(bstr, "0123456789abcdef");
			break;

			default:
			strcpy(bstr, basearg);
		}	
	printf("output:\n");
	ft_putnbr_base(nbr, bstr);
	printf("\n");
	printf("---\n");
	printf("\n");
}

int main()
{
	// Valid
	test_pnb(123, 10, "");
	test_pnb(-456, 10, "");
	test_pnb(0, 10, "");
	test_pnb(INT_MAX, 10, "");
	test_pnb(INT_MIN, 10, "");
	test_pnb(123, 8, "");
	test_pnb(-1, 8, "");
	test_pnb(0, 8, "");
	test_pnb(INT_MAX, 8, "");
	test_pnb(INT_MIN, 8, "");
	test_pnb(123, 16, "");
	test_pnb(-456, 16, "");
	test_pnb(0, 16, "");
	test_pnb(INT_MAX, 16, "");
	test_pnb(INT_MIN, 16, "");
	test_pnb(123, 2, "");
	test_pnb(-456, 2, "");
	test_pnb(0, 2, "");
	test_pnb(INT_MAX, 2, "");
	test_pnb(INT_MIN, 2, "");
	// invalid

	test_pnb(123, 0, "0");
	test_pnb(123, 0, "00");
	test_pnb(123, 0, "011");
	test_pnb(123, 0, "0+");
	test_pnb(123, 0, "-1");
	test_pnb(123, 0, "-+");
}
