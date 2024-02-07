#include<stdio.h>

int C(float a, float b); // Function prototype

int main() {
    float a, b;
    int m;
    scanf("%f %f %d", &a, &b, &m); // Correct format specifier for float values

    int x = C(a, b);
    x = x % m;
    printf("%d", x);
    return 0;
}

int C(float a, float b) {
    if (b == 0 || a == b) {
        return 1;
    }
    return (int)((b / a) * C(a - 1, b - 1)); // Casting to int to ensure correct return type
}
