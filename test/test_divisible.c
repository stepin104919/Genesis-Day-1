	#include "unity.h"
	#include "divisible.h"

	void setUp()
	{	}
	void tearDown()
	{	}

	void test_divisiblebyzero(void)
	{
  		TEST_ASSERT_EQUAL(-1, divisible(6, 0));
  		TEST_ASSERT_EQUAL(-1, divisible(25, 0));
	}
	void test_perfectlydivisible(void)
	{
	    TEST_ASSERT_EQUAL(1, divisible(20, 5));
	    TEST_ASSERT_EQUAL(1, divisible(48, 12));
	}
	void test_notdivisible(void)
	{
	    TEST_ASSERT_EQUAL(0, divisible(71, 4));
	    TEST_ASSERT_EQUAL(0, divisible(50, 3));
	}
	void test_divisiblebynegative(void)
	{
	    TEST_ASSERT_EQUAL(1, divisible(-32, 16));
		TEST_ASSERT_EQUAL(0, divisible(4, -3));
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_divisiblebyzero);
	  	RUN_TEST(test_perfectlydivisible);
	  	RUN_TEST(test_notdivisible);
	  	RUN_TEST(test_divisiblebynegative);

  		return UNITY_END();
	}
