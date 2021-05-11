( setq potencias ( make-array 100 ) ) 
( setq m 0 ) 
( defun main ()
( setq i 0 ) 

( setq m 30 ) 
( setq i 1 ) 
( setf ( aref potencias 0 ) 1 ) 
( loop while ( <= i m )  do 
( setf ( aref potencias i ) ( * ( aref potencias ( - i 1 )  ) 2 )  ) 
( setq i ( + i 1 )  )  )
( setq i 1 ) 
( loop while ( <= i m )  do 
( print i ) ( print ( aref potencias i ) )
( setq i ( + i 1 )  )  ) 
)
(main)