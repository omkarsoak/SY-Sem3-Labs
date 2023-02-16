edge(a,e).
edge(e,d).
edge(d,c).
edge(c,b).
edge(b,a).
edge(d,a).
edge(e,c).
edge(f,b).
path(X,X).

path(X,Y):- edge(X,Z) , path(Z,Y).   %recursion
%problem is: it will go in infinite loop as there is no break for circuit
%if path is a circuit, we will go in the loop round and round
%How to solve: have your rule collect a list of edges that 
%you've travelled and not choose them if you've been there already.

path(A,B) :-  walk(A,B,[]). 
% two nodes are connected, if we can walk from one to the other,
%first seeding the visited list with the empty list

walk(A,B,V) :- edge(A,X),not(member(X,V)),(B = X;walk(X,B,[A|V])).    %walk - recursion  
%we can travel from A to B if, 
    %A is connected to X and 
    %we have not yet visited X
    %and either X is the destination or we can walk from X to destination