//Name: Desire Hernandez
#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int SIZE = 3;
char board[SIZE][SIZE] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
//  draw board 
//   1  2  3
//   -- -- --
// A|  |  |  |
//   -- -- --
// B|  |  |  |
//   -- -- --
// C|  |  |  |
//   -- -- --
void printnumbers (int SIZE) {
  cout << "  ";
  for (int i = 0; i < SIZE; i++) {
    cout << "\033[92m"<< "  " << i + 1 << " ";
  }
}

void drawlines (int SIZE) {
  cout << "   " << endl;
  for (int i = 0; i < SIZE; i++) {
    if (i == 0) {
      cout << "\033[37m" << "   ---";
    } else {
      cout << "\033[37m" << " ---";
    }
  }
  cout << endl;
}

void drawboard(const char board[SIZE][SIZE]) {
  char c = ' ';
  printnumbers(SIZE);
  drawlines(SIZE);
  for (int i = 0; i < SIZE; i++) {
    cout << "\033[92m" << char('A' + i);
    for (int j = 0; j < SIZE; j++) {
     
      cout << "\033[37m" << " |  ";
      if (board[i][j] == ' ') {
        cout << board[i][j];
      }
    }
    cout << " |";
    drawlines(SIZE);
  }
}

void player_pick() {
  char letter;
  char player1, player2;
  cout << "\033[34m" << "Player 1 would you like to be (X) or (O)?" << "\033[37m" << endl;
  cin >> letter;

  if (letter == 'X') {
    player1 = 'X';
    player2 = 'O';
  } else {
    player1 = 'O';
    player2 = 'X';
  }
  cout << "\033[95m" << "PLAYER 1 ["<< player1 << "]";
  cout << "\033[95m" << "   PLAYER 2 ["<< player2 << "]"<< endl;
}

void player_turn() {
   char player1, player2;
   string spot1, spot2; 
  cout << "\033[34m" << "Player 1 pick a spot (ex: A2): " << "\033[37m" << endl;
  cin >> spot1;

  
}