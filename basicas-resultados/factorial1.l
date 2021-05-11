( defun main ()
( setq resultado 0 ) 

( setq n 0 ) 

( setq n 7 ) 
( setq resultado 1 ) 
( loop while ( > n 1 )  do 
( setq resultado ( * resultado n )  ) 
( setq n ( - n 1 )  )  )
( print resultado ) 
)
(main)