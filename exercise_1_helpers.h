#include <stdio.h>

// Theoretically I could simulate function overloading with void*, but consideirng that we could
// also just use C++ that seems a bit dumb.

void compare_integer_results(int expected, int actual, char* test_name) {
    if (expected == actual) {
        printf("Test \"%s\" passed!\n", test_name);
    }
    else {
        printf("Test \"%s\" failed, expected %d but got %d\n", test_name, expected, actual);
    }
}

void compare_float_results(double expected, double actual, char* test_name) {
    if (expected == actual) {
        printf("Test \"%s\" passed!\n", test_name);
    }
    else {
        printf("Test \"%s\" failed, expected %f but got %f\n", test_name, expected, actual);
    }
}