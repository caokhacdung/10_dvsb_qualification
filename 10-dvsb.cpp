#include <stdio.h>
int main(){
	int a;
	printf ("enter a number = ");
	scanf ("%d",&a);
	if (a % 10 == 0){
		printf ("the number you entered is divisible by 10");
	}else {
		printf ("the number you entered is not divisible by 10");
	}
}
