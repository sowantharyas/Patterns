#include<Stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int t = n ;
    for(int i=0;i<n;i++){
        // number
        for(int j=0;j<=i;j++){
            printf("%d",j+1);
        }
        // space
        for(int j=0;j<(t+2);j++){
            printf(" ");
        }
        // number
        for(int j=i;j>=0;j--){
            printf("%d",j+1);
        }
        t-=2;
        printf("\n");
    }
    return 0;
}
