# Battleship
This C++ program implements a simple version of the Battleship game. The game board is a 10x10 grid, and the objective is to sink all the boats by guessing their locations.

**Code Overview**
The program starts by initializing an empty game board with the InitialBoard() function. It then opens a configuration file with the OpenConfigFile() function, which contains the initial positions of the boats. The PlaceBoats() function reads these positions from the file and places the boats on the board.

The main game loop is in the main() function. It repeatedly prompts the user for their next move with the ObtainMove() function, checks if the move hits a boat with the CheckMove() function, and updates the game state accordingly. The game continues until all boats are sunk.

The PrintBoard() function is used to print the current state of the game board. It hides the actual positions of the boats and only shows hits and misses.

**Usage**

To run this program, you need to have a configuration file with the initial positions of the boats. Each line in this file should contain three values: the row and column of a boat’s position, and a character representing the boat.

Here’s an example of how to compile and run this program:

`g++ battleship.cpp `
`-o battleship`
`./battleship`


When prompted, enter the name of your configuration file. Then, follow the prompts to play the game.

Please note that this is a simple implementation of Battleship and may not include all features of more complex versions of the game.







 
