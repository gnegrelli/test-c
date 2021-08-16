#include <stdlib.h>
#include <check.h>
#include "question_3.h"

START_TEST(test_ConcatRemove_yes){
    char *s = "blablablabla";
    char *t = "blablabcd";
    int k = 10;
    ck_assert_str_eq(ConcatRemove(s, t, k), "yes");
}
END_TEST

START_TEST(test_ConcatRemove_no){
    char *s = "blablablablablabla";
    char *t = "blablabcd";
    int k = 10;
    ck_assert_str_eq(ConcatRemove(s, t, k), "no");
}
END_TEST

Suite *test_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("Test");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_ConcatRemove_yes);
  tcase_add_test(tc_core, test_ConcatRemove_no);
  suite_add_tcase(s, tc_core);

  return s;
}

int main(void) {
  int no_failed = 0;
  Suite *s;
  SRunner *runner;
  s = test_suite();
  runner = srunner_create(s);

  srunner_run_all(runner, CK_NORMAL);
  no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
