#include "build/temp/_test_Add.c"
#include "mock_Add.h"
#include "unity.h"






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









    UnityAssertEqualNumber((UNITY_INT)((8)), (UNITY_INT)((add(2,6))), (

   ((void *)0)

   ), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((21)), (UNITY_INT)((add(9,12))), (

   ((void *)0)

   ), (UNITY_UINT)(31), UNITY_DISPLAY_STYLE_INT);

}
