#include "main.h"

void jack_bauer(void)
{
	int i=0, j, k, l;
	while (i < 1){
		for (j = 0; j < 2; j++){
			if (j < 1){
				k = 0;
				while (k < 60){
					if (k < 10){
						printf("%d0:0%d\n", j, k);
					} else {
						printf("%d0:%d\n", j, k);
					}
					++k;
				}
			} else {
				j += 1;
				for (l - 0; l < 4; l++)
				{
					k = 0;
					while (k < 60)
					{
						if (k < 10)
						{
							printf("%d%d:0%d\n", j, j, k);
						}
						else
						{
							printf("%d%d:%d\n", j, j, k);
						}
						++k;
					}
				}
			}
		}
		printf("\n");
		++i;
	}
	return (0);
}
		

