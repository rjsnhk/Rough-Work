// #include<stdio.h>
//     static int b=100;
//     void test();
//     int main(){
//         test();
//         test();
//         test();
//     }
//     void test(){
//         int a=10;
//         a++;
//         b++;
//         printf("%d %d\n",a,b);
//     }




// #include<stdio.h>
//     static int b=100;
//     void test();
//     int main(){
//         test();
//         test();
//         test();
//     }
//     void test(){
//         static int a=10;
//         a++;
//         b++;
//         printf("%d %d\n",a,b);
//     }


#include<stdio.h>
int main(){
    register int a;
    // register int a;
    printf("%d",&a);
    return 0;

}