#include "vector.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	Iterator it;
	Vector v = coonew(Vector);
	v->push_back(v, malloc(sizeof(int)));
	v->push_back(v, malloc(sizeof(int)));
	v->push_back(v, malloc(sizeof(int)));
	v->push_back(v, malloc(sizeof(int)));
	for (it = v->begin(v); it->freelt(it, v->end(v)); it->next(it)) {
		printf("%p\n", it->get(it));
	}
	it->free(it);

	for (it = v->rbegin(v); it->freelt(it, v->rend(v)); it->next(it)) {
		printf("%p\n", it->get(it));
	}
	it->free(it);

	free(*(v->back(v)));
	v->pop_back(v);

	free(*(v->back(v)));
	v->pop_back(v);

	free(*(v->back(v)));
	v->pop_back(v);

	free(*(v->back(v)));
	v->pop_back(v);

	v->free(v);
	return 0;
}
