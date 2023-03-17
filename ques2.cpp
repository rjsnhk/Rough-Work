#include <stdio.h>
int main(){
	int x,y,z;
	x=sizeof(34);
	y=sizeof(34.04);
	z=sizeof('a');
	printf("%d %d %d",x,y,z);
}
