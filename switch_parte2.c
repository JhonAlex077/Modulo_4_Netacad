#include <stdio.h>

int main(void) 
{
	int meses;
	scanf("%d", &meses);
	int daysBefore = 0;
	int isCorrectlyComputed = 0;
	switch(meses)
	{
		case 12: daysBefore += 30;
		case 11: daysBefore += 31;
		case 10: daysBefore += 30;
		case 9:  daysBefore += 31;
		case 8:  daysBefore += 31;
		case 7:  daysBefore += 30;
		case 6:  daysBefore += 31;
		case 5:  daysBefore += 30;
		case 4:  daysBefore += 31;
		case 3:  daysBefore += 29;
		case 2:  daysBefore += 31;
		case 1:	isCorrectlyComputed = 1;  break;
		default: puts("Error: No exite ese mes en el calendario.");
	}
	if (isCorrectlyComputed)
		printf("hay %d dias antes del mes indicado.\n", daysBefore);
	return 0;
}