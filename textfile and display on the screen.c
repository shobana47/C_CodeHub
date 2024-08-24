#include <stdio.h>

int main() {
    FILE *filePointer;
    char fileName[] = "sample.txt";
    filePointer = fopen(fileName, "r");
    if (filePointer == NULL) {
        printf("Error opening file %s.\n", fileName);
        return 1;
    }
    char data[100];
    printf("Data read from file:\n");
    while (fgets(data, sizeof(data), filePointer) != NULL) {
        printf("%s", data);
    }
    fclose(filePointer);

    return 0;
}
