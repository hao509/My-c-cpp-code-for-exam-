#include<stdio.h>
int main(){
    double grades;
    scanf("%lf",&grades);
    int ad;
    ad=grades/10;
    if(grades>100||grades<0){
        return 0;
    }
    switch (ad){
     case 10: printf("A");break;
     case 9: printf("A");break;
     case 8: printf("B");break;
     case 7: printf("C");break;
     case 6: printf("D");break;
     default:
	 	printf("E");
     break;
    }


    
}