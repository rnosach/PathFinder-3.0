#include "libmx.h"

char *mx_strndup(const char *s1, size_t n){
	n = mx_each_min(n, mx_sstrlen(s1));
	char *rez = malloc(n + 1);
	if (rez){
		rez[n] = '\0';
		while (n-- > 0)
			rez[n] = s1[n];
		}
	return rez;
}
