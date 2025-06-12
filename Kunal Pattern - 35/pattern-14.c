#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int t=n;
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            printf(" ");
        }
        if(i==0){
            for(int j=2*t-1;j>0;j--){
                printf("*");
            }
        }
        else{
            for(int j=2*t-1;j>0;j--){
                if(j==1 || j==2*t-1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        --t;
        printf("\n");
    }
    return 0;
}
