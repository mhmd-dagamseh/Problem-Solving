#include <iostream>  
#include <string>      
#include <ctime>
#include <windows.h> 
#include <cstdlib>   
using namespace std;

enum difficultyLevel { easy = 1, mid, hard };
enum gameOperation { add = 1, sub, mul, divOP };

struct Question {
    int firstNumber = 0;
    int secondNumber = 0;
    float userAnswer = 0.0f;
    gameOperation Operation = add;
    float correctAnswer = 0.0f;
};

struct gameRound {
    int TotalQuestions = 0;
    difficultyLevel Difficulty = easy;
    gameOperation OperationType = add;
    int corrAnswersCounter = 0;
    int incorrAnswersCounter = 0;
};

static int readPositiveNumber(string Message)
{
    int Number;
    cout << Message << " : ";
    cin >> Number;
    while (Number <= 0 || Number > 100)
    {
        cout << "Wrong, " << Message << " Again! : ";
        cin >> Number;
    }
    return Number;
}

static difficultyLevel getDifficultyLevel()
{
    int Answer;
    cout << "Select A Difficulty Level [1] Easy - [2] Medium - [3] Hard : ";
    cin >> Answer;
    while (Answer < 1 || Answer > 3)
    {
        cout << "Invalid input! Please enter a number between [1 - 3] : ";
        cin >> Answer;
    }
    return (difficultyLevel)Answer;
}

static gameOperation getOperationType() {
    int Answer;
    cout << "Enter Operation Type [1] Addition - [2] Subtraction - [3] Multiplication - [4] Division : ";
    cin >> Answer;
    while (Answer < 1 || Answer > 4) {
        cout << "Invalid input! Please enter a number between (1 - 4): ";
        cin >> Answer;
    }
    return (gameOperation)Answer;
}

static int getRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

static int generateNumbersBasedOndifficulty(difficultyLevel Difficulty) {
    switch (Difficulty)
    {
    case easy: return getRandomNumber(0, 12);
    case mid: return getRandomNumber(12, 20);
    case hard: return getRandomNumber(30, 200);
    default: return 0;
    }
}

static void processingOperations(gameRound& Round, Question& Quest) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char symbols[4] = { '+', '-', '*', '/' };

    for (int i = 1; i <= Round.TotalQuestions; i++)
    {
       
        Quest.firstNumber = generateNumbersBasedOndifficulty(Round.Difficulty);
        Quest.secondNumber = generateNumbersBasedOndifficulty(Round.Difficulty);

        switch (Round.OperationType)
        {
        case add: Quest.correctAnswer = (float)Quest.firstNumber + Quest.secondNumber; break;
        case sub: Quest.correctAnswer = (float)Quest.firstNumber - Quest.secondNumber; break;
        case mul: Quest.correctAnswer = (float)Quest.firstNumber * Quest.secondNumber; break;
        case divOP: Quest.correctAnswer = (float)Quest.firstNumber / (float)Quest.secondNumber; break;
        }

        cout << "The Quest [" << i << "]" << "\n    ";
        cout << Quest.firstNumber << " " << symbols[Round.OperationType - 1] << " " << Quest.secondNumber << " = ";
        cin >> Quest.userAnswer;

        if (Quest.userAnswer == Quest.correctAnswer)
        {
            Round.corrAnswersCounter++;
            SetConsoleTextAttribute(hConsole, 10);
            cout << "That is correct!";
        }
        else {
            Round.incorrAnswersCounter++;
            SetConsoleTextAttribute(hConsole, 12);
            cout << "That is in-correct!";
        }
        cout << endl;
    }
}

static void calcAnswer(gameRound& Round, Question& Quest)
{
    Round.TotalQuestions = readPositiveNumber("Enter A Count Of Questions");
    Round.Difficulty = getDifficultyLevel();
    Round.OperationType = getOperationType();
    processingOperations(Round, Quest);
}

int main()
{
    srand((unsigned)time(NULL));
    cout << "This is a math game...\n";
    cout << "Starting in: 3" << endl;
    Sleep(1000);
    cout << "2" << endl;
    Sleep(1000);
    cout << "1" << endl;
    Sleep(1000);
    cout << "Go!" << endl;

    gameRound Round;
    Question Quest;
    calcAnswer(Round, Quest);

    Sleep(3000);
    system("cls");

    if (Round.corrAnswersCounter <= Round.incorrAnswersCounter) {
        Beep(300, 200);
        Beep(200, 400);
    }
    else {
        Beep(800, 100);
        Beep(1200, 200);
    }
    cout << "\tThe questions u answer it : " << Round.corrAnswersCounter;
    cout << "\n\tThe questions u un-answer it : " << Round.incorrAnswersCounter << endl;
    return 0;
}
