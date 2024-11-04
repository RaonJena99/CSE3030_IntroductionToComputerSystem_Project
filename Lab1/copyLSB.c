#include "copyLSB.h"


int copyLSB(int x){
return ((x << 31) >> 31);
}
