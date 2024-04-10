///week08-1c.cpp
#include <stdio.h>
int main()
{
    printf("請輸入大小:");
    int n;
    scanf("%d", &n);
    for(int i=1; i<=9; i++){
        int space = i, star=n;
        for(int k=1; k<=space; k++) printf(" ");
        for(int k=1; k<=star; k++) printf("*");
        ///for(int j=1; j<=9; j++){
        ///    printf("*");
        ///}
        printf("i:%d\n", i);
    }
}
