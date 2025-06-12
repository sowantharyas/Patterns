#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int t = n-1 ;
    int k = 1 ;
    for(int i=0;i<n;i++){
        // number
        for(int j=0;j<=i;j++){
            printf("%d",j+1);
        }
        // space
        for(int j=t+t;j>0;j--){
            printf(" ");
        }
        // number
        for(int j=0;j<=i;j++){
            printf("%d",k-j);
        }
        k++;
//        printf("\nbefore : %d\n",t);
        t = t - 1;
//        printf("after : %d",t);
        printf("\n");
    }
    return 0;
}
