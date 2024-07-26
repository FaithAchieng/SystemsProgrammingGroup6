#include<stdio.h>
int main(){
FILE *fp;
char data[100];
//Opening a file in read mode
fp = fopen("sample.txt", "r");

if (fp == NULL){
printf("Error opening file.\n");
return 1;
}

//Reading data from the file
fread(data, sizeof(char), sizeof(data), fp);

//Displaying the data
printf("Data read: %s\n", data);

//Closing the file
fclose(fp);

return 0;
}
