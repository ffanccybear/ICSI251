// гараас авсан int утгын хамгийн чухал биш (хамгийн сүүлийн бит) битийг хэвлэх Си код бичих.
//

#include<stdio.h>
#include<stdlib.h>

int main(){
    int t; 
    scanf("%d", &t);

    // dec(1) == bin(0001)

    int lastbit = t & 1 ; 
    printf("%d" ,lastbit);
    return 0;
}