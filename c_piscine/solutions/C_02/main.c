#include "./ft_print_memory.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	test_print_memory(void *addr, int size)
{
	ft_print_memory(addr, size);

}

int main()
{
	test_print_memory("Bonjour les aminches\t\n\tc\a est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ", 83);
}
