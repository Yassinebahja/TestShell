#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	compare_scores(const void *score_a, const void *score_b)
{
	int a = *(int*) score_a;
	int b = *(int*) score_b;
	return (a - b);
}

int	compare_scores_desc(const void* score_a, const void *score_b)
{
	int a = *(int*) score_a;
	int b = *(int *) score_b;
	return (b - a);
}

typedef struct rectangle {
	int width;
	int height;
}	rectangle;

int compare_areas(const void* a, const void* b)
{
	struct rectangle *rec1 = (struct rectangle*) a;
	struct rectangle *rec2 = (struct rectangle*) b;

	int area1 = (rec1->width) * (rec1->height);
	int area2 = (rec2->width) * (rec2->height);

	return (area1 - area2);
}
int	compare_names(const void *a, const void *b)

{
	char **str1 = (char **) a;
	char **str2 = (char **) b;
	return strcmp(*str1,*str2);
}

int main()
{
	struct rectangle *a = malloc(sizeof(rectangle));
	struct rectangle *b = malloc(sizeof(rectangle));
	a->width = 9;
	a->height = 6;
	b->width = 2;
	b->height = 3;
	//printf("the result is %d", compare_areas(a,b));
	free(a);
	free(b);
//	int n = 9;
//	int m= 10;
//	int q = compare_scores(&n,&m);
	//printf("%d", q);
	char **str1;
	char **str2;
	str1 = malloc(4*sizeof(char *));
	str2 = malloc(4*sizeof(char*));
	str1[0] = "a";
	str1[1]="f";
	str1[2] = "o";
	str2[0] = "m";
	str2[1]="n";
	str2[2] = "w";

	printf("the res is:%d\n",compare_names(str1,str2));

}
/*Remember that to initialize a struct in the code, for e.g in the main testing  WE NEED TO USE MALLOC to a pointer to a struct and then assign the values after like we did this:
 * rectangle *a = malloc(sizeof(rectangle));
 * rectangle *b = malloc(sizeof(rectangle));
 * a->width;
 * .... otherwise we have the segmentation fault (core dumped)  ./a.out error!!
 * __________ALSO__________
 *in the function that use the void* as arguments, remeber to re assign this arguments according to the type of the value you are using in ur function, for e.g, if we are using the int type we type:
 int a = *(int*)arg;
 if we are using structure type like this:
	 rectangle *a = (rectangle*) a;
	 We are dealing in this case with a pointer to structure to update the result in our function!!

 *________ALSO_________
 Remember that we are using pointer to a variable, means if we are dealing with int we will declare pointer to int, and for char too we will use pointer to char char *, and also for strings, we will use pointer to string, means char **;
We need to respect the type o the args, and use malloc to assign value to our var, to avoid segmentation fault in our program!
 * */
