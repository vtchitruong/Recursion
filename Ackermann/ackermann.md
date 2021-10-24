Write a recursive function to calculate the Ackermann.  
  
Ackerman function A(m, n) =  
= n + 1 if m = 0  
= A(m - 1, 1) if m > 0, n = 0  
= A(m - 1, A(m, n - 1)) if m > 0, n > 0  
  
Also, return the number of times the function is called.  

### Input
m = 3  
n = 6  

### Output
509 with 172233 recursive calls.  