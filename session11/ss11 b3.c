#include <stdio.h>

// Ham thuc hien tim kiem nhi phan
int binary_search(int array[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2; // Tinh chi so giua
        
        if (array[mid] == target) { // Tim thay phan tu
            return mid;
        } else if (array[mid] > target) { // Neu phan tu nho hon phan tu giua
            right = mid - 1;
        } else { // Neu phan tu lon hon phan tu giua
            left = mid + 1;
        }
    }
    
    return -1; // Khong tim thay
}

int main() {
    // Tao mang da duoc sap xep tang dan
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x;

    // Nguoi dung nhap phan tu can tim
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    // Goi ham tim kiem
    int result = binary_search(arr, size, x);

    // In ket qua
    if (result != -1) {
        printf("Phan tu duoc tim thay tai chi so %d\n", result);
    } else {
        printf("Khong tim thay phan tu\n");
    }

    return 0;
}
