/******************************************************************

  CIS 22B

    Lab6: Header File - This class initiaties the base Lo Shu game.

  Author: Abhiram Rishi Prattipati
  Date: March 22, 2019

*******************************************************************/

#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <iostream>
#include <string>
#include "LoShuSquare.h"

using namespace std;

class Player : public LoShuSquare {

private:
    LoShuSquare gamer;  //only Player can use LoShuSquare as object
public:
    Player(LoShuSquare gamer)
    {
        bool trail = false;

        while(!trail)
        {
            cout << endl;

            gamer.getNum();
            gamer.print();

            bool check = gamer.checkTotalSum();

            if(check)
            {
                cout << "Good job!" << endl;
                trail = check;
            }
            else
            {
                cout << "Try again!" << endl;
                trail = check;
            }
        }
    }

};

#endif // PLAYER_H_INCLUDED

/******************************************************************
Welcome to Lo Shu Square Game!

Enter a number between 1 to 9 for row 1 and column 1:1
Enter a number between 1 to 9 for row 1 and column 2:20
Number should be between 1 and 9.3
Enter a number between 1 to 9 for row 1 and column 3:-4
Number should be between 1 and 9.
4
Enter a number between 1 to 9 for row 2 and column 1:5
Enter a number between 1 to 9 for row 2 and column 2:6
Enter a number between 1 to 9 for row 2 and column 3:7
Enter a number between 1 to 9 for row 3 and column 1:8
Enter a number between 1 to 9 for row 3 and column 2:9
Enter a number between 1 to 9 for row 3 and column 3:5

The Lo Shu Square
1 3 4
5 6 7
8 9 5
Try again!

Enter a number between 1 to 9 for row 1 and column 1:4
Enter a number between 1 to 9 for row 1 and column 2:9
Enter a number between 1 to 9 for row 1 and column 3:2
Enter a number between 1 to 9 for row 2 and column 1:3
Enter a number between 1 to 9 for row 2 and column 2:5
Enter a number between 1 to 9 for row 2 and column 3:7
Enter a number between 1 to 9 for row 3 and column 1:8
Enter a number between 1 to 9 for row 3 and column 2:1
Enter a number between 1 to 9 for row 3 and column 3:6

The Lo Shu Square
4 9 2
3 5 7
8 1 6
Good job!

Process returned 0 (0x0)   execution time : 44.861 s
Press any key to continue.


*******************************************************************/


