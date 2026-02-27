#ifndef ORAFCE_PLVLEX_H
#define ORAFCE_PLVLEX_H

typedef struct
{
	int		typenode;
	char   *str;
	int		keycode;
	int		lloc;
	char   *sep;
	char   *modificator;
	char   *classname;
} orafce_lexnode;

#endif /* ORAFCE_PLVLEX_H */
