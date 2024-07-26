#include <stdio.h>  
#include <string.h> 
int main()
{
    FILE *fp; // Declare a file pointer

    // Open the file "sample.txt" in write text mode ("wt")
    // If the file doesn't exist, it will be created
    fp = fopen("sample.txt", "wt");

    // Write the string "this is a test file\n" to the file
    fprintf(fp, "this is a test file\n");

    // Close the file 
    fclose(fp);

    return 0; 
}
