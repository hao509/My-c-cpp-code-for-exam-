#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int Mifunction(int x,int y);
    
    int n = Mifunction(x,y);
    printf("%d",n);
    
    return 0;

}
int Mifunction(int x,int y){
    int number=x;
    if (x!=0&&y!=0){
    for(int i=1;i<y;i++){
        number=number*x;

    }
    }else if (x==0&&y==0){
        number=1;
    }
    return number;

}