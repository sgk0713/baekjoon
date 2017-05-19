#include <cstdio>
int main(){
	char a[10] = {'G','H','I','J','A','B','C','D','E','F'};
	char b[12] = {'i','j','k','l','a','b','c','d','e','f','g','h'};
	char c[7][10]  = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int T, numofyun = 0, gap, ja;
	for(scanf("%d", &T);T>0;T--){
		int y;
		scanf("%d", &y);
		gap = a[y%10];
		ja = b[y%12];
		numofyun = y/4 - y/100 + y/400;
		if(((y%4==0&&y%100!=0)||y%400==0)){
			numofyun -= 1;
			if((y-numofyun+numofyun*2)%7==0){
				printf("%c%c %s\n", gap, ja, c[6]);
			}else printf("%c%c %s\n", gap, ja, c[(y-numofyun+numofyun*2)%7-1]);
		}else{
			if((y-numofyun+numofyun*2)%7==0){
				printf("%c%c %s\n", gap, ja, c[6]);
			}else printf("%c%c %s\n", gap, ja, c[(y-numofyun+numofyun*2)%7-1]);
		}
	}
	return 0;
}