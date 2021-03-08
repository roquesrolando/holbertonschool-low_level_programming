#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free new dog
 * @d: new dog
 */
void free_dog(dog_t *d)
{
	if (scoobs == NULL)
		return;
	free((*scoobs).name);
	free((*scoobs).owner);
	free(scoobs);
}
