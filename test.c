#include "ft_h.h"
#include <stdio.h>
void	display(struct island *t)
{
	struct island *i = t;
	while(i != NULL)
	{
		printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
		i = i->next;
	}
}

int main()
{
	island First = {"first", "1", "2", NULL};
	island Second = {"2nd", "3", "4", NULL};
	island Third = {"3rd", "5", "6", NULL};
	island foorth = {"4th", "7", "8", NULL};
	island nowhere = {"0", "0", "0", NULL};

	First.next = &Second;
	Second.next = &Third;
	Third.next = &foorth;
	Third.next = &nowhere;
	display(&First);

}
