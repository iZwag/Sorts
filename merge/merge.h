/* ***************************************************************************
 * MERGE SORT
 * - Stable (does not change position of equal numbered elements)
 * - Not in-place (requires extra memory other than the original list)
 * - Recursive, divide-and-conquer
 *
 * Programmed by Jon Zwaig Kolstad, december 2016
 *
 * Parameters:
 *    list - Array-list of unsigned integers. Can take any values 0 - 0xFFFE
 *    size - Number of elements in the list.                                                                            
 *****************************************************************************/

#ifndef MERGE_H
#define MERGE_H

#include <stdio.h>
#include <stdint.h>

void merge_sort(uint16_t* list, uint16_t size);

#endif
