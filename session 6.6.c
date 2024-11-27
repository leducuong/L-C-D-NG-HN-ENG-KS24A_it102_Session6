#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
       
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz:%d\n");
        }
        else if (i % 3 == 0 && i % 5 != 0) {
            printf("Fizz: %d\n");
        }
        else if (i % 5 == 0 && i % 3 != 0) {
            printf("Buzz:%d\n");
        }
        else {
            printf("%d\n", i);
        }
    }

    return 0;
}
