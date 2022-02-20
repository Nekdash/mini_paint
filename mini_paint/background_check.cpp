#include "Header.h"

bool background_check(int w, int h) {
	if (w <= 0 || w > 300 || h <= 0 || h > 300) {
		error("Error: invalid background parameters");
		return false;
	}
}