#include <stdio.h>
#define CTEST_MAIN
#define CTEST_COLOR_OK
#include <ctest.h>

CTEST (suite, test1)
{
    ASSERT_EQUAL(0, 0);
}

CTEST (suite, test2)
{
    ASSERT_EQUAL(3, 2);
}

CTEST (suite, test3)
{
    ASSERT_EQUAL(1, 0);
}

int main(int argc, const char *argv[])
{ 
    return ctest_main(argc, argv);
}
