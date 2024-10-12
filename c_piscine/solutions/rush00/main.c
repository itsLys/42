#include <stdio.h>


void print_up_low(int x)
{
	putchar('o');
	while (x > 1)
	{
		putchar('-');
		x--;
	}
	if (x - 1)
	putchar('o');
	putchar('\n');

}

void print_mid(int x, int y)
{
	while (y > 1)
	{
		putchar('|');
		while (x > 1)
		{
			putchar(' ');
			x--;
		}
		putchar('|');
		putchar('\n');
		y--;
	}
}

void rush(int x, int y)
{
	print_up_low(x - 1);
	if (x -1 && y - 1)
		print_mid(x - 1, y - 1);
	if (x -1 && y - 1)
		print_up_low(x - 1);
}

int main()
{
	// rush(5, 3);
	// rush(5, 1);
	rush(1, 1);
	// rush(1, 5);
}
