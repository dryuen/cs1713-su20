#include <stdio.h>

void doSomething();

int main( int argc, char* argv[] )
{
    doSomething(); 
    doSomething(); 
    doSomething(); 
    return 0;
}

void doSomething()
{
    static int x = 0;
    x++;
    printf( "%d\n", x ); 
}
