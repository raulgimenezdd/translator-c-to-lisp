( defun fibonacci ( a b n )
( if ( < n 2 )  
( progn
( return-from fibonacci b )) 
)
( return-from fibonacci ( fibonacci b ( + a b )  ( - n 1 )  ) )
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