#include <stdio.h>
void input(int *p, int *s)
{
	printf("Input 0 < period < 365 and sum deposit > 10000: ");
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

int income(int p, int s){
	if (s > 100000){
		if (p >= 0 && p <= 30)
			s -= (s / 100 * 10);
		if (p >= 31 && p <= 120)
		s += (s / 100 * 3);
		if (p >= 121 && p <= 240)
		s += (s / 100 * 8);
		if (p >= 241 && p <= 365)
		s += (s / 100 * 15);
	}
	else{
		if (p >= 0 && p <= 30)
			s -= (s / 100 * 10);
		if (p >= 31 && p <= 120)
		s += (s / 100 * 2);
		if (p >= 121 && p <= 240)
		s += (s / 100 * 6);
		if (p >= 241 && p <= 365)
		s += (s / 100 * 12);
    }
    return s;
}

int main()
{
	int p = 0, s = 0, out;
	input(&p, &s);
	if (check(p, s) == 0){
		out = income(p, s);
		printf("Income: %d", out);
	}
	return 0;
}
