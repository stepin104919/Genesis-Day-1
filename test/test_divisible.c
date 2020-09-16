#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <divisible.h>
#define PROJECT_NAME    "Divisible"

/* Prototypes for all the test functions */
void test_divisiblebyzero(void);
void test_perfectlydivisible(void);
void test_notdivisible(void);
void test_divisiblebynegative(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "divisiblebyzero", test_divisiblebyzero);
  CU_add_test(suite, "perfectlydivisible", test_perfectlydivisible);
  CU_add_test(suite, "notdivisible", test_notdivisible);
  CU_add_test(suite, "divisiblebynegative", test_divisiblebynegative);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_divisiblebyzero(void) {
  CU_ASSERT(-1 == divisiblebyzero(6, 0));
  
  /* Dummy fail*/
  CU_ASSERT(1 == divisiblebyzero(25, 0));
}

void test_perfectlydivisible(void) {
  CU_ASSERT(1 == perfectlydivisible(20, 5));
  
  /* Dummy fail*/
  CU_ASSERT(0 == perfectlydivisible(48, 12));
}

void test_notdivisible(void) {
  CU_ASSERT(0 == notdivisible(71, 4));
  
  /* Dummy fail*/
  CU_ASSERT(-1 == notdivisible(50, 3));
}

void test_divisiblebynegative(void) {
  CU_ASSERT(1 == divisiblebynegative(-32, 16));
  
  /* Dummy fail*/
  CU_ASSERT(1 == divisiblebynegative(4, -3));
}
