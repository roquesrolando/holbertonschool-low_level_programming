#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free new dog
 * @scoobs: new dog
 */

void free_dog(dog_t *scoobs)
{
	if (scoobs == NULL)
		return;

	free((*scoobs).name);
	free((*scoobs).owner);
	free(scoobs);
}
