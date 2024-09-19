#include "main.h"

int main(int argc, char** argv)
{
    char name[50];
    printf("Enter a Dictionary Name: ");
    gets(name);
    initializeDataDictionary(name);

    return 0;
}
