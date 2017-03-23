#include <stdlib.h>
#include "function.h"

int compare(const void *a, const void *b)
{
	Grade *s, *t;
	s = (Grade*)a;
	t = (Grade*)b;
	if(s->total > t->total) return -1;
	else if(s->total < t->total) return 1;
	else{
		if(s->Chinese > t->Chinese) return -1;
		else if(s->Chinese < t->Chinese) return 1;\
		else{
			if(s->English > t->English) return -1;
			else if(s->English < t->English) return 1;\
			else{
				if(s->math > t->math) return -1;
				else if(s->math < t->math) return 1;\
				else{
					if(s->science > t->science) return -1;
					else if(s->science < t->science) return 1;\
					else return 0;
				}
			}
		}
	}
}
