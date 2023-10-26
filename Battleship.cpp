#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

const int board_size = 10;

void InitialBoard(char board[][board_size]) {
    for (int i = 0; i < board_size; i++) {
        for (int j = 0; j < board_size; j++) {
            board[i][j] = '.';
        }
    }
}

bool OpenConfigFile(ifstream& inputfile) {
    string filename;
    cout << "Enter name of the input file" << endl;
    cin >> filename;
    inputfile.open(filename.c_str());

    if (!inputfile) {
        cout << "Unable to open file. Try again." << endl;
        return false;
    } 
    else {
        cout << "Empty file. Try again." << endl;
        inputfile.close();
        return false;
    }

    return true;
}

void PlaceBoats(char board[][board_size], ifstream& inputFile) {
    int x, y;
    char placement;

    while (inputFile >> x >> y >> placement) {
        if (x >= 0 && x < board_size && y >= 0 && y < board_size) {
            board[x][y] = placement;
        }
    }
}

void ObtainMove(int& row, int& col) {
    cout << "Enter your move (row and column)" << endl;
    cin >> row >> col;
}

bool CheckMove(char board[][board_size], int x, int y, int& hits) {
    if (x >= 0 && x < board_size && y >= 0 && y < board_size) {
        if (board[x][y] != '.') {
            board[x][y] = 'H';
            hits++;
            return true;
        } else {
            board[x][y] = 'X';
            return false;
        }
    } else {
        cout << "Invalid move. Please enter valid coordinates." << endl;
        return false;
    }
}

void PrintBoard(char board[][board_size]) {
      cout << right;
     cout << "\n  =====> Current Board Status <=====\n";
     int row, col;

	 // Print out the column heading values for the board
     cout << setw(7) << "0";
     for (col = 1; col < board_size; col++)
         cout << setw(3) << col;
     cout << endl;				// terminate the column heading line

     cout << setw(7) << "-";
     for (col = 1; col < board_size; col++)
         cout << setw(3) << "---";
     cout << endl;

	 // Print out each row of the board
     for (row = 0; row < board_size ; row++)
     {
         cout << setw(3) << row << ":";
         for (col = 0; col < board_size ; col++)
         {
		     // if the position to print out is a boat, print out
			 // a . instead.  Otherwise, print out the contents
			 // of the position
             if (board[row][col] >= '1' && board[row][col] <= '4')
                 cout << setw(3) << '.'; // hide the boat numbers
             else 
                 cout << setw(3) << board[row][col];    
         }
         cout << endl;
     }
}

int main() {
    char board[board_size][board_size];
    InitialBoard(board);

    ifstream configFile;
    while (!OpenConfigFile(configFile)) {
        // Keep prompting until a valid file is opened
    }
    PlaceBoats(board, configFile);

    int max = 12;
    int hits = 0;
    int totalGuesses = 0;

    while (hits < max) {
        int row, col;
        ObtainMove(row, col);

        bool hit = CheckMove(board, row, col, hits);

        if (hit) {
            hits++;
            cout << "Hit!" << endl;
        } else {
            cout << "Miss!" << endl;
        }

        totalGuesses++;
    }
    cout << "Congratulations! You sunk all the boats!" << endl;
    double hitPercentage = (static_cast<double>(hits) / totalGuesses) * 100;
    cout << "Successful hit percentage: " << hitPercentage << "%" << endl;

    PrintBoard(board);
    return 0;
}
