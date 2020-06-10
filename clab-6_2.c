#include <stdio.h>
#include <math.h>
#include <time.h>

int sumOddNumbers(const int array[]) {
    int sum = 0;
    for (int i = 0; i < 100; ++i) {
        if (array[i] < 0) {
            sum += array[i];
        }
    }
    return sum;
}

int difference(const int array[]) {
    int counter = 0;
    for (int i = 0; i < 100; i++) {
        if (array[i] > 0 && array[i + 1] < 0) {
            while (array[i + 1] < 0) {
                counter += array[i + 1];
                i++;
            }
            break;
        }
    }
    return counter;
}

int main() {
    int max = 100, min = -100;
    srand(time(NULL));
    int array[100];
    for (int i = 0; i < 100; i++) {
        array[i] = min + rand() % (max - min + 1);
        printf("%d ", array[i]);
    }
    printf("\nSum of odd numbers - %d", sumOddNumbers(array));
    printf("\nDifference between the first two negative numbers - %d", difference(array));
    return 0;
}
