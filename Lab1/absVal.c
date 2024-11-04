#include "absVal.h"


int absVal(int x) {
int y = x >>31;
return (y^x)+(y&1);
}
