#include "conditional.h"

int conditional(int x, int y, int z) {
return z ^ (((!x) + ~0) & (y ^ z));
}
