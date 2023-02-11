#include <criterion/criterion.h>

/**
 * Test(Suite, Name, ...)
 *  Defines a new test.
 *  Parameters
        • Suite – The name of the test suite containing this test.
        • Name – The name of the test.
        • ... – An optional sequence of designated initializer key/value pairs as described in
            the criterion_test_extra_data structure (see criterion/types.h ).
    Example: .exit_code = 1
**/

Test(/*suite*/strlen_vs_sizeof, /*Name*/first_test, .description = "example test")
{
    // test contents
    char    *test = "salim ";
    cr_expect(strlen("hello wolrd") == 11, "Expect 11");
    cr_expect(sizeof(test) == strlen(test), "Expect 6");
}
