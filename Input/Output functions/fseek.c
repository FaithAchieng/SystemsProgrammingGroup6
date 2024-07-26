#include <stdio.h>
int main(){
FILE *fp;
char data[100];

//Opening a file in read mode
fp = fopen("sample.txt", "r");

if (fp == NULL){
printf("Error opening file.\n");
return 1;
}

//Seeking to the fifth byte from the beginning
fseek(fp, 5, SEEK_SET);

//Reading data from the file after seeking
fread(data, sizeof(char), sizeof(data), fp);

//Displaying the data
printf("Data read after seek: %s\n", data);

//Closing the data
fclose(fp);

return 0;
}
