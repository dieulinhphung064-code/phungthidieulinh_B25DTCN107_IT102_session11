#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 3, 4, 3, 2, 2, 2}; // Khoi tao mang
    int n = sizeof(arr) / sizeof(arr[0]);    // Kich thuoc mang
    int maxCount = 0;                        // So lan xuat hien nhieu nhat
    int mostFrequent = arr[0];               // Phan tu xuat hien nhieu nhat
    
    for (int i = 0; i < n; i++) {
        int count = 0;
        // Dem so lan xuat hien cua arr[i]
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        // Cap nhat phan tu xuat hien nhieu nhat
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat: %d\n", mostFrequent);
    printf("So lan xuat hien: %d\n", maxCount);

    return 0;
}
