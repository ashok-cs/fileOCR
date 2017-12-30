#include <stdio.h>

int main() 
{
	FILE *fp;
	char ch;
	int count = 0;
	fp = fopen("cs_ocr.txt", "r");
	while( fgetc(fp) != EOF)
		count++;
	printf("Number of bytes:%d\n", count);
	fclose(fp);
	return 0;
}
