( setq primos ( make-array 100 ) ) 
( setq m 0 ) 
( defun main ()
( setq v 0 ) 

( setq i 0 ) 

( setq m 100 ) 
( setq i 1 ) 
( loop while ( < i m )  do 
( setf ( aref primos i ) 1 ) 
( setq i ( + i 1 )  )  )
( setq i 2 ) 
( loop while ( < i m )  do 
( setq v ( * i 2 )  ) 
( loop while ( < v m )  do 
( setf ( aref primos v ) 0 ) 
( setq v ( + v i )  )  )
( setq i ( + i 1 )  )  )
( setq i 1 ) 
( loop while ( < i m )  do 
( if ( = ( aref primos i ) 1 )  
( progn
( print i )) 
)
( setq i ( + i 1 )  )  ) 
)
(main)