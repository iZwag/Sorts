#include "merge.h"

void split(uint16_t* list, uint16_t f_element, uint16_t l_element);
void merge(uint16_t* list, uint16_t f_element, uint16_t m_element, uint16_t l_element);
uint16_t middle_element(uint16_t first, uint16_t last);

/* API FUNCTIONS */

void merge_sort(uint16_t* list, uint16_t size)
{
   split(list, 0, size-1);
}

/* LOCAL FUNCTIONS */

void split(uint16_t* list, uint16_t f_element, uint16_t l_element)
{
   if(f_element < l_element){
      split(list, f_element, middle_element(f_element, l_element));
      split(list, middle_element(f_element, l_element) + 1, l_element);
      merge(list, f_element, middle_element(f_element, l_element), l_element);
   }
}

void merge(uint16_t* list, uint16_t f_element, uint16_t m_element, uint16_t l_element)
{
   uint16_t left_list  [(m_element - f_element + 1) + 1];
   uint16_t right_list [(l_element - m_element) + 1];
   uint16_t i, j, k;

   for(i = 1; i < ((m_element - f_element + 1) + 1); i++){
      left_list[i] = list[f_element + i - 1];
   }
   for(j = 1; j < ((l_element - m_element) + 1); j++){
      right_list[j] = list[m_element + j];
   }

   left_list[(m_element - f_element + 1) + 1] = 0xFFFF;
   right_list[(l_element - m_element) + 1] = 0xFFFF;

   i = j = 1;

   for(k = f_element; k<= l_element; k++){
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