#include <stdio.h>

int main()
{
	int srok,i;
	float vklad;

	printf("Срок:\n");        
	scanf("%d",&srok);
	printf("Сумма вклада:\n");
	scanf("%f",&vklad);

	if((srok>365)||(srok<0)||(vklad<10000)) //проверка входных данных
	{
		perror("incorrect input");
		return 0;
	}
	return 0; 
}
