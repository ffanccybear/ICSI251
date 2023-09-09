// гараас авсан int утгын битийн дүрслэлийн эхлэлд хэдэд 0 дараалан байгааг олох си код бич

int main(){
    int t; 
    scanf("%d", &t);
    int cnt = 0 ; 
    int memoryPos = 31 ; // 

    while(memoryPos >= 0 && ((t & (1 << memoryPos)) == 0)){
        cnt++; 
        memoryPos--;
    }
    printf("%d", cnt);
    return 0; 
}