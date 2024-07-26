#include <stdio.h>

int main() {
    // Define array of integers
    int data[] = {1, 2, 3, 4, 5};
    size_t dataSize = sizeof(data); // Total size of data in bytes

    // Open the file for writing in binary mode
    FILE *file = fopen("data.bin", "wb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Write the array to the file
    size_t elementsWritten = fwrite(data, sizeof(int), sizeof(data) / sizeof(int), file);
    if (elementsWritten != sizeof(data) / sizeof(int)) {
        perror("Error writing to file");
        fclose(file);
        return 1;
    }

    // Close file
    fclose(file);

    printf("Data written to file successfully.\n");

    return 0;
}
