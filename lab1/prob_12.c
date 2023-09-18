// гараас авсан int утгыг битийг k удаа тойргоор шилжүүл. -ийн утгын гараас авна.
// Жишээ нь: k = 8 байвал гаралт нь
// 0000 0000 1101 1001 0011 0000 0000 1111  -> 0000 1111 0000 0000 1101 1001 0011 0000


#include<stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    // k 32 оос хэтрэхгүй байх
    k %= 32;
    int rightBits = n & ((1 << k) - 1);
    int rotated = (n >> k) | (rightBits << (32 - k));

    int mask = 1 << 31; 
    for (int i = 0; i < 32; i++) {
        if (i % 4 == 0 && i != 0) {
            printf(" ");
        }
        printf("%d", (n & mask) ? 1 : 0);
        mask >>= 1;
    }

    mask = 1 << 31;
    for (int i = 0; i < 32; i++) {
        if (i % 4 == 0 && i != 0) {
            printf(" ");
        }
        printf("%d", (rotated & mask) ? 1 : 0);
        mask >>= 1;
    }
    return 0;
}
