#include <stdio.h>
void input(int *p, int *s){
	printf("Input period and sum deposit: ");
	scanf("%d%d", &(*p), &(*s));
	}

int main(){
	int p = 0, s = 0;
	input(&p, &s);
	printf("%d %d", p, s);
	return 0;
}
