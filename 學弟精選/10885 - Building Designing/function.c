#include "function.h"

int compare(const void *a, const void *b)
{
    Floor *s, *t;
    s=(Floor*)a;
    t=(Floor*)b;
    if(s->size > t->size) return 1;
    else if(s->size < t->size) return -1;
    else return 0;
}
