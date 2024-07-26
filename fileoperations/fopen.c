#include <stdio.h>  // Include the standard input/output library
#include <string.h> // Include the string manipulation library

int main()
{
    FILE *fp; // Declare a file pointer

    // Open the file "sample.txt" in write text mode ("wt")
    // If the file doesn't exist, it will be created
    fp = fopen("sample.txt", "wt");

    // Write the string "this is a test file\n" to the file
    fprintf(fp, "this is a test file\n");

    // Close the file to ensure all data is written and resources are freed
    fclose(fp);

    return 0; // Return 0 to indicate successful execution
}
