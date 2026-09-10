/*
 * Prototypes for the base64 and uuencode routines used by myencode.
 * These functions are defined in base64.c and uu.c and are used by
 * more than one source module.
 */

#ifndef CODE_REVIEW_MAIN_H
#define CODE_REVIEW_MAIN_H

#include <stdio.h>

/* Base64 functions. */
char *Base64Encode(const void *, int);
char *Base64Decode(const char *);

/* Uuencode functions. */
void Encode(FILE *);

/* Uudecode functions. */
int Decode(char *, FILE *);

#endif  /* CODE_REVIEW_MAIN_H */
