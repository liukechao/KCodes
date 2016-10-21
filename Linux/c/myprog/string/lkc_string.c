#include "lkc_string.h"
#include <stdio.h>
#include <stdlib.h>

size_t lkc_strlen(const char *s)
{
	size_t i = 0;

	while (s[i] != '\0')
		i++;

	return i;
}

int lkc_strcmp(const char *s1, const char *s2)
{
	int i;
	int len = lkc_strlen(s1) < lkc_strlen(s2)
			? lkc_strlen(s1) : lkc_strlen(s2);
	
	for (i = 0; i < len; i++)
		if (s1[i] != s2[i])
			return s1[i] - s2[i];
	
	return 0;
}

char *lkc_strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; i < lkc_strlen(src); i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return dest;
}

char *lkc_strcat(char *dest, const char *src)
{
	lkc_strcpy(dest + lkc_strlen(dest), src);
	
	return dest;
}

char *lkc_strchr(const char *s, int c)
{
	int i;
	
	for (i = 0; i < lkc_strlen(s); i++)
		if (s[i] == c)
			return (char *)(s + i);
	
	return NULL;
}

char *lkc_strdup(const char *s)
{
	char *dest = (char *)malloc(lkc_strlen(s));
	
	if(dest == NULL)
		return NULL;

	return lkc_strcpy(dest, s);
}

char *lkc_strstr(const char *haystack, const char *needle)
{
	int i;

	for (i = 0; i <= lkc_strlen(haystack) - lkc_strlen(needle); i++)
		if (!lkc_strcmp(haystack + i, needle))
			return (char *)(haystack + i);

	return NULL;
}
