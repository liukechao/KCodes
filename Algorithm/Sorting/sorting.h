#ifndef _SORTING_H_
#define _SORTING_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LENGTH 10

#if LENGTH <= 50
#define LDEBUG
#else
#undef LDEBUG
#endif

void init_list(int *);
void copy_list(int *, const int *);
void display_list(const int *);

int check_list_sorted(const int *);

void selection_sort(int *);

void bubble_sort_sinking(int *);
void bubble_sort_rising(int *);
void bubble_sort_bidirectional(int *);

void insertion_sort_linear(int *);
void insertion_sort_binary(int *);

void merge_sort_recursive(int *);
void merge_sort_non_recursive(int *);

void quick_sort_recursive(int *);
void quick_sort_non_recursive(int *);

void heap_sort(int *);

void shell_sort(int *);

void radix_sort(int *);

void hash_sort(int *);

void test_sort(int *);

#endif
