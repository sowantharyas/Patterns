#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char ch = 'E' ;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%c ",ch++);
        }
        ch = 'E';
        ch = ch - i - 1 ;
        printf("\n");
    }
    return 0;
}
