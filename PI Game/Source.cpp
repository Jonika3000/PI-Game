#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <Windows.h>
using namespace std;

class PI
{
private:
    string pi = "15926535 8979323846 2643383279 5028841971 6939937510 5820974944 5923078164 0628620899 8628034825 3421170679";
    string PIu;
    int need_lenth = 0;
    int score;
    bool tru = true;
    int Best = 0;
    int y = 0;
public:
    void Game()
    {
        string PIu;
        score = 0;
        y = 0;
        need_lenth = 0;
        tru = true;
        for (int i = 0; i < 98; i++)
        {
            system("CLS");
            if (tru == false)
                break;
            else
                score++;
            cout << endl << endl << endl << endl;
            cout << '\t' << '\t' << '\t' << '\t' << '\t' << '\t';
            cout << "3,14";
            y++;
            for (int k = 0; k < y; k++)
            {
                cout << pi[k];
                Sleep(700);
            }
            cout << endl;
            system("CLS");
            cout << endl << endl << endl << endl;
            cout << '\t' << '\t' << '\t' << '\t' << '\t' << '\t';
            cout << "3,14";
            int x = 0;
            need_lenth++;
            while (x < need_lenth)
            {
                int key = _getch();
                if (key >= 48 && key <= 57)
                {
                    PIu.resize(x + 1);
                    PIu[x] = key;
                    if (pi[x] != PIu[x])
                    {
                        tru = false;
                        break;
                    }
                    cout << PIu[x];
                    x++;
                }
                if (x >= need_lenth)
                {
                    break;
                }
            }
        }
        if (Best < score)
        {
            Best = score;
            cout << "New best score!";
        }
        Score();
        _getch();
        Menu();
    }
    void Score()
    {
        cout << endl << endl << endl << endl;
        cout << '\t' << '\t' << '\t' << '\t' << '\t' << '\t';
        cout << "You score:" << score;
    }
    int GetScore()
    {
        return score;
    }
    int GetBScore()
    {
        return Best;
    }
    void Menu()
    {
        system("CLS");
        cout << endl << endl << endl << endl;
        cout << '\t' << '\t' << '\t' << '\t' << '\t' << '\t';
        cout << "1.New Game" << endl;
        cout << '\t' << '\t' << '\t' << '\t' << '\t' << '\t';
        cout << "2.You best score" << endl;
        cout << '\t' << '\t' << '\t' << '\t' << '\t' << '\t';
        cout << "3.Exit" << endl;
        cout << '\t' << '\t' << '\t' << '\t' << '\t' << '\t';
        int tmp = _getch();
        if (tmp == 49)
        {
            Game();
        }
        if (tmp == 50)
        {
            system("CLS");
            cout << endl << endl << endl << endl;
            cout << '\t' << '\t' << '\t' << '\t' << '\t' << '\t';
            cout << "You best score:" << GetBScore() << endl;
            cout << '\t' << '\t' << '\t' << '\t' << '\t' << '\t' << endl;
            _getch();
            Menu();
        }
        if (tmp == 51)
        {
            system("exit");
        }
    }
};

int main()
{
    PI game;
    game.Menu();
}
