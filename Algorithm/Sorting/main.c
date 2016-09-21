#include "sorting.h"

#define TEST(sorting_func) do { \
					copy_list(list, backup); \
					sorting_func(list); \
					display_list(list); \
					if (check_list_sorted(list)) \
						printf("Succeeded.\n"); \
					else \
						printf("Failed.\a\n"); \
				} while (0)

int main()
{
	int list[LENGTH], backup[LENGTH];

	init_list(list);
	copy_list(backup, list);

	TEST(selection_sort);

	TEST(bubble_sort_sinking);
	TEST(bubble_sort_rising);
	TEST(bubble_sort_bidirectional);
	
	TEST(insertion_sort_linear);
	TEST(insertion_sort_binary);
	
	TEST(merge_sort_recursive);
	//TODO:TEST(merge_sort_non_recursive);
	
	TEST(quick_sort_recursive);
	//TODO:TEST(quick_sort_non_recursive);	

	TEST(heap_sort);

	TEST(shell_sort);

	//TODO:TEST(radix_sort);

	//TODO:TEST(hash_sort);

	TEST(test_sort);

	getchar();
	return EXIT_SUCCESS;
}
