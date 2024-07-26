#include<stdio.h>
int main() {
FILE *fp;
char data[] = "This is a test file";

//Opening a file in write mode
fp=fopen("sample.txt", "w");
if (fp == NULL){
printf("Error opening file.\n");
return 1;
}

//Writing data to the file
fwrite(data, sizeof(char), sizeof(data), fp);

//Closing the file
fclose(fp);
return 0;
}
