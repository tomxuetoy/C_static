#include <stdio.h>
 
int cal()
{
    int n;
    static val;
 
    for(n=0;n<3;n++, val++)
        printf("val=%d\n", val);
    printf("---------------------------------\n");
}
 
main()
{
    int i;
    for(i=0;i<5;i++)
        cal();
}
/* 
$ a.exe
val=0
val=1
val=2
---------------------------------
val=3
val=4
val=5
---------------------------------
val=6
val=7
val=8
---------------------------------
val=9
val=10
val=11
---------------------------------
val=12
val=13
val=14
---------------------------------
 
 * */
