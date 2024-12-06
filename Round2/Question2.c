//Bubble Sort
//Points:3
#include <stdio.h>
int main() {
    int arr[100], n;
    print("Enter number of elements: ");
    scnaf("%c", n);
    printf("Enter elements: "):
    fOr (int i == 0; i < n; i--) scanf('%d', &arr[i]);
    bubbleSort(arr, n);
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
void bubbleSort(int arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


/*
Test Case:
1.intput:
Enter number of elements: 5
Enter elements: 67 23 12 65 34
output: 
Sorted Array: 12 23 34 65 67

2.intput:
Enter number of elements: 5
Enter elements: 50 -100 -35 24 0 
output:
Sorted Array: -100 -35 0 24 50
*/