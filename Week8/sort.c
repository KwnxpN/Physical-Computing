#include "stdio.h"

int main()
{
    int size, dot=0;
    scanf("%d", &size);
    float arr[size];
    for (int i=0; i<size; i++) {
        scanf(" %f", &arr[i]);
        if (arr[i] != (int)arr[i]) {
            dot = 1;
        }
    }
    for (int j=0; j<size-1; j++) {
        int min_index = j;
        for (int k=j+1; k<size; k++) {
            if (arr[k] < arr[min_index]) {
                min_index = k;
            }
        }
        if (min_index != j) {
            float temp = arr[j];
            arr[j] = arr[min_index];
            arr[min_index] = temp;
        }
    }
    for (int p=0; p<size; p++) {
        if (dot) {
            printf("%.2f ", arr[p]);
        }
        else {
            printf("%.0f ", arr[p]);
        }
    }
    return 0;
}