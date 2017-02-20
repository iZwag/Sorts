#include "quick_sort.h"
#include <time.h>
#include <stdlib.h>

void split(uint16_t* list, uint16_t f_element, uint16_t l_element);
uint16_t partition(uint16_t* list, uint16_t f_element, uint16_t l_element);
uint16_t r_partition(uint16_t* list, uint16_t f_element, uint16_t l_element);

/* API FUNCTIONS */

void quick_sort(uint16_t* list, uint16_t size)
{
   split(list, 1, size-1);
}

/* LOCAL FUNCTIONS */

void split(uint16_t* list, uint16_t f_element, uint16_t l_element)
{
   uint16_t divider;

   if(f_element < l_element){
      divider = r_partition(list, f_element, l_element);
      split(list, f_element, divider-1);
      split(list, divider+1, l_element);
   }
}

uint16_t partition(uint16_t* list, uint16_t f_element, uint16_t l_element)
{
   uint16_t pivot, temp, i, j;

   pivot = list[l_element];
   i = f_element - 1;

   for(j = f_element; j <= (l_element - 1); j++){

      if(list[j] <= pivot){
         i++;
         temp = list[j];
         list[j] = list[i];
         list[i] = temp;
      }
   }

   temp = list[l_element];
   list[l_element] = list[i + 1];
   list[i + 1] = temp;

   return (i + 1);
}

uint16_t r_partition(uint16_t* list, uint16_t f_element, uint16_t l_element)
{
   uint16_t r_element, temp;

   srand(time(NULL));

   r_element = (rand() % ((l_element - f_element) + 1)) + f_element;
   temp = list[r_element];
   list[r_element] = list[l_element];
   list[l_element] = temp;

   return partition(list, f_element, l_element);
}

