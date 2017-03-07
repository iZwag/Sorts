#include "insertion_sort.h"

/*****************************************************************************/
/*                              API FUNCTIONS                                */
/*****************************************************************************/

void insertion_sort(uint16_t* list, uint16_t size)
{
   int key, i, j;

   for(i = 1; i < size; i++) {
      key = list[i];

      j = i - 1;
      
      while( (j >= 0) && (list[j] > key) ) {
         list[j + 1] = list[j];
         j--;
      }
         
      list[j + 1] = key;    

   }
}