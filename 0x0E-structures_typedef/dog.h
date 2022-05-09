#ifndef SRTUCT_DOG_H
#define STRUCT_DOG_H
/**
 * struct dog - new type describing a dog
 * @name : dog's name
 * @age  : dog's age
 * @owner: dog's owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
