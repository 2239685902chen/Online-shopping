#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double q = 0;
	int w = 0, e = 0, r = 0;
	scanf("%lf%d%d%d", &q, &w, &e, &r);
	if (w == 11 && e == 11)
	{
		q *= 0.7;
	}
	else
	{
		q *= 0.8;
	}
	if (r)
	{
		q -= 50;
	}
	if (q < 0)
	{
		q = 0;
	}
	printf("%.2lf\n", q);
	return 0;
}