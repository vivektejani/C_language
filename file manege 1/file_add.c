#include<stdio.h>

int main() {
	int num;
	FILE *fp;
	
	fp = fopen("data.txt", "a");
	
	printf("Enter the number : ");
	scanf(" %d", &num);
	
	fprintf(fp, "  %d", num);
	
	fclose(fp);
	
	return 0;
}

