#include "pwf.h"

struct passwd *fgetpwent(FILE *f)
{
	static char *line;
	static struct passwd pw;
	size_t size=0;
	return __getpwent_a(f, &pw, &line, &size);
}
