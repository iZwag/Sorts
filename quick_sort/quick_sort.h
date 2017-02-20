/* ***************************************************************************
 * QUICK SORT
 * - In-place (Memory requirements same as original data structure)
 * - O(n lg n) runtime in practice for average cases
 *
 * Programmed by Jon Zwaig Kolstad, February 2017
 *
 * Parameters:
 *    list - Array-list of unsigned integers.
 *    size - Number of elements in the list.                                                                            
 *****************************************************************************/

#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <stdio.h>
#include <stdint.h>

void quick_sort(uint16_t* list, uint16_t size);

#endif
