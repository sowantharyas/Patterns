#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int t = n;
    for(int i=0;i<n;i++){
        // space
        for(int j=t-1;j>0;j--){
            printf(" ");
        }
        // star
        for(int j=0;j<n;j++){
            if(j==0||i==0){
                printf("*");
            }
            else if(i==n-1||j==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        --t;
        printf("\n");
    }
    return 0;
}
