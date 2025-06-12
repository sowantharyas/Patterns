#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int t = n ;
    for(int i=0;i<n;i++){
        // space
        for(int j=0;j<i;j++){
            printf(" ");
        }
        //star
        for(int j=0;j<(2*(t)-1);j++){
            printf("*");
        }
        // space
        for(int j=0;j<i;j++){
            printf(" ");
        }
        t--;
        printf("\n");
    }
    return 0;
}
