#include <stdio.h>
#include "quick_sort.h"


int main(int argc, char *argv[])
{
   //uint16_t list[] = {21, 4, 3, 20, 22, 19, 10, 11, 6, 2, 1, 23, 5, 7, 30, 25, 27, 8, 20, 9, 26, 12, 24, 13, 18, 28, 17, 16, 15, 14};
   //uint16_t list[] = {2,7,765,654,3445,65,776,44,97,45,99,65,23,654,87,45};
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