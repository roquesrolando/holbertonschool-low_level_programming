#ifndef HEADER
#define HEADER
/**
  * struct dog - Dog of the attributes
  * @name: The name
  * @age: The age
  * @owner: The owner
  *
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
