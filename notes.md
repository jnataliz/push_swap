# 2022-03-05
- operazioni da implementare
- `sa` (`swap a`): Swap the first 2 elements at the top of stack a.
  Do nothing if there is only one or no elements.
- sb (swap b): Swap the first 2 elements at the top of stack b.
  Do nothing if there is only one or no elements.
- ss : sa and sb at the same time.
- pa (push a): Take the first element at the top of b and put it at the top of a.
  Do nothing if b is empty.
- pb (push b): Take the first element at the top of a and put it at the top of b.
  Do nothing if a is empty.
- ra (rotate a): Shift up all elements of stack a by 1.
  The first element becomes the last one.
- rb (rotate b): Shift up all elements of stack b by 1.
  The first element becomes the last one.
- rr : ra and rb at the same time.
- rra (reverse rotate a): Shift down all elements of stack a by 1.
  The last element becomes the first one.
- rrb (reverse rotate b): Shift down all elements of stack b by 1.
  The last element becomes the first one.
- rrr : rra and rrb at the same time.

- implementare un interprete
```c
int nums[] = {2, 3, 5, 6, 8, 0}
t_stack s;

s = new_stack(nums);
print_stack(s);
/**
 * 2
 * 3
 * 5
 * 6
 * 8
 * 0
 * " "
 * a b
**/
push_b(s);
print_stack(s);
/**
 * 3
 * 5
 * 6
 * 8
 * 0 2
 * " "
 * a b
**/
```
1) implementare ogni operazione per visualizzare come cambia lo stack
2) mettersi a mano a cercare di capire come dato un array di interi ordinarlo
  usando quelle operazioni
3) implementare un programma che si basa sulla nostra strategia manuale
4) cercare di trovare la serie di operazioni minima
- `stack_pair.h`
  - struttura `t_stack_pair`
  - prototipi funzioni `print_stack_pair`, `push_a`, `push_b`
- directory struttura
```
-- include/
  |-- stack.h
-- ft_printf/
  |---- libft/
--- src/
  |--- main.c
  |--- swap_a.c
-- Makefile
```
# 2022-03-06
- iniziamo dal `Makefile`
- creiamo un file `main.c`
  - in cui mettiamo  `int main(void) { ... }`
    - dentro stampiamo `"Hello World\n"`
  - per vedere se compila
  - implementare stack
```c
struct t_stack {
  ...
};
t_stack *new_stack(int *nums, unsigned int len);
void  *print_stack(t_stack *s);
int head(t_stack *s); // restituisce la testa dello stack
int pop(t_stack *s);
void push(t_stack *s, int n);
2
3
4
5
"
----------
pop -> restituisce 2 e modifica lo stack rimuovendo la testa dello stack
3
4
5
"
----------
push 7 -> modifica lo stack aggiungedo 7 come testa dello stack
7
3
4
5
"
----------
```
# 2022-03-10
- implementare `stack`
- implementiamo `new_stack`
	- allochiamo memoria con `malloc` per l'array di interi e per la struttura
		`t_stack`

# 2022-03-12

- tabella ascii https://www.asciitable.com/
