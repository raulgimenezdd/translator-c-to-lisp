( defun fibonacci ( a b n )
( setq retorno 0 ) 

( if ( < n 2 )  
( progn
( setq retorno b ) ) 
( progn
( setq retorno ( fibonacci b ( + a b )  ( - n 1 )  ) )  )
)
( return-from fibonacci retorno )
)
( defun main ()
( setq resultado 0 ) 

( setq i 0 ) 

( print "Sucesion de Fibonacci" )
 ( setq i 0 )  
 ( loop while ( < i 47 )  do 
( setq resultado ( fibonacci 0 1 i ) ) 
( print i ) ( print resultado ) 
( setq i ( + i 1 )  ) ) 
)
(main)