#include "exercise_1_helpers.h"


void create_variable_x() {
    // Create a variable named x.
    // YOUR CODE HERE
    printf("%d", x);
}

void add_to_five() {
    // Insert a number that results in x evaluating to 5.
    int x = 3 + /*YOUR CODE HERE*/;
    compare_integer_results(5, x, "add_to_five");
}

void assign_and_add_to_five() {
    // Create two variables a, b such that they are integers that add to 5.
    
    // YOUR CODE HERE
    
    // YOUR CODE HERE
    int x = a + b;
    compare_integer_results(5, x, "assign_and_add_to_five");
}

void subtract_to_two() {
    // Insert a number that results in x evaluating to 2.
    int x = 20 - /*YOUR CODE HERE*/;
    compare_integer_results(2, x, "subtract_to_two");
}

void assign_and_subtract_to_two() {
    // Create two variables a, b such that they are integers that subtract to 2.
    
    // YOUR CODE HERE

    // YOUR CODE HERE
    int x = a - b;
    compare_integer_results(2, x, "assign_and_subtract_to_two");
}

void multiply_to_hundred() {
    // Insert a number that results in x evaluating to 100.
    int x = 20 * /*YOUR CODE HERE*/;
    compare_integer_results(100, x, "multiply_to_hundred");
}

void integer_divide_to_two() {
    // Insert a number that results in x evaluating to 2.
    int x = /*YOUR CODE HERE*/ / 4;
    compare_integer_results(2, x, "integer_divide_to_two");
}

void integer_divide_to_two_odd_number() {
    // Insert a number that results in x evaluating to 2.
    // There are multiple answers here -- try to find all of them!
    int x = /*YOUR CODE HERE*/ / 4;
    compare_integer_results(2, x, "integer_divide_to_two_odd_number");
}

void double_divide_to_two() {
    // Insert a number that results in x evaluating to 2.0.
    double x = /*YOUR CODE HERE*/ / 4.0; 
    compare_float_results(2.0, x, "double_divide_to_two");
}

void double_divide_to_two_and_a_half() {
    // Insert a number that results in x evaluating to 2.5.
    double x = /*YOUR CODE HERE*/ / 4.0;
    compare_float_results(2.5, x, "double_divide_to_two_and_a_half");
}

void modulo_to_one() {
    // Insert a number that results in x evaluating to 1.
    int x = 64 % /*YOUR CODE HERE*/;
    compare_integer_results(1, x, "modulo_to_one");
}

void modulo_to_zero() {
    // Insert a number that results in x evaluating to 0.
    int x = 12 % /*YOUR CODE HERE*/;
    compare_integer_results(0, x, "modulo_to_zero");    
}

void print_hello_world() {
    // Don't forget the newline character!

    // YOUR CODE HERE
    
    // YOUR CODE HERE
}

void print_numbers_on_different_lines() {
    // Print the numbers 1, 2, 3 on different lines so that they show up like 
    // this on your terminal:

    // 1
    // 2
    // 3

    // You do not have to use loops; you can just print everything line by line.

    // YOUR CODE HERE
    
    // YOUR CODE HERE
}

void check_and_print_equality(int a, int b) {
    // You are given the variables a and b. Using conditionals 
    // and relational operators, check if a and b are equal.

    // If they are equal, print "equal" using printf.
    // Otherwise, print "not equal" using printf. 
    
    // YOUR CODE HERE
    


    // YOUR CODE HERE
}

void check_and_print_even_or_odd(int x) {
    // You are given the variable x. Using conditionals and 
    // arithmetic operators, check if x is even.

    // If x is even, print "even".
    // Otherwise, print "odd".
    
    // YOUR CODE HERE
    

    
    // YOUR CODE HERE
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
    
    // YOUR CODE HERE
    

    





    // YOUR CODE HERE
}

void print_zero_to_ten() {
    // Write a program that prints all integer numbers between 0 to 10.
    
    // YOUR CODE HERE
    
    // YOUR CODE HERE
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
    
    
    // YOUR CODE HERE
    

    
    // YOUR CODE HERE
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
