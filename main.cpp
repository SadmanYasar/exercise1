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

	double getScore() const
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

		return "";
	}

	double getGradePoint(string _grade) const
	{
		if (_grade == "A+")
		{
			return 4.00;
		}
		if (_grade == "A")
		{
			return 4.00;
		}
		if (_grade == "A-")
		{
			return 3.67;
		}
		if (_grade == "B+")
		{
			return 3.33;
		}
		if (_grade == "B")
		{
			return 3.00;
		}
		if (_grade == "B-")
		{
			return 2.67;
		}
		if (_grade == "C+")
		{
			return 2.33;
		}
		if (_grade == "C")
		{
			return 2.00;
		}
		if (_grade == "C-")
		{
			return 1.67;
		}
		if (_grade == "D+")
		{
			return 1.33;
		}
		if (_grade == "D")
		{
			return 1.00;
		}
		if (_grade == "D-")
		{
			return 0.67;
		}
		if (_grade == "E")
		{
			return 0.00;
		}

		return 0;
	}

	double getCreditHour() const
	{
		auto end = code.at(*(code.end()));
		return end;
	}

	double getPointEarned() const
	{
		if (score >= 90 && score < 100)
		{
			return 4.00 * getCreditHour();
		}
		if (score >= 80 && score < 90)
		{
			return 4.00 * getCreditHour();
		}
		if (score >= 75 && score < 79)
		{
			return 3.67 * getCreditHour();
		}
		if (score >= 70 && score < 75)
		{
			return 3.33 * getCreditHour();
		}
		if (score >= 65 && score < 70)
		{
			return 3.00 * getCreditHour();
		}
		if (score >= 60 && score < 65)
		{
			return 2.67 * getCreditHour();
		}
		if (score >= 55 && score < 60)
		{
			return 2.33 * getCreditHour();
		}
		if (score >= 50 && score < 55)
		{
			return 2.00 * getCreditHour();
		}
		if (score >= 45 && score < 50)
		{
			return 1.67 * getCreditHour();
		}
		if (score >= 40 && score < 45)
		{
			return 1.33 * getCreditHour();
		}
		if (score >= 35 && score < 40)
		{
			return 1.00 * getCreditHour();
		}
		if (score >= 30 && score < 35)
		{
			return 0.67 * getCreditHour();
		}
		if (score >= 0 && score < 30)
		{
			return 0.00 * getCreditHour();
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
	string _name;
	string _code;
	double _score;

	cout << "Enter the following data: " << endl;
	cout << "  Subject name => ";
	getline(cin, _name);
	cout << endl;

	cout << "  Subject code => ";
	cin >> _code;
	cout << endl;

	cout << "  Score earned => ";
	cin >> _score;
	cout << endl;

	Subject sub(_name, _code, _score);

	cout << endl
		 << endl;

	cout << "THE RESULT" << endl
		 << endl;

	cout << "Subject Code : " << sub.getCode() << endl;
	cout << "Subject Name : " << sub.getName() << endl;
	cout << "Credit Hour  : " << sub.getCreditHour() << endl;
	cout << "Score Earned : " << sub.getScore() << endl;
	cout << "Grade Earned : " << sub.getGradeEarned() << endl;
	cout << "Grade Point  : " << sub.getGradePoint(sub.getGradeEarned()) << endl;
	cout << "Point Earned : " << sub.getPointEarned() << endl;
	cout << endl;

	system("pause");

	return 0;
}
