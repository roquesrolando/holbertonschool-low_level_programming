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
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
