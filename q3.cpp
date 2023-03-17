#include <stdio.h>
int main(){
	int x,y,z;
	x=sizeof(int);
	y=sizeof(longfloat);
	z=sizeof('a');
	printf("%d %d %d",x,y,z);
}
