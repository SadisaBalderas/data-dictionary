#include "main.h"

int main(int argc, char** argv)
{
    char name[50];
    printf("Enter a Dictionary Name: ");
    fgets(name, sizeof(name), stdin);
    initializeDataDictionary(name);

    return 0;
}
