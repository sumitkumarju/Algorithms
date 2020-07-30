#include <stdio.h>
void f(char**);
int main()
{
    int array[5];
    array[0]=1;
    printf("%d",( (array == *array) && (*array == array[0]) ));
    printf("%d",array);
    return 0;
}
