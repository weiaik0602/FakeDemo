#include "unity.h"
#include "mock_Add.h"



int fake_add(int v1,int v2,int callNumber){
  if(callNumber==0)
    return 8;
  else if(callNumber==1)
    return 21;
}

void setUp(void)
{
  add_StubWithCallback(fake_add);
}

void tearDown(void)
{
}



void test_Add_given2and6_expect8(void)
{
   // add_ExpectAndReturn(2,6,8);
    //add_ExpectAndReturn(9,12,21);
    
    
    TEST_ASSERT_EQUAL(8,add(2,6));
    TEST_ASSERT_EQUAL(21,add(9,12));
}
