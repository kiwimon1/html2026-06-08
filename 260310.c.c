#include <stdio.h>
int main() {
	int a;
	scanf("%d",&a);
	if(a > 0){
		printf("양수입니다.");
	}
	else if(a < 0){
		printf("음수입니다.");
	}	 
	else {
		printf("0입니다.");
	}
}
	/*
	int a;
	scanf("%d",&a);
	if (a % 2 == 0) {
		printf("짝수");
	}
	else
		printf("홀수"); 

	return 0; 
}
*/
/*
int q(int a, int b) {
    return a + b; 
}
int w(int a, int b) {
    return a - b; 
}
int e(int a, int b) {
    return a * b; 
}
int r(int a, int b) {
    return a / b; 
}
int main () {
	int q(int a, int b);
	int w(int a, int b);
	int e(int a, int b);
	int r(int a, int b);
	//q 더하기 
	//w 뺴기 
	//e 곱하기 
	//r 나누기
	int a =0;
	int b =0;
	int c =0;
	printf("어떤 계산을 원함?\n1 = 덧셈\n2 = 뺄셈\n3 = 곱셈\n4 = 나눗셈\n"); 
	scanf("%d",&c);
		} 
	if (c < 1 || c > 4) {
		printf("잘못된 숫자입니다. 다시 입력해 주세요.");
	}
	printf("첫번째 숫자를 입력하세요.\n");
	scanf("%d",&a);
	printf("두번째 숫자를 입력하세요.\n");
	if (b == 0){
		printf("잘못된 숫자입니다. 다시 입력해 주세요.");
	}
	scanf("%d",&b); 	
		
	else if (c == 1) {
		int result = q(a, b);
    	printf("Result: %d\n", result);
    	return 0;
	} 
	else if (c == 2) {
		int result = w(a, b);
    	printf("Result: %d\n", result);
    	return 0;
	} 
	else if (c == 3) {
		int result = e(a, b);
    	printf("Result: %d\n", result);
    	return 0;
	} 
	else if (c == 4) {
		int result = r(a, b);
    	printf("Result: %d\n", result);
    	return 0;

	return 0;

}
*/
