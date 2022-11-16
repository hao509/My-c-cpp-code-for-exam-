#include<stdio.h>
int main(){
    int n;
    double y=0.0;
    scanf("%d",&n);
    if(n<0){
        return 0;
    }
    for(int i=1; i<=n; i++){        
        y+=(double)1/(2*i-1);
    }
    printf("%lf",y);
    return 0;
}