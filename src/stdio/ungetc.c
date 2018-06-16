#include "../internal/internal.h"

int ungetc(int c, FILE *fp)
{
	if (c == EOF)
		return c;
	fp->eof = 0;
	fp->ungotten[fp->ungot++] = c;
	return c;
}

