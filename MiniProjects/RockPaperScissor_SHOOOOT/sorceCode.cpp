#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
enum enGameChoices {
    Rock = 1,
    Paper,
    Scissor
};


enum enGameWinner {
    Player = 1,
    Computer,
    Draw
};


struct stGameRound {
    short countRounds = 0;
    short totalQuest = 0;
    enGameWinner result;
    bool answer;
};


struct stPlayer {
    short Answer;
    short winning = 0;
    short loss = 0;
    short drawing = 0;
    enGameWinner playerStatus;
};

void gameOver();
void resetGame(stPlayer& Player);
void roundEvent(stGameRound& Round, stPlayer& Player);
void showFinalInfo(stGameRound& Round, stPlayer& Player);

int readNumber(string Message, short from, short to)
{
    int Number;
    cout << Message << "between " << to_string(from) << " & " << to_string(to) << " : ";
    cin >> Number;
    if (Number < from || Number > to)
    {
        while (Number < from || Number > to)
        {
            cout << "Wrong, " << Message << " Again! : ";
            cin >> Number;
        }
    }
    return Number;
}


int randNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


enGameWinner gameRule(short playerAnswer, short computerAnswer)
{
    enGameChoices Answer;
    if (playerAnswer == Rock && computerAnswer == Rock) { cout << "\nThe Computer Chose : Rock \n   Draw"; return Draw; }
    else if (playerAnswer == Paper && computerAnswer == Rock) { cout << "\nThe Computer Chose : Rock \n   U are win"; return Player; }
    else if (playerAnswer == Scissor && computerAnswer == Rock) { cout << "\nThe Computer Chose : Rock \n   U are lose"; return Computer; }

    else if (playerAnswer == Rock && computerAnswer == Paper) { cout << "\nThe Computer Chose : Paper \n   U are lose"; return Computer; }
    else if (playerAnswer == Paper && computerAnswer == Paper) { cout << "\nThe Computer Chose : Paper \n   Draw"; return Draw; }
    else if (playerAnswer == Scissor && computerAnswer == Paper) { cout << "\nThe Computer Chose : Paper \n   U are win"; return Player; }

    else if (playerAnswer == Rock && computerAnswer == Scissor) { cout << "\nThe Computer Chose : Scissor \n   U are win"; return Player; }
    else if (playerAnswer == Paper && computerAnswer == Scissor) { cout << "\nThe Computer Chose : Scissor \n   U are lose"; return Computer; }
    else if (playerAnswer == Scissor && computerAnswer == Scissor) { cout << "\nThe Computer Chose : Scissor \n   Draw"; return Draw; }
}


stGameRound getCountQuestions(stGameRound& Round)
{
    Round.totalQuest = readNumber("enter a count of questions u ready to answer it", 1, 10);
    return Round;
}


void roundEvent(stGameRound& Round, stPlayer& Player, short countQuest) {
    for (int i = 1; i <= countQuest; i++)
    {
        Player.Answer = readNumber("enter a number of these choices (rock [1]  paper[2]  scissor[3]", 1, 3);
        Round.result = gameRule(Player.Answer, randNumber(1, 3));
        if (Round.result == enGameWinner::Player) Player.winning++;
        else if (Round.result == enGameWinner::Computer) Player.loss++;
        else if (Round.result == enGameWinner::Draw) Player.drawing++;
        _sleep(3000);
        system("cls");
    }
}


void gameOver(stGameRound& Round, stPlayer& Player)
{
    cout << R"(
         ____    _    __  __ _____    _____     _______ ____  
        / ___|  / \  |  \/  | ____|  / _ \ \   / / ____|  _ \ 
       | |  _  / _ \ | |\/| |  _|   | | | \ \ / /|  _| | |_) |
       | |_| |/ ___ \| |  | | |___  | |_| |\ V / | |___|  _ < 
        \____/_/   \_\_|  |_|_____|  \___/  \_/  |_____|_| \_\
                                                               
    )" << endl;
    _sleep(5000);
    system("cls");
    showFinalInfo(Round, Player);
}


void gameJury(stPlayer& Player) {
    if (Player.winning > Player.loss) {
        Player.playerStatus = enGameWinner::Player;
    }

    else if (Player.winning < Player.loss) {
        Player.playerStatus = enGameWinner::Computer;
    }

    else if (Player.winning == Player.loss) {
        Player.playerStatus = enGameWinner::Draw;
    }

}


void showFinalInfo(stGameRound& Round, stPlayer& Player)
{
    _sleep(2000);
    system("cls");
    gameJury(Player);
    if (Player.playerStatus == enGameWinner::Player)
        cout << "The Player Is Win" << endl;
    else if (Player.playerStatus == enGameWinner::Computer)
        cout << "The Computer Is Win" << endl;
    else if (Player.playerStatus == enGameWinner::Draw)
        cout << "No Winner, Draw" << endl;

    cout << "The Total Rounds is " << Round.countRounds << endl;
    cout << "The Total Questions U Answer It is " << Round.totalQuest << endl;
    cout << "The Questions u are winning in it " << Player.winning << endl;
    cout << "The Questions u are loss in it " << Player.loss << endl;
    cout << "The Questions u are draw in it " << Player.drawing << endl;
    cout << "The finally winner is ";
    if (Player.playerStatus == enGameWinner::Player) cout << "Player";
    else if (Player.playerStatus == enGameWinner::Computer) cout << "Computer";
    else cout << "No One";

}


void resetGame(stPlayer& Player) {
    Player.drawing = 0;
    Player.loss = 0;
    Player.winning = 0;
    Player.playerStatus = enGameWinner::Draw;
}


int main()
{
    srand((unsigned)time(NULL));
    stGameRound Round;
    stPlayer Player;
    do {
        resetGame(Player); // تصفير الجولة
        getCountQuestions(Round);
        roundEvent(Round, Player, Round.totalQuest);
        showFinalInfo(Round, Player);

        cout << "\nDo u wanna play again? yes= 1 | no= 0 : ";
        cin >> Round.answer;
        if (Round.answer == 1) Round.countRounds++;

    } while (Round.answer == 1);

    gameOver(Round, Player);
}
