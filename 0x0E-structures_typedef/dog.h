#ifndef MAIN_H
#define MAIN_H
/*
 * File: dog.h
 * Author:
 * Desc: Header that defines struct dog
 */

/**
 * struct dog - struct contains info for a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */


struct dog
{
	char *name;
	char *owner;
	float age;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
