# Battleship
<h2>Introduction</h2>
This project involves creating a program that simulates a naval game. The user's task is to locate
and sink four boats on a 10x10 character array. Each boat is comprised of three adjacent
locations that must be hit. These boats are placed either vertically or horizontally on the board.
The user inputs row and column numbers to determine if they've hit a boat or missed. The game
continues until all boats are sunk, and then the program displays the hit percentage and the final
game board.

<h2>Problem Statement</h2>
We need to develop a program that emulates the game Battleship. Four boats are hidden within a
10x10 grid, each with three target locations. Boats can be oriented either vertically or
horizontally. Users input coordinates to fire on the grid, aiming to sink all four boats. The game
continues until all boats are sunk. After the victory, the program displays the hit percentage and
the final game board.

<h2>Methodology</h2>
Before working on the functions a global variable was made for the size of the board since it is a 10x10 array only one variable has to be made.
<img src="https://i.imgur.com/y9hYABB.png" height="50%" width="50%" />
InitialBoard function is called to set up the game board. The program uses a nested loop to go through each row and column, assigning a period to make a 2D array.


<img src="https://i.imgur.com/SakMfAb.png" height="50%" width="50%" /> 
OpenConfigFile function opens the file that has the boat placement information. It prompts the user to enter the name of the input file. The program attempts to open the file and returns true if it is correct. If the filename is empty, an error message shows up telling the user that the file is empty. If the file can't be opened, the program tells the user that the file is unknown. 

<img src="https://i.imgur.com/XpkPpSU.png" height="50%" width="50%" />
PlaceBoats function adds the boat positions after the OpenConfigFile finds the input file. A while loop is used to read the boat positions from the input file and to make sure that they are within the 10x10 game board.

<img src="https://i.imgur.com/dleD0DL.png" height="50%" width="50%" />
ObtainMove function gathers the user's move. It asks the user to enter their move in rows and columns

<img src="https://i.imgur.com/Tnn1hMu.png" height="50%" width="50%" />
CheckMove function validates the user's move and updates the game board. It checks if the coordinates are within the board and checks the target position whether there is a boat in that position or not, an ‘H’ is placed if it is a hit and an ‘X’ if it’s a miss. An error message prints if the coordinate is invalid. 

<img src="https://i.imgur.com/uoIv10R.png" height="50%" width="50%" />
PrintBoard function displays the column and row headings as well as the whole 10x10 board.

<img src="https://i.imgur.com/STG1n1Q.png" height="50%" width="50%" />
Main function serves as the central control hub for a naval battle game program. After the game loop completes, the program announces the player's victory if all boats are sunk. It calculates and displays the player's successful hit percentage as a measure of accuracy. This information provides feedback on the player's performance in the game.

<h2>Conclusion</h2>
During this project, I have refreshed my knowledge of C++ and learned more about it. I have strengthened my understanding and usage of arrays and branching and learned how to utilize files in my programs.








 
