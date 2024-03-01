#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n = 10000;
    int arr[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10000; 
    }

    clock_t start = clock();
    bubbleSort(arr, n);
    clock_t end = clock();

    printf("Tempo de execucao do Bubble Sort para n = %d: %f segundos\n", n, (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}