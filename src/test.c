/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 80

int main(void) {
	char *buf;
	int i, n='A';

	buf=malloc(MAX_LENGTH);
	if(!buf)
		return EXIT_FAILURE;

	for(i=0;i<MAX_LENGTH; i++) {
		buf[i]=(char)n;
		(n=='Z')?n='A':n++;
	}
	buf[MAX_LENGTH-1] = '\0';

	(void)puts(buf); /* prints Hello World */

	free(buf);
	return EXIT_SUCCESS;
}
