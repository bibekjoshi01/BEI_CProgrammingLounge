/*This program writes another program called hello.c using file handling, compiles the program, executes it and also displays
**the output obtained.

**Requirements:
    GCC(added to path)
**/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Open the file for writing
    FILE *file = fopen("hello.c", "w");
    if (file == NULL) {
        printf("Failed to create file.\n");
        return 1;
    }

    // Write the code to the file using fputs
    fputs("#include <stdio.h>\n\n", file);
    fputs("int main() {\n", file);
    fputs("    printf(\"Hello, world!\\n\");\n", file);
    fputs("    return 0;\n", file);
    fputs("}\n", file);

    // Close the file
    fclose(file);

    // Compile the program using shell command
    system("gcc hello.c -o hello");

    // Execute the compiled program and capture the output
    FILE *output = popen("hello.exe", "r"); //use command popen("./hello", "r"); in case of Linux OS.
    if (output == NULL) {
        printf("Failed to open pipe for command execution.\n");
        return 1;
    }

    // Read and print the output
    char buffer[128];
    while (fgets(buffer, sizeof(buffer), output) != NULL) {
        printf("Output: %s", buffer);
    }

    // Close the output pipe
    pclose(output);

    return 0;
}
