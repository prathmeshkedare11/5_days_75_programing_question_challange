#include <stdio.h>

int main() {
    FILE *file; // Declare a FILE pointer
    char sentence[100]; // Declare a character array to store the sentence

    
    file = fopen("output.txt", "w");

   
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1; 
    }

    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    
    fprintf(file, "%s", sentence);

   
    fclose(file);

    printf("Sentence has been written to the file.\n");

    return 0;
}

