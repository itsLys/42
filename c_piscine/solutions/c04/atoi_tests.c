#include "./ft_atoi.c"
#include <stdio.h>

void test_ft_atoi(char *str, int n)
{
	static int casen = 0;
	printf("test case: %d\n", casen++);
	printf("str: '%s'\n", str);
	printf("expected: %d\n", n);
	printf("output: %d\n", ft_atoi(str));
	printf("\n");
}

int main()
{
	// valid input
	test_ft_atoi("123", 123);
	test_ft_atoi(" -456", -456);
	test_ft_atoi("789 ", 789);
	test_ft_atoi("		111", 111);
	test_ft_atoi("-222	   ", -222);
	test_ft_atoi("    --+333	   ", 333);
	test_ft_atoi("		---444f	", -444);
	test_ft_atoi("     2147483647", 2147483647);
	test_ft_atoi("     -2147483648	", -2147483648);
	test_ft_atoi(" ---+--+1234ab567", -1234);
	test_ft_atoi("0", 0);
	test_ft_atoi("00000", 0);
	test_ft_atoi("-00000", 0);
	test_ft_atoi("	 00000", 0);
	test_ft_atoi("	 00000  ", 0);
	// invalid input
	test_ft_atoi("f123", 0);
	test_ft_atoi(" - 123", 0);
	test_ft_atoi("s- 123", 0);

	
}
