#include "quick_sort.h"

#include <time.h>
#include <stdlib.h>

void                split (uint16_t* list, uint16_t f_index, uint16_t l_index);
uint16_t        partition (uint16_t* list, uint16_t f_index, uint16_t l_index);
uint16_t random_partition (uint16_t* list, uint16_t f_index, uint16_t l_index);

void swap (uint16_t *a, uint16_t *b);

/*****************************************************************************/
/*                              API FUNCTIONS                                */
/*****************************************************************************/

void quick_sort(uint16_t* list, uint16_t size)
{
   // Initial random numbers seed
   srand(time(NULL));

   // Initial split, then recurisively splits and sorts
   split(list, 0, size-1);
}

/*****************************************************************************/
/*                             LOCAL FUNCTIONS                               */
/*****************************************************************************/

void split(uint16_t* list, uint16_t f_index, uint16_t l_index)
{
   uint16_t divider;

   if(f_index < l_index){

      divider = random_partition(list, f_index, l_index);
      split(list, f_index, divider - 1);
      split(list, divider + 1, l_index);

   }
}

uint16_t partition(uint16_t* list, uint16_t f_index, uint16_t l_index)
{
   uint16_t pivot, temp, i, j;

   pivot = list[l_index];
   i = f_index - 1;

   for(j = f_index; j <= (l_index - 1); j++){

      if(list[j] <= pivot){

         i++;
         swap(&list[i], &list[j]);

      }
   }

   swap(&list[l_index], &list[i + 1]);

   return (i + 1);
}

uint16_t random_partition(uint16_t* list, uint16_t f_index, uint16_t l_index)
{
   uint16_t r_index, temp;

   r_index = (rand() % ((l_index - f_index) + 1)) + f_index;
   swap(&list[l_index], &list[r_index]);

   return partition(list, f_index, l_index);
}

// Good
void swap(uint16_t *a, uint16_t *b)
{
   uint16_t temp = *a;
   *a = *b;
   *b = temp;
}
