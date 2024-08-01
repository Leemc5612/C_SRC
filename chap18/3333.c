#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 10
#define MAX_LENGTH 21  // 20 characters + 1 for null terminator

// Function to check if a word is in the list
int is_registered(char *word, char registered_words[][MAX_LENGTH], int registered_count) {
    for (int i = 0; i < registered_count; i++) {
        if (strcmp(word, registered_words[i]) == 0) {
            return 1;  // Found
        }
    }
    return 0;  // Not found
}

int main(void) {
    FILE *file_a, *file_b, *file_c;
    char registered_words[MAX_WORDS][MAX_LENGTH];
    char word[MAX_LENGTH];
    int registered_count = 0;

    // Open the file containing registered words
    file_a = fopen("a.txt", "r");
    if (file_a == NULL) {
        perror("Error opening a.txt");
        return EXIT_FAILURE;
    }

    // Read registered words
    while (fgets(registered_words[registered_count], MAX_LENGTH, file_a) != NULL) {
        // Remove newline character if present
        registered_words[registered_count][strcspn(registered_words[registered_count], "\n")] = '\0';
        registered_count++;
        if (registered_count >= MAX_WORDS) {
            break;  // Maximum number of registered words reached
        }
    }
    fclose(file_a);

    // Open the file containing words to check
    file_b = fopen("b.txt", "r");
    if (file_b == NULL) {
        perror("Error opening b.txt");
        return EXIT_FAILURE;
    }

    // Open the output file
    file_c = fopen("c.txt", "w");
    if (file_c == NULL) {
        perror("Error opening c.txt");
        fclose(file_b);
        return EXIT_FAILURE;
    }

    // Read words from b.txt and check if they are not in the registered words
    while (fgets(word, MAX_LENGTH, file_b) != NULL) {
        // Remove newline character if present
        word[strcspn(word, "\n")] = '\0';
        if (!is_registered(word, registered_words, registered_count)) {
            fprintf(file_c, "%s\n", word);
        }
    }
    fclose(file_b);
    fclose(file_c);

    return EXIT_SUCCESS;
}
