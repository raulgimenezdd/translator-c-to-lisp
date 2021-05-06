#include <stdio.h>
cuadrado(int v) {
    return (v * v);
}

factorial(int n)
{
    int f;
    if (n == 1)
    {
        f = 1;
    }
    else
    {
        f = n * factorial(n - 1);
    }
    return f;
}
es_par(int v)
{
    int ep;
    printf("%d", v);
    if (v % 2 == 0)
    {
        puts(" es par");
        ep = 1;
    }
    else
    {
        puts(" es impar");
        ep = 0;
    }
    return ep;
}
main()
{
    printf("%d\n", cuadrado(7));
    printf("%d\n", factorial(7));
    printf("%d\n", es_par(7));
    es_par(8);
}
/*
( defun cuadrado ( v )
( ( * v v )  )
)
( defun factorial ( n )
( setq f 0 ) 

( if ( = n 1 )  
( setq f 1 )  
( setq f ( * n ( factorial ( ( - n 1 )  ) ) )  )  
)
f
)
( defun es_par ( v )
( setq ep 0 ) 

( print v )
( if ( = ( % v 2 )  0 )  
( print " es par" )
( setq ep 1 )  
( print " es impar" )
( setq ep 0 )  
)
ep
)
( defun main ()
( print ( cuadrado ( 7 ) ) )
( print ( factorial ( 7 ) ) )
( print ( es_par ( 7 ) ) )
( es_par ( 8 ) ) 
)
*/

>

swap (int a,int b) {
return b ;
}
