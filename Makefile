exercise_1: 
	gcc exercise_1.c exercise_1_helpers.h -o exercise_1
	./exercise_1

# should not be accessible to students before solution is posted.
exercise_1_solution: 
	gcc exercise_1_sol.c exercise_1_helpers.h -o exercise_1_sol
	./exercise_1_sol

scratch: 
	gcc scratchpad.c
	./a.out