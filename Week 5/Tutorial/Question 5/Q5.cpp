/*
Design an Essay class that is derived from the GradedActivity class used during lecture (make
GradedActivity class as the base class). The Essay class should determine the grade a student
receives on an essay.
The student’s essay score can be up to 100, and is determined in the following manner:
• Grammar: 30 points
• Spelling: 20 points
• Correct length: 20 points
• Content: 30 points
Demonstrate the class in a simple program.
*/
#include <string>
#include <iostream>

class GradedActivity
{
protected:
    int score;

public:
    GradedActivity() : score(0) {};
    ~GradedActivity() {};

    void setScore(int s)
    {
        if (s <= 100 && s >= 0)
        {
            score = s;
        }
    }

    void displayScores()
    {
        std::cout << "Your Score is: " << score << std::endl;
        std::cout << "Your grade is: " << getGrade() << std::endl;
    }
    std::string getGrade() const
    {
        if (score >= 80)
        {
            return "A";
        }
        else if (score >= 70)
        {
            return "B";
        }
        else if (score >= 60)
        {
            return "C";
        }
        else if (score >= 50)
        {
            return "D";
        }
        else
        {
            return "F";
        }
    }
};

class Essay : public GradedActivity
{
private:
    int grammar;
    int spelling;
    int correctLength;
    int content;

public:
    Essay() : grammar(0), spelling(0), correctLength(0), content(0) {}
    ~Essay() {}

    void setScores(int g, int s, int cl, int c)
    {
        if (g >= 0 && g <= 30)
        {
            grammar = g;
        }
        if (s >= 0 && s <= 20)
        {
            spelling = s;
        }
        if (cl >= 0 && cl <= 20)
        {
            correctLength = cl;
        }
        if (c >= 0 && c <= 30)
        {
            content = c;
        }
        int total = grammar + spelling + correctLength + content;
        GradedActivity::setScore(total);
    }
};

int main()
{
    Essay myEssay;
    double g, s, l, c;

    std::cout << "Enter grammar score (max 30): ";
    std::cin >> g;
    std::cout << "Enter spelling score (max 20): ";
    std::cin >> s;
    std::cout << "Enter length score (max 20): ";
    std::cin >> l;
    std::cout << "Enter content score (max 30): ";
    std::cin >> c;

    myEssay.setScores(g, s, l, c);
    std::cout << "\nEssay Evaluation:\n";
    myEssay.displayScores();

    return 0;
}