/*
 * Programmeringsteknik med C och Matlab
 * Fall 22
 * Assignment 3
 * File: ou3.c
 * Description: A simple implementation of Conway's Game of Life. Lets the user
 * choose initial configuration. Then let them step or exit.
 * Prints the game field in each step.
 * Author: Samuel Oskarsson
 * CS username: id23son
 * Date:
 * Version: 1.0
 * Limitations: No validation of input.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
/* Constants, representation of states */
#define ALIVE 'X'
#define DEAD '.'
#define BUFLEN 1024
/* Declaration of data structure */
typedef struct
{
	char current;
	char next;
} cell;

char is_alive()
{
	int rand();
	int value = rand();

	if ((value % 2) == 0)
	{
		return ALIVE;
	}
	else
	{
		return DEAD;
	}
}

int adjacent(const int rows, const int cols, cell world[rows][cols])
{
	// in: kordinater från cell
	// mål: räkna antalet levande grannar
	// ut: avgör om om cellen ska leva
	int i = 19;
	int a = 0;
	int sum = 0;

	for (int r = 0; r < rows; r++)
	{
		for (int c = 0; c < cols; c++)
		{
			world[r][c].current = DEAD;
		}
	}

	for(int x = 0; x < i; x++)
	{
		if (world[a - 1][i].current == ALIVE)
		{
			sum++;
		}
		if (world[a][i - 1].current == ALIVE)
		{
			sum++;
		}
		if (world[a - 1][i - 1].current == ALIVE)
		{
			sum++;
		}
		if (world[a - 1][i + 1].current == ALIVE)
		{
			sum++;
		}
		if (world[a + 1][i - 1].current == ALIVE)
		{
			sum++;
		}
		if (world[a + 1][i].current == ALIVE)
		{
			sum++;
		}
		if (world[a][i + 1].current == ALIVE)
		{
			sum++;
		}
		if (world[a + 1][i + 1].current == ALIVE)
		{
			sum++;
		}
		
	}
	return sum;
	
}
/* Function: get_start_state
 * Description: Lets the user choose starting state
 * Input: None.
 * Output: The users choice. Should be one of the letters G, S,R or C.
 */
char get_start_state(void)
{
	int ch = 0;
	printf("Select world spec to load ([G]lider, [S]emaphore, [R]andom ");
	printf("or [C]ustom): ");
	ch = getchar();
	/* Eat any trailing newline */
	if (ch != '\n')
	{
		getchar();
	}
	return ch;
}
/* Function: clear_world
 * Description: Initialize all the cells in the world to dead
 * Input: rows - the number of rows in the world
 * cols - the number of columns in the world
 * world - the array representing the world
 * Output: The world array is updated.
 */
void clear_world(const int rows, const int cols, cell world[rows][cols])
{
	for (int r = 0; r < rows; r++)
	{
		for (int c = 0; c < cols; c++)
		{
			world[r][c].current = DEAD;
		}
	}
}
/* Function: load_glider
 * Description: Inserts a glider into the world.
 * Input: rows - the number of rows in the world
 * cols - the number of columns in the world
 * world - the array representing the world
 * Output: The world array is updated.
 */
void load_glider(const int rows, const int cols, cell world[rows][cols])
{
	world[0][1].current = ALIVE;
	world[1][2].current = ALIVE;
	world[2][0].current = ALIVE;
	world[2][1].current = ALIVE;
	world[2][2].current = ALIVE;
}
/* Function: load_semaphore
 * Description: Inserts a semaphore into the world.
 * Input: rows - the number of rows in the world
 * cols - the number of columns in the world
 * world - the array representing the world
 * Output: The world array is updated.
 */
void load_semaphore(const int rows, const int cols, cell world[rows][cols])
{
	world[8][1].current = ALIVE;
	world[8][2].current = ALIVE;
	world[8][3].current = ALIVE;
}
/* Function: load_random_state
 * Description: Inserts a random structure into the world.
 * Input: rows - the number of rows in the world
 * cols - the number of columns in the world
 * world - the array representing the world
 * Output: The world array is updated. There is a 50 % chance that a cell
 * is alive.
 */
void load_random_state(const int rows, const int cols, cell world[rows][cols])
{
	for (int r = 0; r < rows; r++)
	{
		for (int c = 0; c < cols; c++)
		{
			world[r][c].current = is_alive();
		}
	}
}
/* Function: load_custom_state
 * Description: Lets the user specify a structure that then is inserted into
 * the world.
 * Input: rows - the number of rows in the world
 * cols - the number of columns in the world
 * world - the array representing the world
 * Output: The world array is updated.
 */
void load_custom_state(const int rows, const int cols, cell world[rows][cols])
{
	char buf[BUFLEN];
	char *sc;
	int r, c;
	printf("Give custom format string (r1,c1; r2,c2; ...): ");
	// Read input into buffer
	fgets(buf, BUFLEN, stdin);
	// First pair to parse
	sc = buf;
	do
	{
		// Parse row, column pair
		if (sscanf(sc, "%d,%d;", &r, &c) == 2)
		{
			world[r][c].current = ALIVE;
		}
		// Advance semicolon pointer to next semi-colon
		sc = strchr(sc, ';');
		if (sc)
		{
			// If we found a semi-colon, advance past it
			sc++;
		}
	} while (sc != NULL);
}
/* Function: init_world
 * Description: Loads a structure that the user selects
 * Input: rows - the number of rows in the world
 * cols - the number of columns in the world
 * world - the array representing the world
 * Output: The world array is updated.
 */
void init_world(const int rows, const int cols, cell world[rows][cols])
{
	char choice;
	clear_world(rows, cols, world);
	choice = get_start_state();
	switch (choice)
	{
	case 'g':
	case 'G':
		load_glider(rows, cols, world);
		break;
	case 's':
	case 'S':
		load_semaphore(rows, cols, world);
		break;
	case 'r':
	case 'R':
		load_random_state(rows, cols, world);
		break;
	case 'c':
	case 'C':
	default:
		load_custom_state(rows, cols, world);
		break;
	}
}
/* Function: main
 * Description: Start and run simulations, interact with the user.
 * Lets the user choose initial structure and whether to step
 * or exit. Writes information to the user, and the game world
 * in each step.
 * Input: None
 * Output: Zero for normal exit, non-zero for error.
 */
int main(void)
{
	srand(time(NULL));
	const int rows = 20;
	const int columns = 20;
	cell w[rows][columns];
	init_world(rows, columns, w);
	int ad = adjacent(rows, columns, w);
	printf("%d \n", ad);

	for (int i = 0; i < rows; i++)
	{
		for (int a = 0; a < columns; a++)
		{
			printf("%c ", w[i][a].current);
		}
		printf("\n");
	}

	return 0;
}