#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ang1,ang2,ang3;
    printf("enter all the angles\n");
    scanf("%f%f%f",&ang1,&ang2,&ang3);
    if((ang1+ang2+ang3)==180)
    printf("yes ur angles can form a triangle\n");
    else
    puts("you suck");
    return 0;
}
