#include <stdio.h>
#include <limits.h> // de su dung INT_MIN

int main() {
    int n;

    // Nguoi dung nhap so luong phan tu
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Loi: Mang phai co it nhat 2 phan tu de tim phan tu lon thu hai.\n");
        return 1;
    }

    int arr[n];

    // Nguoi dung nhap cac phan tu
    for(int i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int max1 = INT_MIN; // phan tu lon nhat
    int max2 = INT_MIN; // phan tu lon thu hai

    for(int i = 0; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1; // cap nhat max2
            max1 = arr[i]; // cap nhat max1
        } else if(arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i]; // cap nhat max2 neu nho hon max1
        }
    }

    if(max2 == INT_MIN) {
        printf("Khong co phan tu lon thu hai trong mang.\n");
    } else {
        printf("Phan tu lon nhat: %d\n", max1);
        printf("Phan tu lon thu hai: %d\n", max2);
    }

    return 0;
}
