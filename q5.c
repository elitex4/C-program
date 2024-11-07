#include<stdio.h>

void main() {
	int n, len, len_c, t, ans;
	
	printf("Enter a number to be reversed: ");
	scanf("%d", &n);
	
	len = 0;
	len_c = 0;
	while(n>0){
		len_c = n/10;
		len += 1;
	}
	
	ans = 0;
	for(int i=len-1;i>=0;i--){
		t = n%10;
		
		int u = 1;
		for(int j=i;i>0;j--){
			u *= 10;
		}
		
		ans += t*u;		
	}
	
	printf("The reverse of %d is '%d'\n", n,ans);
}
