#include<stdio.h>
int main()
{
		int year=0;
		printf("Vyvedete cifrata na godinata:");
		scanf("%d", &year);
		if ((year % 4 == 0) && (year % 100 != 0))
		{
			printf("Godinata e visokosna!\n");
		}
		else
			printf("Godinata ne e visokosna!\n");

		return 0;

}
