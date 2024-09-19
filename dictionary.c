#include "dictionary.h"

int initializeDataDictionary(const char *DictionaryName) 
{
    long mainHeader = EMPTY_POINTER;
    printf("Initializing Data Dictionary...\n");

    FILE *dictionary = fopen(DictionaryName, "w+");

    fwrite(&mainHeader, sizeof(mainHeader), 1, dictionary);

    long CurrentDir = ftell(dictionary);
    return EXIT_SUCCESS;
}
