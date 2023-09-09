// гараас авсан int утгын n дүгээр битийг хэвлэх си код бич.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int t ;
    int n ;
    scanf("%d %d", &t, &n);

    // өмнөх бодлоготой ерөнхийдөө адилхан
    // computer memory дээр 31 дэх бит = зүүн талын захынх
    // хамгийн эхний бит = хамгийн баруун талын бит

    int bit = (t >> n) & 1 ;
    printf("%d", bit);
    return 0;
    
}