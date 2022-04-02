/**
 * @file test_simplemath.c
 * @author Darshana R
 * @brief Example to add array elements using Automated testing
 * @version 1.0
 * @date 2022-04-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "../unity/unity.h"
#include "../unity/unity.c"

extern void manual_test_add_elements();
extern int findsum(); 
extern int add_elements(int size, int* ptr ); //simplemath_v2.c

void setUp(void)
{
}

void tearDown(void)
{
}

void automated_test_add_elements()
{
    int p[] = {0,0,0} ;
    int q[] = {10,20,30} ;
    int r[] = {-10,-20,-30} ;
    
    int len1 = sizeof(p) / sizeof(int) ;
    int len2 = sizeof(q) / sizeof(int) ;
    int len3 = sizeof(r) / sizeof(int) ;

    TEST_ASSERT_EQUAL(0, add_elements(len1, p));
    TEST_ASSERT_EQUAL(60, add_elements(len2, q));
    TEST_ASSERT_EQUAL(-60, add_elements(len3, r));
}

void automated_test_add_overflow()
{
    int r[] = {INT_MAX,20,30} ;
    
    int len1 = sizeof(r) / sizeof(int) ;
    TEST_ASSERT_EQUAL(0, add_elements(len1, r));
}

void automated_test_add_underflow()
{
    int r[] = {INT_MIN,-20,-30} ;
    int len1 = sizeof(r) / sizeof(int) ;
    TEST_ASSERT_EQUAL(0, add_elements(len1, r));
}

/**
 * @brief This is the main function 
 * 
 * 
 * @return int  Returns 0 for success
 */
int main(void)
{
   // findsum(); // Simple version
   // findMul();
    manual_test_add_elements();

    UnityBegin(NULL);

    RUN_TEST(automated_test_add_elements);
    RUN_TEST(automated_test_add_overflow);
    RUN_TEST(automated_test_add_underflow);

    return (UnityEnd());

}
