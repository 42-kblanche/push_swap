*This project has been created as part of the 42 curriculum by kblanche.*

# push_swap

## Description

This project's goal is to sort numbers using two stacks and a limited set of instructions. The project is graded depending on the number of instructions needed to sort a certain amount of numbers (eg: 100, 500, etc.).

## Instructions

- `make` the project
- use `push_swap [list of numbers]`
	- If a duplicate is present, the program will return "Error".
	- If multiple numbers are in a single argument, only the first number in the argument will be taken into account (eg: `push_swap 4 "3 5" 6` will be treated as `push_swap 4 3 6`).
	- If numbers and other characters are in a single argument, only the first number in the argument will be taken into account (eg: `push_swap 4 a-43hj 6` will be treated as `push_swap 4 43 6`).
	- If an argument is invalid, it will be treated as a 0 (eg: `push_swap efsf 2 3 4` will be treated as `push_swap 0 2 3 4`).
	- If an argument is over the INT_MAX value, it will be treated as an int (eg: `push_swap 2147483649` will be treated as `push_swap -2147483647`).

## Ressources

[Original Butterfly sort](https://dynamicdispat.ch/posts/2024/01/push-swap/)

[Optimized Butterfly sort](https://medium.com/@brakebein42/k-distribution-sort-applied-to-the-push-swap-problem-ae2d96d68376) (heuristics talk included)

*No AI was use for this project*
