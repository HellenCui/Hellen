#include<stdio.h>
int num[20];
void show(int n, int step, int ii) {
	if (step == n) {
		for (int i = 0; i < n; i++) {
			printf("%d", num[i]);
		}
		printf(", ");
		return;
	}

	for (int i = ii; i <= 9; i++) {
		num[step] = i;
		show(n, step + 1, i + 1);
	}
}
int my_print_combn(int n) {

	show(n, 0, 0);

	return 0;

}
