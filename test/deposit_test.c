#include <stdio.h>
#include <deposit.h>
#include <ctest.h>
#define CTEST_COLOR_OK

CTEST(calc, test1) 
{    
    ASSERT_EQUAL(90000, calc(30, 100000));
}

CTEST(calc, test2) 
{   
    ASSERT_EQUAL(-1, calc(10, 20));
}

CTEST(calc, test3) 
{    
    ASSERT_EQUAL(345000, calc(365, 300000));
}

CTEST(calc, test4) 
{    
    ASSERT_EQUAL(113300, calc(31, 110000));
}
