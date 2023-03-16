//#include<stdio.h>
//int main(){
//    double mark;
//    printf("enter your mark \n");
//    scanf("%lf",&mark);
//    if (mark>=90){
//        printf("you got A");
//    }
//    else if (mark>=80 && mark<=89.99){
//        printf("you got B");
//    }
//    else if (mark>=70 && mark<=79.99){
//        printf("you got C");
//    }
//    else if (mark>=60 && mark<=69.99){
//        printf("you got D");
//    }
//    else if (mark>=50 && mark<=59.99){
//        printf("you got E");
//    }
//    else {
//        printf("you are fail");
//    }
//    
//    return 0;
//}

#include <stdio.h>
int main(){
	int a,b,c;
	printf("enter 3 num");
	scanf("%d%d%d",&a,&b,&c);
	
	if (a>b && a>c){
		printf("%d",a);
	}
	else if (b>c && b>a){
		printf("%d",b);
	}
	else{
		printf("%d",c);
	}
	return 9; 
	
}
