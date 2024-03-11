// Write a program that calculates the summation of scores and an average for each student. 

// Firstly, your program asks for the number of students(N) and the number of scores(M).
// - And then your program will take the student's name followed by M scores,

// - and calculate the summation of scores and average.

// - Print student name, summation and average in a line
// - Repeat N times for N students

#include <iostream>
	using namespace std;

int main()
{
	int N; // the number of students;
	int M; // the number of scores;
	int score, sum, average;
	sum = 0;
	average = 0;

	cout << "Enter the number of students: " ;
	cin >> N;
	cout << "Enter the number of scores for each student: " ;
	cin >> M;
	
	for(int i=0; i<N; i++)
	{
		string name;
		cout << "Enter the student's name: ";
		cin >> name;
		for (int j=0; j<M; j++)
		{
			cout << "Enter the score: ";
			cin >> score;
			sum += score;
		}
		average = sum / M;
		cout << "Student name: " << name << " Summation: " << sum << " Average: " << average << endl;
		
	}

	
	
}
