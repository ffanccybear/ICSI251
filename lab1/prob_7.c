// гараас авсан int утгын хамгийн сүүлд олдох 1 утгатай бит хэд дүгээр бит болохыг ол

int main(){
    int t; 
    scanf("%d", &t);
    int memoryPos = 0 ;
    while(t & (1 << memoryPos) == 0){
        memoryPos++ ;
    }
    printf("%d", &memoryPos);
    return 0;
}