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
 * @file <stats.c> 
 * @brief <Implementation of statistical analysis function for unsigned char arrays >
 *
 * <This file contains the function definitions for analyzing an array of unsigned char data>
 *
 * @author <Stefan Thich>
 * @date <April 8, 2025 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


void print_statistics(unsigned char* data, unsigned int size) {

    printf("Statistics:\n");

    printf("Minimum: %u\n", find_minimum(data, size));

    printf("Maximum: %u\n", find_maximum(data, size));

    printf("Mean:    %u\n", find_mean(data, size));

    printf("Median:  %u\n", find_median(data, size));

}



void print_array(unsigned char* data, unsigned int size) {
    sort_array(data, size);

    printf("Sorted_Array:\n");
    for (unsigned int i = 0; i < size; i++) {
        printf("%u ", data[i]);
    }
    printf("\n");

}




unsigned char find_median(unsigned char* data, unsigned int size) {

    sort_array(data, size);

    if (size % 2 == 0) {

        return (data[size / 2 - 1] + data[size / 2]) / 2;

    } else {

        return data[size / 2];

    }

}



unsigned char find_mean(unsigned char* data, unsigned int size) {

    unsigned int sum = 0;

    for (unsigned int i = 0; i < size; i++) {

        sum += data[i];

    }

    return (unsigned char)(sum / size);  // Rounded down

}



unsigned char find_maximum(unsigned char* data, unsigned int size) {

    unsigned char max = data[0];

    for (unsigned int i = 1; i < size; i++) {

        if (data[i] > max) {

            max = data[i];

        }

    }

    return max;

}



unsigned char find_minimum(unsigned char* data, unsigned int size) {

    unsigned char min = data[0];

    for (unsigned int i = 1; i < size; i++) {

        if (data[i] < min) {

            min = data[i];

        }

    }

    return min;

}



void sort_array(unsigned char* data, unsigned int size) {

    for (unsigned int i = 0; i < size - 1; i++) {

        for (unsigned int j = i + 1; j < size; j++) {

            if (data[j] > data[i]) {

                unsigned char temp = data[i];

                data[i] = data[j];

                data[j] = temp;

            }

        }

    }

}



int main() {

    unsigned char test[SIZE] = {

        34, 201, 190, 154, 8, 194, 2, 6,

        114, 88, 45, 76, 123, 87, 25, 23,

        200, 122, 150, 90, 92, 87, 177, 244,

        201, 6, 12, 60, 8, 2, 5, 67,

        7, 87, 250, 230, 99, 3, 100, 90

    };



    print_array(test, SIZE);

    print_statistics(test, SIZE);



    return 0;

}
