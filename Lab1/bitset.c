#include "bitset.h"
#include <stdio.h>
void addNumber(unsigned char* set, int x) {
 set[x / 8] |= 1 << (7 - (x % 8));
}

