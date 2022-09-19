//Name: Desire Hernandez
#include <iostream>
#include <vector>
#include <string>
#include "functions.h"
using namespace std;


int main() {

  char board[SIZE][SIZE];
  cout << "\033[34m"<< "Welcome to Tic-Tac-Toe by Desire!" << "\033[0m" << endl;
  drawboard(board);
  player_pick();
 
  string spot1, spot2; 
  drawboard(board);

  
return 0;
}