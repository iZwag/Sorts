# Sorting with C

My attempt on decently efficient implementations of common sorts in C.

- [x] Insertion sort
- [x] Merge sort
- [x] Quick sort

## Installation

1. Clone or zip this repository. 
1. Extract the .h and .c file for the sorting algorithm of your choice.
1. Store these in your project directory.
1. Remember to include `#include "quick_sort.h"` to enable it in your program.

## Use

Here is an example test that use quick-sort:

```
#include <stdio.h>
#include "quick_sort.h"


int main(int argc, char *argv[])
{
   uint16_t list[] = {10, 3, 18, 20, 21, 4, 11, 10, 34, 27, 30, 29, 14, 11, 23};
   uint16_t size = sizeof(list)/sizeof(list[0]);
   uint16_t a;

   quick_sort(list, size);

   for(a=0; a<size; a++){
      printf("%d ", list[a]);
   }

   printf("\n");

   return 0;
}
```