#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file; // Declare a FILE pointer
    char line[100]; // Declare a character array to store the line

    
    file = fopen("input.txt", "r");

   
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    
    if (fgets(line, sizeof(line), file) != NULL) {
        // Print the first line
        printf("First line from the file: %s", line);
    } else {
        printf("File is empty.\n");
    }

    
    fclose(file);

    return 0;
}

