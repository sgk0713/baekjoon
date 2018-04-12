#include <cstdio>




int quad(int x, int y, int size){

	if(size == 1){
		printf("%d\n", arr[x][y]);
		return;
	}
	if(check(x, y, size)){
		printf("%d", arr[x][y]);
		return;
	}

	size/=2;
	printf("(");
	quad(x, y, size);
	quad(x, y+size, size);
	quad(x+size, y, size);
	quad(x+size, y+size, size);
	printf(")");

}
int main(){
	//size==1
	//다 같을때


	return 0;
}