#include <stdio.h>
#include <string.h>

int main() {
    // Khoi tao mang chuoi
    char arr[][20] = {"apple", "banana", "cherry", "date", "fig", "grape"};
    int n = sizeof(arr) / sizeof(arr[0]);

    char input[20];

    // Nguoi dung nhap chuoi can tim
    printf("Nhap chuoi can tim: ");
    scanf("%s", input);

    // Tim kiem chuoi trong mang
    int found = 0; // bien kiem tra
    int index = -1;

    for(int i = 0; i < n; i++) {
        if(strcmp(arr[i], input) == 0) { // neu chuoi trung nhau
            found = 1;
            index = i;
            break;
        }
    }

    // In ket qua
    if(found) {
        printf("Chuoi duoc tim thay tai chi so %d\n", index);
    } else {
        printf("Khong tim thay chuoi\n");
    }

    return 0;
}
