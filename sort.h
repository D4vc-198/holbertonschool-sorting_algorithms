#ifndef SORT_H
#define SORT_H

/*
 * File: sort.h
 *
 * Desc: This header file contains all the function
 * prototpes and structure definations used in the
 * sorting algorithm
 */

#include <stdlib.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 *
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);

#endif
