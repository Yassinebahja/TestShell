#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

//We get this error bcz we use point-x instead of point.x:
//main.c:14:39: error: member reference type 't_point' is not a pointer; did you mean to use '.'?
       // prinf("bla %d bla %d", point->x,point->y);
      
//SOL: Remember that in this case we are dealing with struct not a pointer to struct, we would use t_point *point if we wanted to use point_x. 
//Remember we must consider a pointer to a struct in the arg of the function, so the values will be updated, bcz in the other case it will just copy.and don't forget to call the adress of the point &point


int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("bla %d bla %d", point.x,point.y);
	return (0);
}