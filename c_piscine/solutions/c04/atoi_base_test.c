#include "./ft_atoi_base.c"
#include <string.h>
#include <stdio.h>

void test_ft_atoi_base(char *str, int base, char *basearg)
{
	static int casen = 0;

	char bstr[40];
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
	printf("test case: %d\n", casen++);
	printf("str: '%s'\n", str);
	printf("base: '%s'\n", bstr);
	printf("output: %d\n", ft_atoi_base(str, bstr));
	printf("\n");
}

int main()
{
	// valid input
	test_ft_atoi_base("123", 10, "");
	test_ft_atoi_base(" -456", 10, "");
	test_ft_atoi_base("789 ", 10, "");
	test_ft_atoi_base("		111", 10, "");
	test_ft_atoi_base("-222	   ", 10, "");
	test_ft_atoi_base("    --+333	   ", 10, "");
	test_ft_atoi_base("		---444f	", 10, "");
	test_ft_atoi_base("     2147483647", 10, "");
	test_ft_atoi_base("     -2147483648	", 10, "");
	test_ft_atoi_base(" ---+--+1234ab567", 10, "");
	test_ft_atoi_base("0", 10, "");
	test_ft_atoi_base("00000 ", 10, "");
	test_ft_atoi_base("-00000", 10, "");
	test_ft_atoi_base("	 00000", 10, "");
	test_ft_atoi_base("	 00000  ", 10, "");

	test_ft_atoi_base("123", 8, "");
	test_ft_atoi_base(" -456", 8, "");
	test_ft_atoi_base("789 ", 8, "");
	test_ft_atoi_base("		111", 8, "");
	test_ft_atoi_base("-222	   ", 8, "");
	test_ft_atoi_base("    --+333	   ", 8, "");
	test_ft_atoi_base("		---444f	", 8, "");
	test_ft_atoi_base("     2147483647", 8, "");
	test_ft_atoi_base("     -2147483648	", 8, "");
	test_ft_atoi_base(" ---+--+1234ab567", 8, "");
	test_ft_atoi_base("0", 8, "");
	test_ft_atoi_base("00000 ", 8, "");
	test_ft_atoi_base("-00000", 8, "");
	test_ft_atoi_base("	 00000", 8, "");
	test_ft_atoi_base("	 00000  ", 8, "");

	test_ft_atoi_base("123", 16, "");
	test_ft_atoi_base(" -456", 16, "");
	test_ft_atoi_base("789 ", 16, "");
	test_ft_atoi_base("		111", 16, "");
	test_ft_atoi_base("-222	   ", 16, "");
	test_ft_atoi_base("    --+333	   ", 16, "");
	test_ft_atoi_base("		---444f	", 16, "");
	test_ft_atoi_base("     2147483647", 16, "");
	test_ft_atoi_base("     -2147483648	", 16, "");
	test_ft_atoi_base(" ---+--+1234ab567", 16, "");
	test_ft_atoi_base("0", 16, "");
	test_ft_atoi_base("00000 ", 16, "");
	test_ft_atoi_base("-00000", 16, "");
	test_ft_atoi_base("	 00000", 16, "");
	test_ft_atoi_base("	 00000  ", 16, "");

	test_ft_atoi_base("123", 2, "");
	test_ft_atoi_base(" -456", 2, "");
	test_ft_atoi_base("789 ", 2, "");
	test_ft_atoi_base("		111", 2, "");
	test_ft_atoi_base("-222	   ", 2, "");
	test_ft_atoi_base("    --+333	   ", 2, "");
	test_ft_atoi_base("		---444f	", 2, "");
	test_ft_atoi_base("     2147483647", 2, "");
	test_ft_atoi_base("     -2147483648	", 2, "");
	test_ft_atoi_base(" ---+--+1234ab567", 2, "");
	test_ft_atoi_base("0", 2, "");
	test_ft_atoi_base("00000 ", 2, "");
	test_ft_atoi_base("-00000", 2, "");
	test_ft_atoi_base("	 00000", 2, "");
	test_ft_atoi_base("	 00000  ", 2, "");

	// invalid input
	test_ft_atoi_base("f123", 0, "");
	test_ft_atoi_base(" - 123", 0, "");
	test_ft_atoi_base("s- 123", 0, "");

	
}
