#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char ch = 'a' ;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==0){
                printf("%c ",ch++);
            }
            else if(i<=n/2){
                if(j%2==0){
                    printf("%c ",toupper(ch++));
                }
                else{
                    printf("%c ",ch++);
                }
            }
            else{
                 if(j%2!=0){
                    printf("%c ",toupper(ch++));
                }
                else{
                    printf("%c ",ch++);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
