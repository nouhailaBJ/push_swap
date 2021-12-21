# push_swap
 <br>
The Push_swap project is a very simple and highly effective algorithm project: data will <br>
need to be sorted. You have at your disposal a set of int values, 2 stacks and a set of <br>
instructions to manipulate both stacks. <br>
The Push_swap project is a very simple and highly effective algorithm project: data will <br>
need to be sorted. You have at your disposal a set of int values, 2 stacks and a set of <br>
Write a program in C called push_swap which calculates and displays <br>
on the standard output the smallest program using Push_swap instruction language that <br>
sorts the integer arguments received. <br>
 <br>
The game is composed of 2 stacks named a and b. <br>
• To start with: <br>
◦ a contains a random number of either positive or negative numbers without <br>
any duplicates. <br>
◦ b is empty <br>
• The goal is to sort in ascending order numbers into stack a <br>
 <br>
To do this you have the following operations at your disposal: <br>
sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there <br>
is only one or no elements). <br> <br>
sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there <br>
is only one or no elements). <br> <br>
ss : sa and sb at the same time. <br> <br>
pa : push a - take the first element at the top of b and put it at the top of a. Do <br>
nothing if b is empty. <br> <br>
pb : push b - take the first element at the top of a and put it at the top of b. Do <br>
nothing if a is empty. <br> <br>
ra : rotate a - shift up all elements of stack a by 1. The first element becomes <br>
the last one. <br> <br>
rb : rotate b - shift up all elements of stack b by 1. The first element becomes <br>
the last one. <br> <br>
rr : ra and rb at the same time. <br> <br>
rra : reverse rotate a - shift down all elements of stack a by 1. The last element <br>
becomes the first one. <br> <br>
rrb : reverse rotate b - shift down all elements of stack b by 1. The last element <br>
becomes the first one. <br> <br>
rrr : rra and rrb at the same time. <br> <br>
