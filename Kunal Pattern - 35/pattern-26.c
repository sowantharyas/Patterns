#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int t = n ;
    for(int i=0;i<n;i++){
        for(int j=t;j>0;j--){
            printf("%d ",i+1);
        }
        t--;
        printf("\n");
    }
    return 0;
}
