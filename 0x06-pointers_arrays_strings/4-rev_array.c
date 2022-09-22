#include <stdio.h>
/**
 * reverse_array - a function that reverses the
 *	content of an array of integers
 *
 * @a: pointer to int array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int tmp, i, j;

	j = n - 1;
	/**
	 * set value in array a in tmp
	 * then place the last array in
	 * the first array then place
	 * value in tmp to last array
	 */
	for (i = 0; i < j; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}

