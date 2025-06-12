#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char ch = 'E';
        ch = ch - i ;
        for(int j=n-i;j>0;j--){
            printf("%c ",ch--);
        }
        printf("\n");
    }
    return 0;
}
