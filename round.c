#include<stdio.h>
#define ROUND(a)((int)(a+.5))
#define FLOOR(a)((int)(a+.9))
#define CEIL(a)((int)(a))
int main()
{
	float f;
	printf("Enter the number :");
	scanf("%f",&f);
	printf("Rounded : %d\nFloor   : %d\nCeil    : %d",ROUND(f),FLOOR(f),CEIL(f));
	return 0;
}
