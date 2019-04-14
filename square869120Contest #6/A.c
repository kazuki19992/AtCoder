#include<stdio.h>
int main(void) {
	int n, t, cnt = 0;
	int input, inputsum = 0;
	scanf("%d%d", &n, &t);
	for (int i = 0; i < n-1; i++) {
		scanf("%d", &input);
		inputsum += input;
	}

	cnt = inputsum / t;
	if (inputsum % t >= 1) {
		cnt++;
	}

	printf("%d", cnt);
	return 0;
}