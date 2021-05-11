( setq b 0 ) 
( defun main ()
( setq a 0 ) 

( setq a 10 ) 
( loop while ( > a 0 )  do 
( print a )
( if ( /= ( mod a 2 )  0 )  
( progn
( print " es impar " )) 
( progn
( print " es par " ) )
)
( setq a ( - a 1 )  )  ) 
)
(main)