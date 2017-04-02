#include <stdio.h>
#include "deposit.h"

int main()
{
	int srok;
	float vklad;

	printf("Срок:\n");        
	scanf("%d", &srok);
	printf("Сумма вклада:\n");
	scanf("%f", &vklad);

	if((srok > 365) || (srok < 0) || (vklad < 1000)) //проверка входных данных
	{
		perror("incorrect input");
		return 0;
	}
	
	vklad = float deposit-calc(float vklad, int srok);

	printf("Сумма на момент окончания:%g\n", vklad);

	return 0; 
}
