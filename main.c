#include "ft_printf.h"
#include <libc.h>

int main(int argc, char const *argv[])
{
	// ft_printf("Hello ,% ,%% ,%s ,%c ,%u ,%X ,%x ,%p ,%i, %u , ", "youssef", 'y', 1337, 1456865, 456, 456, &"pops", __INT_MAX__, __INT_MAX__ + 2147483648);
	ft_printf("Hello ,%d %i" ,0xf,0xf);
	return 0;
}

