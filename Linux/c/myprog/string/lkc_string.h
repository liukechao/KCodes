#ifndef __H_LKC_STRING__
#define __H_LKC_STRING__

#include <stdio.h>
#include <stdlib.h>

size_t lkc_strlen(const char *s);
int lkc_strcmp(const char *s1, const char *s2);
char *lkc_strcpy(char *dest, const char *src);
char *lkc_strcat(char *dest, const char *src);
char *lkc_strchr(const char *s, int c);
char *lkc_strdup(const char *s);
char *lkc_strstr(const char *haystack, const char *needle);

#endif
