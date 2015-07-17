#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
   unsigned int i, j, key; 

   /* Hardcoded array parameters  */
   unsigned int array_size = 13;
   unsigned int arr[] = {12,16,4,11,3,9,8,45,28,2,13,30,22};
   
   /* Display array */
   printf("Unsorted array: ");
   for(j=0;j<array_size;j++)
   {      
      printf("%u, ", arr[j]);
   }
   printf("\n");
   

   /* INSERTION SORT */
   for(j=1;j<=array_size;j++)
   {
      // Place current arrayelement in key
      key = arr[j];
      // i is the index before current
      i = j - 1;
      
      while( (i>0) && (arr[i])>key)
      {
         arr[i + 1] = arr[i];
         i -= 1;
      }
         
      arr[i+1] = key;          
    
   }


   /* Display sorted array */
   printf("Sorted array: ");
   for(j=0;j<array_size;j++)
   {      
      printf("%u, ", arr[j]);
   }
   printf("\n");

   return 0;
}


