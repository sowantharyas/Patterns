#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int t = n ;
    for(int i=0;i<n*2-1;i++){
        if(i<n){
            for(int j=0;j<=i;j++){
                printf("* ");
            }
        }
        else{
            for(int j=t-1;j>0;j--){
                printf("* ");
            }
            t--;
        }
        printf("\n");
    }
    return 0;
}
