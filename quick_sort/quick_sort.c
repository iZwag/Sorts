#include "quick_sort.h"

#include <time.h>
#include <stdlib.h>

static void     swap             (uint16_t* a, uint16_t* b);
static void     sort             (uint16_t* list, uint16_t f_index, uint16_t l_index);
static uint16_t partition        (uint16_t* list, uint16_t f_index, uint16_t l_index);
static uint16_t random_partition (uint16_t* list, uint16_t f_index, uint16_t l_index);


/*****************************************************************************/
/*                              API FUNCTIONS                                */
/*****************************************************************************/

void quick_sort (uint16_t* list, uint16_t size)
{
   /* Initial random numbers seed */
   srand(time(NULL));

   /* Initializes sort, then recurisively splits and sorts */
   sort(list, 0, size-1);
}

/*****************************************************************************/
/*                             LOCAL FUNCTIONS                               */
/*****************************************************************************/

static void sort (uint16_t* list, uint16_t f_index, uint16_t l_index)
{
   if(f_index < l_index) {

      uint16_t divider = random_partition(list, f_index, l_index);

      if(divider != 0) {
         sort(list, f_index, divider - 1);
      }
      sort(list, divider + 1, l_index);

   }
}

static uint16_t partition (uint16_t* list, uint16_t f_index, uint16_t l_index)
{
   uint16_t pivot, i, j;

   pivot = list[l_index];
   i = f_index - 1;

   for(j = f_index; j < l_index; j++) {
      /* Change to '>' for decreasing order sorting */
      if(list[j] <= pivot) {

         i++;
         swap(&list[i], &list[j]);

      }
   }

   i++;
   swap(&list[l_index], &list[i]);

   return i;
}

static uint16_t random_partition (uint16_t* list, uint16_t f_index, uint16_t l_index)
{
   uint16_t r_index;

   r_index = (rand() % ((l_index - f_index) + 1)) + f_index;
   swap(&list[l_index], &list[r_index]);

   return partition(list, f_index, l_index);
}

static void swap (uint16_t* a, uint16_t* b)
{
   uint16_t temp = *a;
   *a = *b;
   *b = temp;
}