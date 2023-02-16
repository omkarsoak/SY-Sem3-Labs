(cons lst '(10 20 30 40))
(defun listn(n lst)
       (let((count 1))
           (loop
               (cond((equal count n)(return (car lst))))
               (setq count (+ count 1))
               (setq lst (cdr lst)))))