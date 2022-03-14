#include<stdio.h>
int main(){
    int N,X,in,i;
    scanf("%d %d", &N, &X);
    for(i=0;i<N;i++){
        scanf("%d", &in);
        if(X>in)
            printf("%d ", in);
    }
}