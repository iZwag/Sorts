#include "quick_sort.h"

#include <time.h>
#include <stdlib.h>

#include <stdio.h>
#include <inttypes.h>

void                split (uint16_t* list, uint16_t f_index, uint16_t l_index);
uint16_t        partition (uint16_t* list, uint16_t f_index, uint16_t l_index);
uint16_t random_partition (uint16_t* list, uint16_t f_index, uint16_t l_index);

void swap (uint16_t* a, uint16_t* b);

/*****************************************************************************/
/*                              API FUNCTIONS                                */
/*****************************************************************************/

void quick_sort(uint16_t* list, uint16_t size)
{
   // Initial random numbers seed
   srand(time(NULL));

   // Initial split, then recurisively splits and sorts
   printf("Starting sort with size %" PRIu16 "!\n\r", size);
   split(list, 0, size-1);
}

/*****************************************************************************/
/*                             LOCAL FUNCTIONS                               */
/*****************************************************************************/

void split(uint16_t* list, uint16_t f_index, uint16_t l_index)
{
   printf("In SPLIT, received indices %" PRIu16 " and %" PRIu16 ".\n", f_index, l_index);

   if(f_index < l_index){

      int divider = random_partition(list, f_index, l_index);
      //printf("In SPLIT, new divider returned: %" PRIu16 " \n", divider);
      printf("Splitting into two subarrays... \n");

      if(divider != 0){
         split(list, f_index, divider - 1);
      }
      split(list, divider + 1, l_index);

   }
}

uint16_t partition(uint16_t* list, uint16_t f_index, uint16_t l_index)
{
   uint16_t pivot, j, z;

   int i;

   pivot = list[l_index];
   i = f_index - 1;

   printf("Now partitioning between: %" PRIu16 " and %" PRIu16 " .\n\r", f_index, l_index);

   for(j = f_index; j < l_index; j++){

      if(list[j] <= pivot){

         i++;
         swap(&list[(uint16_t) i], &list[j]);

      }
   }

   z = (uint16_t) i + 1;

   printf("About to swap element %" PRIu16 " and %" PRIu16 ".\n", z, l_index);
   printf("They correspond to the values %" PRIu16 " and %" PRIu16 ".\n", list[i+1], list[l_index]);
   swap(&list[l_index], &list[z]);

   return z;
}

uint16_t random_partition(uint16_t* list, uint16_t f_index, uint16_t l_index)
{
   uint16_t r_index;

   printf("Now finding a random partition between %" PRIu16 " and %" PRIu16 "...\n", f_index, l_index);

   r_index = (rand() % ((l_index - f_index) + 1)) + f_index;
   printf("The random number: %" PRIu16 " \n", r_index);
   swap(&list[l_index], &list[r_index]);

   return partition(list, f_index, l_index);
}

void swap(uint16_t* a, uint16_t* b)
{
   uint16_t temp = *a;
   *a = *b;
   *b = temp;
}
