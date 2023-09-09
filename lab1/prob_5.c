// гараас авсан int утгын n дүгээр битийг эсрэгээр солих си код бич

#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    int n;
    scanf("%d %d", &t, &n);
    // энэ бодлого дээр зүгээр эсрэгээр нь солиход болох болохоор
    // xor үйлдлийг хэрэглэнэ.

    t = t ^ (1 << n);
    printf("%d", t);
    return 0;
}