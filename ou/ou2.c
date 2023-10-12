//Name: Samuel Oskarsson
//CS-id: id23son
//Task: ou2
//Date: 10th October 2023
//Version: 7.0
//Description;
//	A program to calculate the max, min and avg score from an amount of judges
//	The scores and how many judges there are is for the user to decide
#include <stdio.h>

//prints program information
void print_start_info(void)
{ 
	printf("Program information\n"
	"The program reads in the number of judges and the score from each judge.\n"
	"Then it calculates the average score without regard to the lowest and\n"
	"highest judge score. Finally it prints the results (the highest, the\n"
	"lowest and the final average score).\n\n");
}

//gets the amount of judges from the user input
//DATA OUT: the number of judges
int get_judges(void)
{ 
	int judges;
	do {
		printf("Number of judges (min 3 and max 10 judges)? ");
		scanf("%d", &judges);
	} while (!(judges >= 3 && judges <= 10)); //while within the given span
	printf("\n");
	return judges;
}

//prints the score from each judge
//DATA IN: the number of judges and the array of scores
void read_scores(int judges, double scores[])
{ 
	for (int i = 0; i < judges; i++) {
		printf("Score from judge %d? ", i + 1);
		scanf("%lf", &scores[i]);
	}
}

//prints the scores that the user gave as input
//DATA IN: the number of judges and the array of scores
void print_loaded_scores(int judges, double scores[])
{
	printf("\nLoaded scores:\n");
	for (int i = 0; i < judges; i++) {
		printf("Judge %d: %.1lf\n", i + 1, scores[i]);
	}
}

//calculates the min, max and avg scores from the judges
//DATA IN: number of judges, the array of scores, the min, max, and avg scores
void calc_scores(int judges, double scores[], double *min_score, double *max_score, double *avg)
{
	int i;
	double sum = 0;
	double min_max_sum = 0; //the sum of both extreme values
	*min_score = scores[0];
	*max_score = scores[0];
	
	for ( i = 0; i < judges; i++) {
		if (scores[i] < *min_score) {
			*min_score = scores[i];
		}

		if (scores[i] > *max_score) {
			*max_score = scores[i];
		}
		sum = sum + scores[i];
	}

	min_max_sum = *max_score + *min_score;
	sum = sum - min_max_sum;
	*avg = sum / (judges-2);
}

//prints the max, min and avg scores
//DATA IN: the min, max and avg scores
void print_scores(double min_score, double max_score, double avg)
{
	printf("\nFinal result:\n");
	printf("Highest judge score: %.1lf\n", max_score);
	printf("Lowest judge score: %.1lf\n", min_score);
	printf("Final average score: %.1lf\n", avg);
}

int main(void)
{
	int judges;
	double min = 0;
	double max = 0;
	double avg = 0;
	
	print_start_info();

	judges = get_judges();

	double scores[judges];

	read_scores(judges, scores);

	print_loaded_scores(judges, scores);

	calc_scores(judges, scores, &min, &max, &avg);

	print_scores(min, max, avg);

	return 0;
}