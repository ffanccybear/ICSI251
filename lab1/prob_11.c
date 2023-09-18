// гараас авсан int утгын битийн дүрслэлийг дэлгэцэнд хэвлэн харуул

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int mask = 1 << 31;  // 32-р бит
    for (int i = 0; i < 32; i++) {
        printf("%d", (n & mask) ? 1 : 0);
        mask >>= 1;
    }
    return 0;
}
