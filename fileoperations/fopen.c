#include<stdio.h>
#include <string.h>
int main()
{
FILE *fp;
fp= fopen("sample.txt" ,
"wt");
fprintf(fp, "this is a test file\n");
fclose(fp);
return 0;
}