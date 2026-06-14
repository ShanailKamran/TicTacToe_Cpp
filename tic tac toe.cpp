#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char square[10] = { '0','1','2','3','4','5','6','7','8','9' };

int checkwin();
void board();

int main()
{
    int player = 1, i, choice, menu;
    char game_new;
    char mark;
    srand(time(0));
    
    
    do {
    	for (int i = 1; i <= 9; ++i) {
            square[i] = char('0' + i);
        }
    cout << "------Menu------" << endl;
    cout << "1. Single Player Game" << endl;
    cout << "2. Multi Player  Game" << endl;
    cout << "3. Exit" << endl << endl;

    cin >> menu;
    if (menu == 1) {
            do
            {
                board();

                if (player % 2 == 1)
                {
                    player = 1;
                    cout << "Player 1, enter a number: ";
                    cin >> choice;
                }
                else
                {
                    player = 2;
                    choice = rand() % 9 + 1;
                    cout << "Computer choice: " << choice << endl;
                }







                if (player == 1) {
                    mark = 'X';
                }
                else {
                    mark = 'O';
                }


                if (choice == 1 && square[1] == '1')

                    square[1] = mark;
                else if (choice == 2 && square[2] == '2')

                    square[2] = mark;
                else if (choice == 3 && square[3] == '3')

                    square[3] = mark;
                else if (choice == 4 && square[4] == '4')

                    square[4] = mark;
                else if (choice == 5 && square[5] == '5')

                    square[5] = mark;
                else if (choice == 6 && square[6] == '6')

                    square[6] = mark;
                else if (choice == 7 && square[7] == '7')

                    square[7] = mark;
                else if (choice == 8 && square[8] == '8')

                    square[8] = mark;
                else if (choice == 9 && square[9] == '9')

                    square[9] = mark;
                else
                {
                    cout << "Invalid move ";

                    player--;

                }
                i = checkwin();

                player++;
            } while (i == -1);
            board();
            if (i == 1)
            {
                player--;

                if (player == 1)
                    cout << "You won!";
                else
                    cout << "Computer won!";
            }
            else
                cout << " Game draw ";
        }
        else if (menu == 2) {
            do
            {
                board();

                if (player % 2 == 1) {
                    player = 1;
                }
                else {
                    player = 2;
                }

                cout << "Player " << player << ", enter a number:  ";
                cin >> choice;







                if (player == 1) {
                    mark = 'X';
                }
                else {
                    mark = 'O';
                }


                if (choice == 1 && square[1] == '1')
                    square[1] = mark;

                else if (choice == 2 && square[2] == '2')
                    square[2] = mark;

                else if (choice == 3 && square[3] == '3')
                    square[3] = mark;

                else if (choice == 4 && square[4] == '4')
                    square[4] = mark;

                else if (choice == 5 && square[5] == '5')
                    square[5] = mark;

                else if (choice == 6 && square[6] == '6')
                    square[6] = mark;

                else if (choice == 7 && square[7] == '7')
                    square[7] = mark;

                else if (choice == 8 && square[8] == '8')
                    square[8] = mark;

                else if (choice == 9 && square[9] == '9')
                    square[9] = mark;

                else
                {
                    cout << "Invalid move " << endl << endl;

                    player--;

                }
                i = checkwin();

                player++;
            } while (i == -1);
            board();
            if (i == 1)

                cout << "Player " << --player << " win ";
            else
                cout << " Game draw ";

        }

        cout << "Want New game? (y/n) " << endl;
        cin >> game_new;

    } while (game_new == 'y');
 
    

    return 0;
}


int checkwin() {
    if (square[1] == square[2] && square[2] == square[3])
        return 1;

    else if (square[4] == square[5] && square[5] == square[6])
        return 1;

    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;

    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
          && square[4] != '4' && square[5] != '5' && square[6] != '6'
          && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;

    else
        return -1;  // 0 = draw , -1 = continue , 1 = end
}



void board() {
    system("cls");
    cout << "Tic Tac Toe" << endl << endl;

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}
