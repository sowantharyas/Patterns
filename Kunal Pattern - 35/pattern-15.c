#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int t = n ;
    for(int i=0;i<n*2;i++){
        // upper part
        if(i<n){
            // spcae
            for(int j=n-i-1;j>0;j--){
                printf(" ");
            }
            // star
            for(int j=0;j<2*i+1;j++){
                if(j==0 || j==2*i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        else{
            // space
            for(int j=0;j<i-n;j++){
                printf(" ");
            }
            // star
            for(int j=2*t-1;j>0;j--){
                if(j==2 || j==2*t-2){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            t--;

        }
        printf("\n");
    }
    return 0;
}
