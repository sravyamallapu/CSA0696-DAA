#include <stdio.h>

void copyString(char source[], char destination[]) {
    int i = 0;
    
    
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    
    destination[i] = '\0';
}

int main() {
    char source[] = "Hello, World!";
    char destination[50];  

    copyString(source, destination);

    printf("Source string: %s\n", source);
    printf("Destination string (after copying): %s\n", destination);

    return 0;
}
