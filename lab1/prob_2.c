// гараас авсан int утгын хамгийн чухал (хамгийн эхний бит) ийг хэвлэх си код бич

#include<stdio.h>
#include<stdlib.h>

int main(){

    int t ; 
    scanf("%d", &t);
    if (t == 0) { return 0;} // 0 case
    int memoryPos = 31 ;
    // хамгийн зүүн талаас эхлээд current bit-ийг шалгана
    // хамгийн чухал бит == хамгийн зүүн талын 1 гэсэн утгатай бит ийг олох
    while ((t & ( 1 << memoryPos)) == 0){
        memoryPos-- ;
        // хэрвээ масклаж хайсан бит 0 байвал бид нар олоогүй гэсэн үг
        // 1 байвал олсон гэсэн үг

    }
    int firstbit = (t & (1 << memoryPos)) >> memoryPos;
    // энд харин олсон битээ right shift хийж болно.
    // шууд олсон бит ээ хэвлэж болохгүй -> 2^memoryPos value хэвлэнэ.
    printf("%d", firstbit);
}