#include <stdio.h>int main() {    int birthYear, currentYear = 2024, age;    // জন্ম সাল ইনপুট    printf("Enter your birth year: ");    scanf("%d", &birthYear);    // বয়স নির্ণয়    age = currentYear - birthYear;    // আউটপুট    printf("Your age: %d\n", age);    return 0;}