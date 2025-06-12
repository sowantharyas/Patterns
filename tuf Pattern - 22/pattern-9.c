#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int t = n ;
    int t1 = n ;
    for(int i=0;i<n*2;i++){
        // upper part
        if(i<n){
            // space
            for(int j=n-i;j>1;j--){
                printf(" ");
            }
            // star
            for(int j=0;j<2*i+1;j++){
                printf("*");
            }
        }
        // lower part
        else{
            // space
            for(int j=0;j<i-t1;j++){
                printf(" ");
            }
            // star
            for(int j=0;j<2*t-1;j++){
                printf("*");
            }
            t--;
        }
        printf("\n");
    }
    return 0;
}
