( defun factorial ( n )
( setq retorno 0 ) 

( if ( = n 1 )  
( progn
( setq retorno 1 ) ) 
( progn
( setq retorno ( * n ( factorial ( - n 1 )  ) )  )  )
)
( print n ) ( print retorno )
( return-from factorial retorno )
)
( defun main ()
( setq resultado 0 ) 

( setq resultado ( factorial 7 ) ) 
( print resultado ) 
)
(main)