#include<stdio.h>

int main(){
    int n ;
    scanf("%d",&n);
    int t = n ;
    for(int i=0;i<n;i++){
        char ch = 'A';
        //space
        for(int j=0;j<t-1;j++){
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++){
            if(j<=(2*i+1)/2){
                printf("%c",ch++);
                if(j==(2*i+1)/2){
                    --ch;
                }
            }
            else{
                printf("%c",--ch);
            }
        }
        t--;
        printf("\n");
    }
    return 0;
}
