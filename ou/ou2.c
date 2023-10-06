//Name: Samuel Oskarsson
//CS-id: id23son
//Task: ou2
//Date: 6th October 2023
//Version: 4.0
//Description;
//	A program to calculate the max, min and avg score from an amount of judges
//	The scores and how many judges there are is for the user to decide
#include <stdio.h>

//prints start information
void printInfo(void) { 
	printf("Program information\n"
	"The program reads in the number of judges and the score from each judge.\n"
	"Then it calculates the average score without regard to the lowest and\n"
	"highest judge score. Finally it prints the results (the highest, the\n"
	"lowest and the final average score).\n\n");
}

//gets a number of judges from the user input and returns it
//DATA IN: the number of judges given by the user
//DATA OUT: the number of judges within the given span
int getJudges(void) { 
	int nJudge;
	do {
		printf("Number of judges (min 3 and max 10 judges)? ");
		scanf("%d", &nJudge);
	} while (!(nJudge >= 3 && nJudge <= 10));
	printf("\n");
	return nJudge;
}

//gets the scores from the user related to each of the judges
//DATA IN: the number of judges and the array of scores
//DATA OUT: prints the judges and asks for user input on their score
void readScores(int judges, double scores[]) { 
	for (int i = 0; i < judges; i++) {
		printf("Score from judge %d? ", i + 1);
		scanf("%lf", &scores[i]);
	}
}
//prints the scores that the user gave as input
//DATA IN: the number of judges and the array of scores
//DATA OUT: the score and which judge gave the score
void printScores(int judges, double scores[]) {
	printf("\nLoaded scores:\n");
	for (int i = 0; i < judges; i++)
	{
		printf("Judge %d: %.1lf\n", i + 1, scores[i]);
	}
	
}
//gets the min and max value of the scores and prints them
//DATA IN: how many judges and the array of scores they gave
//DATA OUT: the highest and lowest score given by the judges
void getScoresExtreme(int n, double scores[]) {
	int i;
	double sum = 0;
	double avg = 0;
	double minMaxSum = 0;
	double minScore = scores[0];
	double maxScore = scores[0];
	
	for ( i = 0; i < n; i++)
	{
		if (scores[i] < minScore)
		{
			minScore = scores[i];
		}

		if (scores[i] > maxScore)
		{
			maxScore = scores[i];
		}
		
		
	}
	printf("\nFinal result:\n");
	printf("Highest judge score: %.1lf\n", maxScore);
	printf("Lowest judge score: %.1lf\n", minScore);

	
	for (int i = 0; i < n; i++)
	{
		sum = sum + scores[i];
	}
	minMaxSum = maxScore + minScore;
	sum = sum - minMaxSum;
	avg = sum / (n-2);
	printf("Final average score: %.1lf\n", avg);
	
}
//calculates the average value from the array of scores
//DATA IN: how many judges and the array of scores they gave
//DATA OUT: the average score given by the judges
void getAverage(int n, double scores[]) {
	double sum = 0;
	double avg = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + scores[i];
	}
	avg = sum / n;
	printf("Final average score: %.1lf\n", avg);
	
}
//the main function where the functions are run
int main(void) {
	int judges;
	
	printInfo();

	judges = getJudges();
	double scores[judges];
	readScores(judges, scores);
	printScores(judges, scores);
	getScoresExtreme(judges, scores);
	// getAverage(judges, scores);
	return 0;
}