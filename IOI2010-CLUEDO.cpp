#include "cluedo.h"

void ResolverCaso() {
    int P[5] = {0,1,1,1};
    int resp = Teoria(P[1], P[2], P[3]);
    while(resp != 0){
      ++P[resp];
      resp = Teoria(P[1], P[2], P[3]);
    }
    return;
}
