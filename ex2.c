#include <stdio.h>
 
int *f(void)
{
    static int i = 0;
    printf("i = %d\n", i);
    return &i;
}
 
int main(void)
{
    int *p = f();
    *p += 1;
    f();
    *p += 1;
    f();
    return 0;
}
/* 
$ a.exe
i = 0
i = 1
i = 2
 
 * */
