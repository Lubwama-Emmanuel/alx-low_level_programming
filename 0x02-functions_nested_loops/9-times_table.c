#include "main.h"
/**
 * times_table - 9x9 timetable
 *
 */
void times_table(void)
{
	int i = 0, j, res;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			res = i * j;
			_putchar(res);
			_putchar(',');
			_putchar(' ');
			++j;
		}
		_putchar('\n');
		++i;
	}
}
