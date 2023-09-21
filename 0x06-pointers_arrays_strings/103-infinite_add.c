#include "main.h"
#include <stdio.h>

/**
 * infinite_add - add 2 strings.
 * @n1: string1.
 * @n2: string2.
 * @r: buffer
 * @size_r: buffer size
 * Return: String with all letters in ROT13 base.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    
    // Check if the result can fit in the buffer
    if (len1 + len2 >= size_r)
        return 0;

    int carry = 0;  // Initialize carry to 0
    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;  // Index for the result

    // Add digits from right to left
    while (i >= 0 || j >= 0 || carry) {
        int num1 = (i >= 0) ? (n1[i] - '0') : 0;
        int num2 = (j >= 0) ? (n2[j] - '0') : 0;
        int sum = num1 + num2 + carry;

        carry = sum / 10;
        r[k] = (sum % 10) + '0';

        i--;
        j--;
        k++;
    }

    r[k] = '\0';

    // Reverse the result string
    for (int start = 0, end = k - 1; start < end; start++, end--) {
        char temp = r[start];
        r[start] = r[end];
        r[end] = temp;
    }

    return r;
}

int main() {
    char n1[] = "12345";
    char n2[] = "67890";
    int size_r = 20;
    char r[size_r];

    char* result = infinite_add(n1, n2, r, size_r);
    if (result != 0) {
        printf("Sum: %s\n", result);
    } else {
        printf("Result cannot be stored in the buffer.\n");
    }

    return 0;
}

