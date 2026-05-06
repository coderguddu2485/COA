#include <stdio.h>

// Direct Addressing (global variable)
int global_var = 50;

void function_example() {
    // Stack Addressing (local variables)
    int x = 5;
    int y = 10;

    // Immediate Addressing
    int a = 20;

    // Register Direct (normal variable use)
    int b = a;

    // Indirect Addressing
    int *p = &a;

    // Register Indirect
    int c = *p;

    // Indexed Addressing
    int arr[5] = {1,2,3,4,5};
    int d = arr[2];

    // Base Register Addressing (array + pointer)
    int *base = arr;
    int e = *(base + 3);

    // Relative Addressing (loop / control flow)
    for(int i = 0; i < 3; i++) {
        x += i;
    }

    // Auto-increment
    int f = 0;
    f = arr[f++];

    // Auto-decrement
    int g = 2;
    g = arr[--g];

    // Print to avoid optimization
    printf("%d %d %d %d %d %d %d\n", b, c, d, e, f, g, global_var);
}

int main() {
    function_example();
    return 0;
}
