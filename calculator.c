//type = 1
// #include <stdio.h>
// int main(){
//     int a,b,pt;
//     printf("Enter 2 num \n");
//     scanf("%d %d",&a,&b);
//     printf("type what you do 1=sum , 2= diff , 3=multi , 4=divide\n");
//     scanf("%d",&pt);
//      switch(pt){
//      case 1:
//       printf("\nsum=%d",a+b);
//      break;
//      case 2:
//       printf("\ndiff=%d",a-b);
//      break;
//      case 3:
//       printf("\nmultiply=%d",a*b);
//      break;
//      case 4:
//       printf("\ndivide=%d",a/b);
//      break;
//     default:
//      printf("Invalid input");
//      break;
// }
// return 0;
// }


//type = 2
//#include <stdio.h>
//int main(){
//    double a,b;
//    char ch;
//    printf("type what you do s=sum , d=diff , m=multi , D=divide\n");
//    scanf("%c",&ch);
//    printf("Enter 2 num \n");
//    scanf("%lf%lf",&a,&b);
//    
//    
//    
//     switch(ch){
//     case 's':
//      printf("\nsum of %lf & %lf=%lf",a,b,a+b);
//     break;
//     case 'd':
//      printf("\ndifferenece of %lf & %lf=%lf",a,b,a-b);
//     break;
//     case 'm':
//      printf("\nmultiplication of %lf & %lf=%lf",a,b,a*b);
//     break;
//     case 'D':
//      printf("\n%lf divide by %lf = %lf",a,b,a/b);
//     break;
//    default:
//     printf("Invalid input");
//     break;
//}
//return 0;
//}


//type = 3
#include <stdio.h>
int main(){
    double a,b;
    char ch;
    printf("type what you do + for sum , - for diff , * for multiply , / for divide\n");
    scanf("%c",&ch);
    printf("Enter 2 num \n");
    scanf("%lf%lf",&a,&b);
     switch(ch){
     case '+':
      printf("\nsum of %lf & %lf=%lf",a,b,a+b);
     break;
     case '-':
      printf("\ndifferenece of %lf & %lf=%lf",a,b,a-b);
     break;
     case '*':
      printf("\nmultiplication of %lf & %lf=%lf",a,b,a*b);
     break;
     case '/':
      printf("\n%lf divide by %lf = %lf",a,b,a/b);
     break;
    default:
     printf("Invalid input");
     break;
}
return 0;
}