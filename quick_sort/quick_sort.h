/******************************************************************************
 * QUICK SORT
 * - In-place (Memory requirements same as original data structure)
 * - O(n lg n) runtime in practice for average cases
 * - Uses a random partitioning when finding pivot
 *
 * ****************************************************************************
 * Programmed by Jon Zwaig Kolstad, March 2017
 * 
 * Motivated by pseudo code from the book -
 * "Introduction to algorithms", 2nd ed., by Thomas H. Cormen
 * 
 * ****************************************************************************
 * MIT License - Copyright (c) 2017 Jon Zwaig Kolstad
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to 
 * deal in the Software without restriction, including without limitation the 
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in 
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 * 
 * ****************************************************************************
 * Parameters:
 *    list - Array-list of unsigned integers.
 *    size - Number of elements in the list.                                                                            
 *****************************************************************************/

#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <stdint.h>

void quick_sort(uint16_t* list, uint16_t size);

#endif
