#include "merge_sort.h"

void split(uint16_t* list, uint16_t f_index, uint16_t l_index);
void merge(uint16_t* list, uint16_t f_index, uint16_t m_index, uint16_t l_index);
uint16_t middle_element(uint16_t first, uint16_t last);

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

void split(uint16_t* list, uint16_t f_index, uint16_t l_index)
{
   if(f_index < l_index){
      split(list, f_index, middle_element(f_index, l_index));
      split(list, middle_element(f_index, l_index) + 1, l_index);
      merge(list, f_index, middle_element(f_index, l_index), l_index);
   }
}

void merge(uint16_t* list, uint16_t f_index, uint16_t m_index, uint16_t l_index)
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

   left_list[(m_index - f_index + 1) + 1] = 0xFFFF;
   right_list[(l_index - m_index) + 1] = 0xFFFF;

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

uint16_t middle_element(uint16_t first, uint16_t last)
{
   return ( (first + last)/2 ); 
}