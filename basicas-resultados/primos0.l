( setq primo 0 ) 
( setq n 0 ) 
( setq m 0 ) 
( defun main ()
( setq d 0 ) 

( setq i 0 ) 

( setq p 0 ) 

( setq i 1 ) 
( setq n 1 ) 
( setq m 100 ) 
( setq i 2 ) 
( loop while ( < i m )  do 
( setq primo 1 ) 
( setq d 2 ) 
( loop while ( < d i )  do 
( if ( = ( mod i d )  0 )  
( progn
( setq primo 0 ) ) 
)
( setq d ( + d 1 )  )  )
( if ( /= primo 0 )  
( progn
( print i )) 
)
( setq i ( + i 1 )  )  ) 
)
(main)