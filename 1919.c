#include <stdio.h>
#include <string.h>

int main(){
	char a[1000];
	char b[1000];
	int count_a[26]={0};
	int count_b[26]={0};
	int cnt=0;

	scanf("%s", a);
	scanf("%s", b);

	int a_len = strlen(a);
	int b_len = strlen(b);

	for(int i = 0; i<a_len ; i++){
		count_a[a[i]-'a']++;
	}
	for(int i = 0; i<b_len ; i++){
		count_b[b[i]-'a']++;
	}

	for(int i = 0; i<26 ; i++){
		if(count_a[i]<count_b[i])
			cnt += count_b[i] - count_a[i];
		else cnt += count_a[i] - count_b[i];
	}

	printf("%d\n", cnt);



	return 0;
}