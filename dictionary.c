#include "dictionary.h"

void initializeDataDictionary(const char *DictionaryName) 
{
    long mainHeader = -1;
    printf("Initializing Data Dictionary...\n");

    FILE *dictionary = fopen(DictionaryName, "w+");

    fwrite(&mainHeader, sizeof(mainHeader), 1, dictionary);

    long CurrentDir = ftell(dictionary);
}
