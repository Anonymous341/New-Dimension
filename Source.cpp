#include <stdio.h>
#include <iostream>
float score[10][10];
int stud_count, sub_count, print_stud;
float score_avg, total, input;
using namespace std;
int main()
{
	for (stud_count = 1; stud_count <=5; stud_count++)
	{
		for (sub_count = 1 ; sub_count <=3; sub_count++)
		{
		invalid:
			cout << "Enter marks of student " << stud_count << " in subject " << sub_count << ": ";
			cin >> input;
			if (input > 150 || input <0)
			{
				cout << "Marks input is invalid\n";
				goto invalid;
			}
			else
			{
				score[stud_count][sub_count] = input;
			}
		}
	}
	for (print_stud = 1; print_stud <= 5; print_stud++)
	{
		total= score[print_stud][1] + score[print_stud][2] + score[print_stud][3];
		score_avg = ( (score[print_stud][1] + score[print_stud][2] + score[print_stud][3]) * 100) /450;
		cout << total << "\n";
		cout << "The percentage of average for student " << print_stud << "is " << score_avg << "\n";
	}
}