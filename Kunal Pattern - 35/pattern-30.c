#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int k = 1 ;
    for(int i=0;i<n;i++){
        int m = 1 ;
        // space
        for(int j=n-i-1;j>0;j--){
            printf(" ");
        }
        // number
        for(int j=0;j<2*i+1;j++){
            if(j<=(2*i+1)/2){
                printf("%d",k-j);
            }
            else{
                printf("%d",++m);
            }
        }
//        printf("\nb = %d\n",k);
        k++;
//        printf("a = %d",k);
        printf("\n");
    }
    return 0;
}
