#include <stdio.h>

int _atoi(char *s) {
    int sign = 1; // Sign of the number, default is positive
    int result = 0; // Accumulator for the resulting number

    // Skip leading whitespace characters
    while (*s == ' ') {
        s++;
    }

    // Check for a sign character (+ or -)
    if (*s == '-' || *s == '+') {
        sign = (*s == '-') ? -1 : 1;
        s++;
    }

    // Convert the remaining digits to an integer
    while (*s >= '0' && *s <= '9') {
        // Check for overflow before multiplying by 10 and adding the new digit
        if (result > (INT_MAX - (*s - '0')) / 10) {
            // Overflow occurred
            return (sign == -1) ? INT_MIN : INT_MAX;
        }
        
        result = (result * 10) + (*s - '0');
        s++;
    }

    return result * sign;
}

int main() {
    char str1[] = "12345";
    char str2[] = "-98765";
    char str3[] = "+42";
    char str4[] = "abc123"; // No numbers, should return 0

    int num1 = _atoi(str1);
    int num2 = _atoi(str2);
    int num3 = _atoi(str3);
    int num4 = _atoi(str4);

    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);
    printf("Number 3: %d\n", num3);
    printf("Number 4: %d\n", num4);

    return 0;
}

