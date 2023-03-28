//#include<stdio.h>
//int main(){
//	int ar[10];
//	for(int i=0;i<10;i++){
//		scanf("%d",&ar[i]);
//	}
//	for(int i=0;i<10;i++){
//		printf("\n ar[%d]=%d at %d",i,ar[i],&ar[i]);
//		
//	}
//}

// #include<stdio.h>
// int main(){
//     int marks[5];
//     marks[0]=67;
//     marks[1]=77;
//     marks[2]=88;
//     marks[3]=11;
//     marks[4]=99;
//     for(int i=0;i<5;i++){
//         printf("%d",marks[i]);
//     }
//     return 0;
// }


//#include<stdio.h>
//int main(){
//    int marks[5]={30,49,5,6,9};
//    for(int i=0;i<5;i++){
//        printf("%d\n",marks[i]);
//    }
//    printf("address of base = %d\n",marks);
//    printf("address of base = %d\n",&marks);
//    printf("address of base = %d\n",&marks[0]);
//    return 0;
//}

#include <stdio.h>
int main(){
	int num[20];
	for(int i=0;i<20;i++){
		scanf("%d",&num[i]);
	}
	
	
	printf("even numbers are = ");
	for(int i=0;i<20;i++){
		if(num[i]%2==0){
			printf("%d,",num[i]);
		}
	}
	printf("\nodd numbers are = ");
	for(int i=0;i<20;i++){
		if(num[i]%2!=0){
			printf("%d,",num[i]);
		}
	}
	printf("\nsum of all numbers = ");
	int sum=0;
	for(int i=0;i<20;i++){
		
			sum=sum+num[i];
		}
	printf("%d",sum);
	
}
