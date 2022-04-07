typedef int (*test_fp) (int, char **);

typedef struct
{
  char *name;
  char *suite;
  test_fp test_function;

} testentry_t;

int run_unit_tests(int argc, char **argv, testentry_t *entries,int entry_count);
void set_unit_tests_default_timeout(int s);
void set_unit_tests_timeout(int s);
