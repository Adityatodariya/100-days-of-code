#include <stdio.h>

enum Numbers {
    ONE = 10,
    TWO = 20,
    THREE = 30,
    FOUR = 40,
    FIVE = 50
};

int main() {
    enum Numbers num;

    num = ONE;
    printf("ONE = %d\n", num);

    num = TWO;
    printf("TWO = %d\n", num);

    num = THREE;
    printf("THREE = %d\n", num);

    num = FOUR;
    printf("FOUR = %d\n", num);

    num = FIVE;
    printf("FIVE = %d\n", num);

    printf("Size of enum: %zu bytes\n", sizeof(enum Numbers));

    return 0;
}