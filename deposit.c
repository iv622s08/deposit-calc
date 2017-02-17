#include <stdio.h>
void input(int *p, int *s)
{
	printf("Input period and sum deposit: ");
	scanf("%d%d", &(*p), &(*s));
}
int check(int p, int s)
{
	if ((p > 365 || p < 0) || (s < 10000)){
		printf("Error");
		return -1;
	}
	return 0;
}
int main()
{
	int p = 0, s = 0;
	input(&p, &s);
	check(p, s);
	return 0;
}
