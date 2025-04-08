/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <Function declations for statistical analysis of an array >
 *
 * <This header file contains declarations for statistical functions used to analyze an array of unsigned char values.>
 *
 * @author <Stefan Thich>
 * @date <April 8, 2025 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__ 

/**

 * @brief Prints the statistical analysis of the array.

 *

 * This function prints the minimum, maximum, mean, and median values

 * calculated from a given array of unsigned char values.

 *

 * @param data Pointer to the array of data.

 * @param size The number of elements in the array.

 */

void print_statistics(unsigned char* data, unsigned int size);



/**

 * @brief Prints all elements in the array.

 *

 * This function prints each value in the array to the console.

 *

 * @param data Pointer to the array of data.

 * @param size The number of elements in the array.

 */

void print_array(unsigned char* data, unsigned int size);



/**

 * @brief Finds the median value of the array.

 *

 * This function calculates the median from the provided data array.

 * The array may be sorted internally to find the median.

 *

 * @param data Pointer to the array of data.

 * @param size The number of elements in the array.

 * @return The median value as an unsigned char.

 */

unsigned char find_median(unsigned char* data, unsigned int size);



/**

 * @brief Calculates the mean (average) value of the array.

 *

 * This function adds all elements and divides by the number of elements,

 * rounding the result down to the nearest integer.

 *

 * @param data Pointer to the array of data.

 * @param size The number of elements in the array.

 * @return The mean value as an unsigned char.

 */

unsigned char find_mean(unsigned char* data, unsigned int size);



/**

 * @brief Finds the maximum value in the array.

 *

 * This function scans through the array and returns the highest value found.

 *

 * @param data Pointer to the array of data.

 * @param size The number of elements in the array.

 * @return The maximum value as an unsigned char.

 */

unsigned char find_maximum(unsigned char* data, unsigned int size);



/**

 * @brief Finds the minimum value in the array.

 *

 * This function scans through the array and returns the lowest value found.

 *

 * @param data Pointer to the array of data.

 * @param size The number of elements in the array.

 * @return The minimum value as an unsigned char.

 */

unsigned char find_minimum(unsigned char* data, unsigned int size);



/**

 * @brief Sorts the array from largest to smallest.

 *

 * This function sorts the data array in descending order.

 * The first element will be the largest, and the last the smallest.

 *

 * @param data Pointer to the array of data.

 * @param size The number of elements in the array.

 */

void sort_array(unsigned char* data, unsigned int size);



#endif /* __STATS_H__ */
