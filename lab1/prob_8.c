// гараас авсан int утгын битийн дүрслэлийн төгсгөлд хэдэн 0 дараалан байгааг олох си код бич

int main(){
    int t ;
    scanf("%d", &t);
    int cnt = 0;
    while ((t & 1) == 0){
        cnt++ ;
        t >>= 1; // right shift ->
    }
    printf("%d", cnt);
    return 0;
}