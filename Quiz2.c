#include <stdio.h>

int main() {
    FILE *fpt;
    struct frog {
        float d;
        int x;
    } henry;

    henry.d = 12.73;
    henry.x = 81925;

    fpt = fopen("out2", "w");

    // Using fprintf to write formatted data to the file
    fprintf(fpt, "%7.2f %7d\n", henry.d, henry.x);

    // Using fwrite to write the binary data of the structure to the file
    fwrite(&henry, sizeof(struct frog), 1, fpt);

    fclose(fpt);

    return 0;
}
