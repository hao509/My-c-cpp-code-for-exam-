#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    double s;
    double area;
    double x;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a){
        s=(a+b+c)*0.5;
        x=s*(s-a)*(s-b)*(s-c);

        area = sqrt(x);
        printf("%lf",area);
    }else{
        printf("不是三角形");
    }
    return 0;
    
}