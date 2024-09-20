#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  char value[50];
  // In-Memory Pointer
  //struct Node *next;
  //File pointer
  long next; //
}NODE;

# DEFINE EMPTY_POINTER -1 
void initializeDataDictionary();

#endif
