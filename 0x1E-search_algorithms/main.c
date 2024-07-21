#include <stdio.h>
#include "search_algos.h"

int main(void)
{
    int array[] = {10, 20, 30, 40, 50, 60};
    size_t size = sizeof(array) / sizeof(array[0]);
    int value = 40;
    int index;

    index = linear_search(array, size, value);
    printf("Found %d at index: %d\n", value, index);

    return 0;
}
