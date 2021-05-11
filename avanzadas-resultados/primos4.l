( setq d 0 ) 
( setq n 0 ) 
( setq m 0 ) 
( defun esprimo ( n )
( setq primo 0 ) 

( setq d 0 ) 

( setq primo 1 ) 
( setq d 2 ) 
( loop while ( And ( < d n )  ( = primo 1 )  )  do 
( if ( = ( mod n d )  0 )  
( progn
( setq primo 0 ) ) 
)
( setq d ( + d 1 )  )  )
( return-from esprimo primo )
)
( defun listaprimos ( n m )
( loop while ( < n m )  do 
( if ( /= ( esprimo n ) 0 )  
( progn
( print n )) 
)
( setq n ( + n 1 )  )  )
)
( defun main ()
( setq d 0 ) 

( setq i 0 ) 

( listaprimos 1 100 ) 
)
(main)