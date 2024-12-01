#include <stdarg.h>
#include <libc.h>


void add(int count, ...)
{
	va_list va;
	int i = 10;
	va_start(va,count);
	// while (count>0)
	// {
	// printf("%c\n",va_arg(va,char));
	// count--;
	// }
	// va_end(va);
	printf("%d", );
}



int main(void)
{
	add(5,2,3,4.8,'5',6.9);
	return 0;
}
