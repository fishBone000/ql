#include<stdio.h>

short is_leap(int year){
	if(year%100 != 0 && year%4 == 0)
		return 1;
	if(year%100 == 0 && year%400 == 0)
		return 1;
	return 0;
}

int main(){
	int year, month, day;
	scanf("%d/%d/%d", &year, &month, &day);
	int total = 0;

	for(int this_year = 2000; this_year < year; this_year++)
		total += is_leap(this_year)?366:365;

	for(int this_month = 1; this_month < month; this_month++)
		switch(this_month){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				total += 31;
				break;
			case 2:
				total += is_leap(year)?29:28;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				total += 30;
				break;
			default:
				fprintf(stderr, "Welp, bug!\n");
		}

	total += day;
	
	if(total%5 <= 3)
		printf("fishing");
	else
		printf("shaiwang");
	return 0;
}
