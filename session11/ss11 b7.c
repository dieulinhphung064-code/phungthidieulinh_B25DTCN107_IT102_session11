#include <stdio.h>
#include <stdlib.h> // de su dung abs()

int main() {
    int n;

    // Nguoi dung nhap so luong thang
    printf("Nhap so luong thang: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Loi: Can it nhat 2 thang de mua va ban.\n");
        return 1;
    }

    int prices[n];

    // Nhap gia co phieu cho cac thang
    for(int i = 0; i < n; i++) {
        printf("Nhap gia thang %d: ", i + 1);
        scanf("%d", &prices[i]);
    }

    int buy_price = prices[0]; // mua vao thang dau tien
    int min_loss = 1000000;    // khoi tao gia tri lon
    int sell_month = -1;

    for(int i = 1; i < n; i++) {
        int diff = buy_price - prices[i]; // tinh loi (mua - ban)
        if(diff > 0) { // chi quan tam den thang bi thua lo
            if(diff < min_loss) {
                min_loss = diff;
                sell_month = i + 1; // chi so thang bat dau tu 1
            }
        }
    }

    if(sell_month == -1) {
        printf("Khong co thang thua lo, ban co the ban de co loi.\n");
    } else {
        printf("Ban nen ban vao thang %d de it loi nhat (loi: %d)\n", sell_month, min_loss);
    }

    return 0;
}
