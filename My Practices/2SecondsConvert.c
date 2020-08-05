#include <stdio.h>
int main()
{
	int sec, h, m, s;
	printf("Enter Time in seconds: ");
	scanf("%d", &sec);

	h = (sec / 3600);

	m = (sec - (3600 * h)) / 60;

	s = (sec - (3600 * h) - (m * 60));

	printf("%d Hours %d Minutes and %d Seconds\n", h, m, s);

	return 0;
}