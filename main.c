#include"main.h"
int main()
{
	int d, b;
	d = printf("%d", 123);
	printf("\n%d", d);
	d = printf("\ntochukwu");
	printf("\n%d", d);
	printf("\n%c", 'g');
	printf("\n%s","dog");

	printf("\ntttttttttttttttttt\n");
	b = _printf("\n%d", 123);
	_printf("%d", b);
	b = _printf("\ntochukwu");
	_printf("\n%d", b);
	_printf("\n%c", 'g');
        _printf("\n%s","dog");
	return (0);
}
