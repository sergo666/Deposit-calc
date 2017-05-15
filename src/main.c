#include <stdio.h>
#include <stdlib.h>
#include "deposit.h"

int main()
{
    int srok, vklad;
    
    scanf("%d", &vklad);
    scanf("%d", &srok);
    
    if(!input(&vklad, &srok)) {
        return 1;
    }
    
    vklad = deposit_calc(srok, vklad);
    printf("\nСумма вклада на момент окончания срока: %d\n", vklad);
    return 0;
}
