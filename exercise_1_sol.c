#include "exercise_1_helpers.h"

// NOTE: would be more ideal to create some helpers that compare strings w/ 
// streams. Would need some sort of harness that redirects stdout to stream, 
// then populates another stream with the solution and then compares the two. 

void create_variable_x() {
    int x = 5;
    printf("%d", x);
}

void add_to_five() {
    int x = 3 + 2;
    compare_integer_results(5, x, "add_to_five");
}

void assign_and_add_to_five() {
    int a = 3;
    int b = 2;
    int x = a + b;
    compare_integer_results(5, x, "assign_and_add_to_five");
}

void subtract_to_two() {
    int x = 20 - 18;
    compare_integer_results(2, x, "subtract_to_two");
}

void assign_and_subtract_to_two() {
    int a = 10;
    int b = 8;
    int x = a - b;
    compare_integer_results(2, x, "assign_and_subtract_to_two");
}

void multiply_to_hundred() {
    int x = 20 * 5;
    compare_integer_results(100, x, "multiply_to_hundred");
}

void integer_divide_to_two() {
    int x = 8 / 4;
    compare_integer_results(2, x, "integer_divide_to_two");
}

void integer_divide_to_two_odd_number() {
    int x = 9 / 4;
    compare_integer_results(2, x, "integer_divide_to_two_odd_number");
}

void double_divide_to_two() {
    // 6.0 / 3 and 6 / 3.0 would also work due to implicit type conversion. 
    // Read more here: https://www.scaler.com/topics/c/implicit-type-conversion-in-c/
    double x = 8.0 / 4.0; 
    compare_float_results(2.0, x, "double_divide_to_two");
}

void double_divide_to_two_and_a_half() {
    double x = 10.0 / 4.0;
    compare_float_results(2.5, x, "double_divide_to_two_and_a_half");
}

void modulo_to_one() {
    // Many solutions here.
    int x = 64 % 7;
    compare_integer_results(1, x, "modulo_to_one");
}

void modulo_to_zero() {
    // Many solutions here, but note that anything modulo 1 is always 0. 
    // (Why is this the case?)
    int x = 12 % 1;
    compare_integer_results(0, x, "modulo_to_zero");    
}

void print_hello_world() {
    // Don't forget the newline character!
    printf("Hello world!\n");
}

void print_numbers_on_different_lines() {
    // Print the numbers 1, 2, 3 on different lines so that they show up like 
    // this on your terminal:

    // 1
    // 2
    // 3

    printf("1\n");
    printf("2\n");
    printf("3\n");

    // one line solution:
    // printf("1\n2\n3\n");

    // one line solution with string replacement:
    // printf("%d\n%d\n%d\n", 1, 2, 3);
}

void check_and_print_equality(int a, int b) {
    // You are given the variables a and b. Using conditionals 
    // and relational operators, check if a and b are equal.

    // If they are equal, print "equal" using printf.
    // Otherwise, print "not equal" using printf. 
    if (a == b) {
        printf("equal\n");
    }
    else {
        printf("not equal\n");
    }
}

void check_and_print_even_or_odd(int x) {
    // You are given the variable x. Using conditionals and 
    // arithmetic operators, check if x is even.

    // If x is even, print "even".
    // Otherwise, print "odd".
    if (x % 2) {
        printf("even\n");
    }
    else {
        printf("odd\n");
    }
}

void print_relative_height(int feet, int inches) {
    // Americans use the imperial system instead of the metric system.
    // Instead of meters / centimeters, an American will give a person's height
    // in feet and inches.

    // Using conditionals and comparison operators, output whether a person is 
    // SHORT, MEDIUM, or TALL based on their height in feet and inches.
    // If someone is 5 feet 3 inches or less, print "SHORT".
    // If someone is between 5 feet 4 inches and 5 feet 11 inches 
        // (inclusive), print "MEDIUM". ("inclusive" means that 5 feet 4 inches
        // and 5 feet 11 inches are both considered "MEDIUM".)
    // If someone is 6 feet or more, print "TALL".

    // HINT: you will need to check if many expressions are all true. To do this, 
    // use the && boolean operator, a.k.a the AND operator.

    // 1 && 1 evaluates to true
    // 1 && 0 evaluates to false
    // 0 && 0 evaluates to false
    // 1 && 1 && 1 && ... && 1 evaluates to true
    // 1 && 1 && 1 && ... && 0 evaluates to false 

    // Replace 1 and 0 with variables to make this operator useful.

    // The part that has been filled in accounts for people who are 
    // less than 5 feet tall. 
    if (feet <= 5 || (feet == 5 && inches <= 3)) {
        printf("SHORT\n");
    }
    else if (feet == 5 && inches >= 4 && inches <= 11) {
        printf("MEDIUM\n");
    }
    else if (feet >= 6) {
        printf("TALL\n");
    }
}

