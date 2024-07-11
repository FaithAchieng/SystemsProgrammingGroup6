#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char buffer[256];  // Buffer to hold the file content
    size_t bytesRead;

    // Open the file for reading in binary mode
    fp = fopen("sample.txt", "rb");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read the contents of the file into the buffer
    bytesRead = fread(buffer, 1, sizeof(buffer) - 1, fp);
    if (bytesRead == 0 && ferror(fp)) {
        perror("Error reading file");
        fclose(fp);
        return 1;
    }

    // Null-terminate the buffer
    buffer[bytesRead] = '\0';

    // Close the file
    fclose(fp);

    // Print the file contents
    printf("File content:\n%s\n", buffer);

    return 0;
}
