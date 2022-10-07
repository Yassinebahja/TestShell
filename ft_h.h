#ifndef FT_H_H
#define FT_H_H

typedef struct island {
	char *name;
	char *opens;
	char *closes;
	struct island *next;
} island;

#endif
