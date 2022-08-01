#ifndef DOG
#define DOG

struct dog
{
	char *name;
	float age;
	char *owner;
}dog;

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
