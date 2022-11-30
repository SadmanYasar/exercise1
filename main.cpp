// ? EXERCISE 1: INTRODUCTION TO CLASSES AND OBJECTS

// Programming Technique II

// Member 1's Name: Sadman Yasar Sayem
// Member 2's Name: MD Mosakim Reza
//

// ? Notes: Choose the debug mode "Console Program" to run the program.

#include <iostream>
#include <string>

using namespace std;

class Subject
{
private:
	string name;
	string code;
	double score;

public:
	// default constructor
	Subject()
	{
		name = "";
		code = "";
		score = 0;
	}
	// parameterized constructor
	Subject(string _name, string _code, double _score)
	{
		name = _name;
		code = _code;
		score = _score;
	}

	void setName(string _name)
	{
		name = _name;
	};
	void setCode(string _code)
	{
		code = _code;
	};
	void setScore(double _score)
	{
		score = _score;
	};

	string getName() const
	{
		return name;
	}

	string getCode() const
	{
		return code;
	}

	string getScore() const
	{
		return score;
	}

	string getGradeEarned() const
	{
		if (score >= 90 && score < 100)
		{
			return "A+";
		}
		if (score >= 80 && score < 90)
		{
			return "A";
		}
		if (score >= 75 && score < 79)
		{
			return "A-";
		}
		if (score >= 70 && score < 75)
		{
			return "B+";
		}
		if (score >= 65 && score < 70)
		{
			return "B";
		}
		if (score >= 60 && score < 65)
		{
			return "B-";
		}
		if (score >= 55 && score < 60)
		{
			return "C+";
		}
		if (score >= 50 && score < 55)
		{
			return "C";
		}
		if (score >= 45 && score < 50)
		{
			return "C-";
		}
		if (score >= 40 && score < 45)
		{
			return "D+";
		}
		if (score >= 35 && score < 40)
		{
			return "D";
		}
		if (score >= 30 && score < 35)
		{
			return "D-";
		}
		if (score >= 0 && score < 30)
		{
			return "E";
		}
	}

	double getGradePoint(string _grade) const
	{
		if (_grade >= 90 && _grade < 100)
		{
			return 4.00;
		}
		if (_grade >= 80 && _grade < 90)
		{
			return 4.00;
		}
		if (_grade >= 75 && _grade < 79)
		{
			return 3.67;
		}
		if (_grade >= 70 && _grade < 75)
		{
			return 3.33;
		}
		if (_grade >= 65 && _grade < 70)
		{
			return 3.00;
		}
		if (_grade >= 60 && _grade < 65)
		{
			return 2.67;
		}
		if (_grade >= 55 && _grade < 60)
		{
			return 2.33;
		}
		if (_grade >= 50 && _grade < 55)
		{
			return 2.00;
		}
		if (_grade >= 45 && _grade < 50)
		{
			return 1.67;
		}
		if (_grade >= 40 && _grade < 45)
		{
			return 1.33;
		}
		if (_grade >= 35 && _grade < 40)
		{
			return 1.00;
		}
		if (_grade >= 30 && _grade < 35)
		{
			return 0.67;
		}
		if (_grade >= 0 && _grade < 30)
		{
			return 0.00;
		}
	}

	double getPointEarned(string _grade) const
	{
		if (_grade >= 90 && _grade < 100)
		{
			return 4.00 * static_cast<double>(code.end());
		}
		if (_grade >= 80 && _grade < 90)
		{
			return 4.00 * static_cast<double>(code.end());
		}
		if (_grade >= 75 && _grade < 79)
		{
			return 3.67 * static_cast<double>(code.end());
		}
		if (_grade >= 70 && _grade < 75)
		{
			return 3.33 * static_cast<double>(code.end());
		}
		if (_grade >= 65 && _grade < 70)
		{
			return 3.00 * static_cast<double>(code.end());
		}
		if (_grade >= 60 && _grade < 65)
		{
			return 2.67 * static_cast<double>(code.end());
		}
		if (_grade >= 55 && _grade < 60)
		{
			return 2.33 * static_cast<double>(code.end());
		}
		if (_grade >= 50 && _grade < 55)
		{
			return 2.00 * static_cast<double>(code.end());
		}
		if (_grade >= 45 && _grade < 50)
		{
			return 1.67 * static_cast<double>(code.end());
		}
		if (_grade >= 40 && _grade < 45)
		{
			return 1.33 * static_cast<double>(code.end());
		}
		if (_grade >= 35 && _grade < 40)
		{
			return 1.00 * static_cast<double>(code.end());
		}
		if (_grade >= 30 && _grade < 35)
		{
			return 0.67 * static_cast<double>(code.end());
		}
		if (_grade >= 0 && _grade < 30)
		{
			return 0.00 * static_cast<double>(code.end());
		}
	}

	// destructor
	~Subject()
	{
	}
};
// Point Earned = Point value x credit

int main()
{
	Subject sub;

	cout << "Enter the following data: " << endl;
	cout << "  Subject name => ";
	sub.setName(getline(cin, ));
	cout << endl;

	cout << "  Subject code => ";
	cout << endl;

	cout << "  Score earned => ";
	cout << endl;

	cout << endl
		 << endl;

	cout << "THE RESULT" << endl
		 << endl;

	cout << "Subject Code : " << endl;
	cout << "Subject Name : " << endl;
	cout << "Credit Hour  : " << endl;
	cout << "Score Earned : " << endl;
	cout << "Grade Earned : " << endl;
	cout << "Grade Point  : " << endl;
	cout << "Point Earned : " << endl;
	cout << endl;

	system("pause");

	return 0;
}
