( defun mifuncion (  )
( setq c 0 ) 

( setq c 123 ) 
( print "Prueba" )
( return-from mifuncion ( + c 1 )  )
)
( defun main ()
( setq c 0 ) 

( setq c ( mifuncion  ) ) 
( print c ) ( print ( mifuncion  ) ) 
)
(main)