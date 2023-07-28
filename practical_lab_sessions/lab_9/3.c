// Write set of strings each of length into a file 'stringc.txt' and display it (use fputs() and fgets())

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100 // Maximum length of each string

int main() {
    FILE *file;
    char strings[5][MAX_LENGTH];

    file = fopen("stringc.txt", "w");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter 5 strings (each of maximum %d characters):\n", MAX_LENGTH);
    for (int i = 0; i < 5; i++) {
        fgets(strings[i], sizeof(strings[i]), stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0'; 
        fputs(strings[i], file);
        fputs("\n", file); 
    }

    fclose(file);

    // Step 2: Read the content of the file and display it.
    file = fopen("stringc.txt", "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("\nContent of the file:\n");
    char line[MAX_LENGTH];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
