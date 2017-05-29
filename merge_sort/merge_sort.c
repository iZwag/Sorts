#include "merge_sort.h"

static void     split  (uint16_t* list, uint16_t f_index, uint16_t l_index);
static void     merge  (uint16_t* list, uint16_t f_index, uint16_t m_index, uint16_t l_index);
static uint16_t middle (uint16_t first, uint16_t last);

/*****************************************************************************/
/*                              API FUNCTIONS                                */
/*****************************************************************************/

void merge_sort(uint16_t* list, uint16_t size)
{
   split(list, 0, size-1);
}

/*****************************************************************************/
/*                             LOCAL FUNCTIONS                               */
/*****************************************************************************/

static void split(uint16_t* list, uint16_t f_index, uint16_t l_index)
{
   if(f_index < l_index){
      split(list, f_index, middle(f_index, l_index));
      split(list, middle(f_index, l_index) + 1, l_index);
      merge(list, f_index, middle(f_index, l_index), l_index);
   }
}

static void merge(uint16_t* list, uint16_t f_index, uint16_t m_index, uint16_t l_index)
{
   uint16_t left_list  [(m_index - f_index + 1) + 1];
   uint16_t right_list [(l_index - m_index) + 1];
   uint16_t i, j, k;

   for(i = 1; i < ((m_index - f_index + 1) + 1); i++){
      left_list[i] = list[f_index + i - 1];
   }
   for(j = 1; j < ((l_index - m_index) + 1); j++){
      right_list[j] = list[m_index + j];
   }

   left_list [(m_index - f_index + 1) + 1] = UINT16_MAX;
   right_list[(l_index - m_index)     + 1] = UINT16_MAX;

   i = j = 1;

   for(k = f_index; k<= l_index; k++){
      if(left_list[i] <= right_list[j]){
         list[k] = left_list[i];
         i++;
      }
      else{
         list[k] = right_list[j];
         j++;
      }
   }
}

static uint16_t middle(uint16_t first, uint16_t last)
{
   return ( (first + last)/2 ); 
}