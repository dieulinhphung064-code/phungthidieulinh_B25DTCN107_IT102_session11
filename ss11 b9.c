#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 3}; // Khoi tao mang
    int n = sizeof(arr) / sizeof(arr[0]); // Kich thuoc mang

    int newArr[n];  // Mang moi khong trung lap
    int newSize = 0; // Kich thuoc mang moi

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        // Kiem tra arr[i] da co trong newArr chua
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == newArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        // Neu chua co thi them vao newArr
        if (!isDuplicate) {
            newArr[newSize] = arr[i];
            newSize++;
        }
    }

    // In mang sau khi loai bo trung lap
    printf("Mang sau khi loai bo trung lap: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", newArr[i]);
    }
    printf("\n");

    return 0;
}
