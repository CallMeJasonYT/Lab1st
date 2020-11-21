#include <stdio.h>

int main()
{
    int x, y, z, w, a, b, num, res[5];
    num=0;
    x=3;
    y=3;
    z=1;
    w=15;
    a=14;
    b=3;
    res[0] = x+y+z/x;
    res[1] = z+w*x/y/z;
    res[2] = w/x*++z+x/y;
    res[3] = ++b, --a; //The Comma (,) does mean that it counts the two values
    res[4] = (--b, ++a); //And it returns the Second one
    res[5] = (a>b) ?b:a;
    while (num<6){
        printf("%d\n" , res[num]);
        num= num+1;
    }
    return 0;
}
