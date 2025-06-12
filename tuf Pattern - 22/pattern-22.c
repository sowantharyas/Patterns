#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a , b ,t1 = n;
    int t = n * 2 - 1 ; // t = 2*3-1 =5
    t--;
    printf("t = %d\n",t);
    for(int i=0;i<n*2-1;i++){
        a = i ; // i = 1 ; a = 1
        b = t ; // t = 4 ; b = 4
        for(int j=0;j<n*2-1;j++){
            if(i==a || j==a){ // i==1 || j==1
                printf("%d",t1); // t1=2
            }
            else if(i==b-1 || j==b-1){ // i==3 || j==3
                printf("%d",t1); //t1=3
            }
            else{
                printf("@");
            }
        }
        --t1; //2
        --t; //4
//        printf("t=%d\tt1=%d\n",t,t1);
    printf("\n");
    }
    return 0;
}
