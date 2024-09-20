#include "dictionary.h"

int initializeDataDictionary(const char *DictionaryName) 
{
    long mainHeader = EMPTY_POINTER;
    int stringsToSave = 0;
        
    
    printf("Initializing Data Dictionary...\n");

    FILE *dictionary = fopen(DictionaryName, "w+");

    fwrite(&mainHeader, sizeof(mainHeader), 1, dictionary);

    printf("How many strings would you like?: ");
    scanf("%d", &stringsToSave);

    for(int counter = 0; counter < stringsToSave; counter++){
        NODE currentNote;

        currentNode.next = EMPTY_POINTER;
        printf("Enter a value for node %d: ", counter);
        fgets(&(currentNode.value), sizeof(currentNode), stdin);
    }

    return EXIT_SUCCESS;
}