void print_zero_to_ten() {
    // Write a program that prints all integer numbers between 0 to 10.
    for (int x = 0; x <= 10; ++x) {
        printf("%d\n", x);
    }
}

void print_first_hundred_triangle_numbers() {
    // The first triangle number is 1.
    // The nth triangle number is equal to n + the (n-1)th triangle number.
    // For example: the second triangle number is equal to 2 + the first 
    // triangle number, which is 2 + 1. So the second triangle number is 3.
    // The third triangle number is 3 + the second triangle number, which is 
    // 3 + 3. So the third triangle number is 6.
    // The fourth triangle number is 4 + 6 = 10.
    // Fifth triangle number: 5 + 10 = 15.

    // The first ten triangle numbers are as follows:
    // 1 3 6 10 15 21 28 36 45 55

    // Using a loop, print the first one hundred triangle numbers. 
    // You should start the loop at 1 and end at 100 (inclusive).
    // Don't just print each number individually, that's cheating! ;)
    int sum = 0;
    for (int x = 1; x <= 100; ++x) {
        sum += x;
        printf("%d\n", sum);
    }
}
    
int main() {
    printf("\nTesting create_variable_x...\n");
    create_variable_x();
    printf("\nTesting add_to_five...\n");
    add_to_five();
    printf("\nTesting assign_and_add_to_five...\n");
    assign_and_add_to_five();
    printf("\nTesting subtract_to_two...\n");
    subtract_to_two();
    printf("\nTesting assign_and_subtract_to_two...\n");
    assign_and_subtract_to_two();
    printf("\nTesting multiply_to_hundred...\n");
    multiply_to_hundred();
    printf("\nTesting integer_divide_to_two...\n");
    integer_divide_to_two();
    printf("\nTesting integer_divide_to_two_odd_number...\n");
    integer_divide_to_two_odd_number();
    printf("\nTesting double_divide_to_two...\n");
    double_divide_to_two();
    printf("\nTesting double_divide_to_two_and_a_half...\n");
    double_divide_to_two_and_a_half();
    printf("\nTesting modulo_to_one...\n");
    modulo_to_one();
    printf("\nTesting modulo_to_zero...\n");
    modulo_to_zero();
    printf("\nTesting print_hello_world...\n");
    print_hello_world();
    printf("\nTesting print_numbers_on_different_lines...\n");
    print_numbers_on_different_lines();
    printf("\nTesting check_and_print_equality with equal numbers...\n");
    check_and_print_equality(1, 1);
    printf("\nTesting check_and_print_equality with unequal numbers...\n");
    check_and_print_equality(9000, 9001);
    printf("\nTesting check_and_print_even_or_odd with odd number...\n");
    check_and_print_even_or_odd(109);
    printf("\nTesting check_and_print_even_or_odd with even number...\n");
    check_and_print_even_or_odd(42);
    printf("\nTesting print_relative_height, 5 feet 2 inches...\n");
    print_relative_height(5, 2);
    printf("\nTesting print_relative_height, 5 feet 5 inches...\n");
    print_relative_height(5, 5);
    printf("\nTesting print_relative_height, 6 feet 2 inches...\n");
    print_relative_height(6, 2);
    printf("\nTesting print_relative_height, 5 feet 3 inches...\n");
    print_relative_height(5, 3);
    printf("\nTesting print_relative_height, 4 feet 11 inches...\n");
    print_relative_height(4, 11);
    printf("\nTesting print_zero_to_ten...\n");
    print_zero_to_ten();
    printf("\nTesting print_first_hundred_triangle_numbers...\n");
    print_first_hundred_triangle_numbers();
}
