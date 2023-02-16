(defun factorial (n)
  (if (<= n 1)              
    1                           
    (* n (factorial (- n 1)))
  )
) 

(print "Please enter a number...")  
(setq x  (read))
(print "~D! is ~D" x (factorial x))