#include<reg52.h>
sbit p1_1=P1^0;
unsigned int a;
void main()
{
	while (1)
	{
		p1_1=0;
		a=50000;
		while (a--);
		p1_1=1;
		while (a--);
	}
}
