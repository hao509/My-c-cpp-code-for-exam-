#include<stdio.h>
#include<math.h>
int main(){
    double x = 0.0;
    scanf("%lf",&x);
    double y = 0.0;
    if(x == 0.0){
        y = 0.0;
    }else if(x>0){
        y=sin(x);
    }else{
        y=cos(x);
    }
    printf("y=%lf",y);
    return 0;    
}