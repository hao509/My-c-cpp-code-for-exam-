#include<stdio.h>
int main(){
	void str_copy(char *a,char *b);
	void str_add(char *a,char *b);
    char str[20]="abcde";
    char str1[20]="";
    char str2[40]="efg";
    char str3[41]="";
    char c[40]="";
    //int i=0;
    // while(str[i]!="\0"){ 
    //     str1[i] = str[i];
    //     i++;
    // }
//    for(int i=0;str[i] != ' ';i++){
//        str1[i] = str[i];
//    }
//    str_copy(str,str1);
    str_add(str,str2);
  
    printf("%s", str);
    return 0;
    
}
void str_copy(char *a,char *b){
	int i = 0;
	while(a[i]!='\0'){
		b[i]=a[i];
		i++;
	}
}
void str_add(char *a,char *b){
	int n=0;
	for (int x=0;a[x]!='\0';x++){
		for (int y=x+1;a[y]=='\0';y++){
			a[y]=b[n];
			n++;
//			for(int n=0;b[n]!='\0';b++){
//				a[y]=b[n];
//			}
		}
	}


	
}