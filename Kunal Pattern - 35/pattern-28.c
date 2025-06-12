#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n*2;i++){
        if(i<n){
            // space
            for(int j=0;j<n-i-1;j++){
                printf(" ");
            }
            // star
            for(int j=0;j<=i;j++){
                printf("* ");
            }
        }
        else{
            // space
            for(int j=0;j<=(i-n);j++){
                printf(" ");
            }
            // star
            for(int j=0;j<n-(i-n)-1;j++){
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
