#include <stdio.h>

int main(){
	int hour, min, time;
	scanf("%d %d", &hour, &min);
	scanf("%d", &time);
	hour += time / 60;
	min += time % 60;
	if(min >= 60) {
		hour++;
		min %= 60;
	}
	if(hour >= 24)
		hour %= 24;
	printf("%d %d\n", hour, min);
}