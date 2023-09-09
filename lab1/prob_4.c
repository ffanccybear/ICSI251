// гараас авсан int утгын n дүгээр битийг 1 утгатай болгох си код бич.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int t; 
    int n;

    scanf("%d %d", &t, &n);
    // t-ийн n дүгээр битийг 1 болгохын тулд 00..01-ийг n удаа left shift хийнэ.
    // 1-ийг зөв байранд нь аваачсаны дараа bitwise OR хэрэглээд утгыг нь 1 болгоно.
    // 0 0 -> 0 else: 1
    t = t | (1 << n);
    printf("%d", t);
    return 0;
}