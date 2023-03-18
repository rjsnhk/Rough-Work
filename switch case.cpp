//#include<stdio.h>
//int main()
//{
//   char pt;
//   printf("Enter the number of nodes:");
//   scanf("%c", &pt);
//   switch(pt){
//     case '0':
//      printf("\nNo Geometry");
//     break;
//     case '1':
//      printf("\nA point");
//     break;
//     case '3':
//      printf("\nA line");
//     break;
//     case '4':
//      printf("\nA triangle");
//     break;
//     case '5':
//      printf("\nA rectangle");
//     break;
//     case '6':
//      printf("\nA pentagon");
//     break;
//    default:
//     printf("Invalid input");
//     break;
//    }
//return 0;
//}

#include<stdio.h>
int main()
{
   char pt;
   printf("Enter the number of nodes:");
   scanf("%c", &pt);
   switch(pt){
     case 'a':
      printf("\nNo Geometry");
     break;
     case 'b':
      printf("\nA point");
     break;
     case 'c':
      printf("\nA line");
     break;
     case 'd':
      printf("\nA triangle");
     break;
     case 'e':
      printf("\nA rectangle");
     break;
     case 'f':
      printf("\nA pentagon");
     break;
    default:
     printf("Invalid input");
     break;
    }
return 0;
}

