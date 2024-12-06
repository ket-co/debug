//Find Maximum in an Array
//Points 4
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", arr[i]); 
    int max=0;
    for (int i = 1; i <= n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    }
    printf("Maximum: %d\n", max);
}

/*
Test Case:
1.input:
Enter the number of elements:5    
Enter the elements: 56 23 43 78 54      
output: 78

2.input
Enter the number of elements:5    
Enter the elements: -45 -78 -12 -8 -3    
output: -3
*/