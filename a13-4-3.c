#include "stdio.h"
int main(){
    int i=9;
    int a[9];
    int max=0;
    for(int n=0;n<9;n++){
        scanf("%d",&a[n]);
        max+=a[n];
    }
    double avg=(double)max/9.0;
    for(int m=0;m<9;m++){
        printf("%d  ",a[m]);
    }
    printf("%lf  ",avg);
    return 0;
}