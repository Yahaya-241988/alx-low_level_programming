#ifndef DOG_HEADER_FILE
#define DOG_HEADER_FILE

/**
 * struct dog - Dog Information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: The owner of the dog
 *
 * Description: This struct has no description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef to define struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif


