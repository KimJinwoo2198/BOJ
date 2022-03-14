#include <stdio.h>
int main() {
	int in,a,b,i;
	scanf("%d", &in);
	for (i=1;i<=in;i++){
		scanf("%d %d", &a, &b);
		if( 0<a && b<10) printf("Case #%d: %d\n", i, a + b);
	}
}