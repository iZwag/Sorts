#include "merge.h"

void merge_sort(uint16_t* list, uint16_t size)
{
   int i;

   for(i=0; i<size; i++)
   {
      list[i]= 2*list[i];
      printf("%d ", list[i]);  
   }
   printf("\n");
}