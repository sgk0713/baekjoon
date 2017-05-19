#include <stdio.h>
int n, S[72] = {0, 1, 2} , i = 3;
int main() {
	
		scanf("%d", &n);
		for(i; S[i-1] <= n; i++)
			S[i] = S[i-1] + S[i-2];
		while (n > 0) {
			for (i = 0; S[i] <= n; i++);
			i--;
			if (S[i] == n) {
				printf("answer:%d\n\n", n);
				break;
			}
			else n -= S[i];
		}
	
	
}