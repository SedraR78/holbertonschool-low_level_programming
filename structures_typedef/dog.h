#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Définit les informations de base d'un chien.
 * @name: Nom du chien.
 * @age: Âge du chien.
 * @owner: Nom du propriétaire.
 * * Description: Structure pour stocker le nom, l'âge et le propriétaire d'un chien.
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG */