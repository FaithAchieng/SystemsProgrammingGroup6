#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[20];  // Ensure the buffer is large enough

    // Open the file "sample.txt" for reading and writing ("r+").
    fp = fopen("sample.txt", "r+");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Move the file pointer to the 5th byte from the beginning (SEEK_SET).
    int seek_result = fseek(fp, 5, SEEK_SET);
    if (seek_result != 0) {
        perror("Error seeking in the file");
        fclose(fp);
        return 1;
    }

    // Read 10 characters from the current position.
    size_t elements_read = fread(buffer, sizeof(char), 10, fp);

    // Check for errors or EOF.
    if (ferror(fp) != 0) {
        perror("Error reading file");
        fclose(fp);
        return 1;
    }

    // Null-terminate the buffer to safely print it as a string.
    buffer[elements_read] = '\0';

    // Print the read characters.
    printf("Read %zu characters: %s\n", elements_read, buffer);

    // Close the file.
    fclose(fp);

    return 0;
}
