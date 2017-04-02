#include<stdio.h>
int main(){
	int num = 0;
	int result;
	scanf("%d",&num);
		while(num != 1){
			if(num%2 == 0){
			num = num / 2;
			
			}
			else{
			num = (3*num + 1)/2;

			}
			result++;
		}
	printf("%d",result);
		
	return 0;
}