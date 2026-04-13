*This project has been created as part of the 42 curriculum by kblanche.*

# push_swap

## Description

This project's goal is to sort numbers using two stacks and a limited set of instructions. The project is graded depending on the number of instructions needed to sort a certain amount of numbers (eg: 100, 500, etc.).

## Instructions

- `make` the project
- use `push_swap [list of numbers]`
	- If a duplicate is present, the program will return "Error".
	- If an argument is invalid, the program will return "Error".
		- An argument that includes non-digit characters will be considered invalid, except for a single `-` sign character (eg: `-42` is valid but `+--42` or `   42  ` or `ab42` are invalid).
		- If multiple numbers are in a single argument, it will be considered invalid (eg: `4 "3 5" 6` is invalid).
		- If an argument is over the INT_MAX value or under the INT_MIN value, it will be considered invalid.

## Ressources

[Original Butterfly sort](https://dynamicdispat.ch/posts/2024/01/push-swap/)

[Optimized Butterfly sort](https://medium.com/@brakebein42/k-distribution-sort-applied-to-the-push-swap-problem-ae2d96d68376) (heuristics talk included)

After talking with my peers, I decided to focus on radix sorting.

[Radix sort on Wikipedia](https://en.wikipedia.org/wiki/Radix_sort)

[Arommers' explanation of the algorithm](https://github.com/arommers/push_swap/tree/master)

*No AI was use for this project*
