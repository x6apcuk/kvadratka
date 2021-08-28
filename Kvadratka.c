#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, diskr;

	printf("a = ");
	scanf("%f", &a);

	printf("b = ");
	scanf("%f", &b);

	printf("c = ");
	scanf("%f", &c);
    diskr = b * b - 4 * a * c;
    
    if(diskr == 0)
    {
        printf("\t%f",-b / ( 2 * a ) );
    }
    else if(diskr < 0)
    {
        printf("Корней нет");
    }
    else
    {
        printf("Корень 1: %f     ", (-b + sqrt(diskr)) / (2 * a));
        printf("Корень 2: %f", (-b - sqrt(diskr)) / (2 * a));
    }
    
    
	return 0;
}
