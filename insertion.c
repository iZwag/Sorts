#include <stdint.h>
#include <stdio.h>

uint32_t i, j, array_size;
uint8_t array[];
uint8_t key;

int main(int argc, char* argv[])
{
   /* Hardcoded array parameters  */
   array = [12,16,4,11,3,9,8,45,28,2,13,30,22];
   array_size = 13;

   printf("Unsorted array: ");
   for(j=0;j<array_size;j++)
   {      
      printf("%u, ", array[j]);
   }
   printf("\n");
   
   /* Insertion sort algorithm */
   for(j=2;j<=array_size;j++)
   {
      key = array[j];
      i = j - 1;

      while( (i>0) && (array[i])>key)
      {
         array[i + 1] = array[i];
         i -= 1;
      }
      
      array[i+1] = key;
   }

   printf("Sorted array: ");
   for(j=0;j<array_size;j++)
   {      
      printf("%u, ", array[j]);
   }
   printf("\n");

   return 0;
}


