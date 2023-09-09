// гараас авсан int утгын хамгийн эхэнд олдох 1 утгатай бид хэд дүгээр бит болохыг олох си код бич

#include<stdio.h>
#include<stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);

    int memoryPos = 31;  

    while(memoryPos >= 0 && (t & (1 << memoryPos)) == 0){
        memoryPos--;
    }
    printf("%d", memoryPos);
    return 0;
}
