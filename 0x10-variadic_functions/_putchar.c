#include <unistd.h>

int _putchar(chat c)
{
	return (write(1, &c, 1));
}
