#include "../internal/internal.h"

int __isalnum[256] = {
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	+000, +001, +002, +003, +004, +005, +006, +007,
	+010, +011, -001, -001, -001, -001, -001, -001,
	-001, +012, +013, +014, +015, +016, +017, +020,
	+021, +022, +023, +024, +025, +026, +027, +030,
	+031, +032, +033, +034, +035, +036, +037, +040,
	+041, +042, +043, -001, -001, -001, -001, -001,
	-001, +012, +013, +014, +015, +016, +017, +020,
	+021, +022, +023, +024, +025, +026, +027, +030,
	+031, +032, +033, +034, +035, +036, +037, +040,
	+041, +042, +043, -001, -001, -001, -001, -001,

	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001 };

int __isxdigit[256] = {
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	+000, +001, +002, +003, +004, +005, +006, +007,
	+010, +011, -001, -001, -001, -001, -001, -001,
	-001, +012, +013, +014, +015, +016, +017, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, +012, +013, +014, +015, +016, +017, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,

	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001,
	-001, -001, -001, -001, -001, -001, -001, -001 };
