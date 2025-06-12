#include<stdio.h>

int main(){
    int n ;
    scanf("%d",&n);
    for(int i=0;i<n*2;i++){
        // left part
        if(i<n){
            for(int j=0;j<n;j++){
                if(j<=i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            /*for(int j=n-i-1;j>0;j--){
                printf(" ");
            }
            for(int j=0;j<=i;j++){
                printf("*");
            }*/
            for(int j=0;j<n;j++){
                if(j<n-i-1){
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }
        }
        else if (i==4){
            for(int j=0;j<n*2;j++){
                printf("*");
            }
        }
        else{
            for(int j=0;j<n;j++){
                if(j<n-(i-n)-1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            for(int j=0;j<n;j++){
                if(j<=i-n){
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }
        }
        printf("\n");

    }
    return 0;
}

