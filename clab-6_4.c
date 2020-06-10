#include <stdio.h>
#include <math.h>
#include <time.h>


int checkDiagonal(int array[100][100]) {
    int main = 0, side = 0;
    for (int j = 0, i = 99; j < 100; j++, i--) {
        side += array[i][i];
        main += array[i][j];
    }
    if (main <= side) {
        printf("The sum of the main diagonal is no more than the side sum");
        return 0;
    }
    for (int j = 0, i = 99; j < 100; j++, i--) {
        int temp = array[j][j];
        array[i][i] = array[j][i];
        array[j][i] = temp;
    }
    for (int k = 0; k < 100; k++) {
        for (int i = 0; i < 100; i++) {
            printf("%d ", array[k][i]);
        }
    }
    return 1;
}

int main() {
    int max = 100, min = -100;
    srand(time(NULL));
    int array[100][100];
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; ++j) {
            array[i][j] = min + rand() % (max - min + 1);
        }
    }
    checkDiagonal(array);
    return 0;
}
