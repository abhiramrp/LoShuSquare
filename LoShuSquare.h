/******************************************************************

  CIS 22B

    Lab6: Header File - This class holds the Lo Shu square.

  Author: Abhiram Rishi Prattipati
  Date: March 22, 2019

*******************************************************************/
#ifndef LOSHUSQUARE_H_INCLUDED
#define LOSHUSQUARE_H_INCLUDED


#include <iostream>
#include <string>

using namespace std;

class LoShuSquare {

protected:
    int column;
    int row;
    int **square; //2 asteriks for 2 dimensions

public:
    LoShuSquare()
    {
        column = 3;
        row = column;

        square = new int*[column];

        for (int i=0; i<column; i++)  //dynamic memory allocation
        {
            square[i] = new int[row];
        }

        for (int i = 0; i < row; i++)    //destructor
        {
            for (int j = 0; j < column; j++)
            {
                square[i][j] = 0;
            }
        }
    }

    ~LoShuSquare()  // destructor
    {
        for (int i=0; i<column; i++)
           delete [] square[i];

        delete[]square;
    }

    void getNum()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << "Enter a number between 1 to 9 for row "
                     << i+1 << " and column " << j+1 << ":";
                cin >> square[i][j];

                //tests if value is between 1 and 9
                while((square[i][j] < 1) || (square[i][j] > 9))
                {
                    cout << "Number should be between 1 and 9.";
                    cin >> square[i][j];
                }

            }
        }
        cout << endl;
    }

    bool checkTotalSum()
    {
        if ( square[0][0] + square[0][1] + square[0][2] == 15 &&
             square[1][0] + square[1][1] + square[1][2] == 15 &&
             square[2][0] + square[2][1] + square[2][2] == 15 &&
             square[0][0] + square[1][0] + square[2][0] == 15 &&
             square[0][1] + square[1][1] + square[2][1] == 15 &&
             square[0][2] + square[1][2] + square[2][2] == 15 &&
             square[0][0] + square[1][1] + square[2][2] == 15 &&
             square[0][2] + square[1][1] + square[2][0] == 15 )

			return true;

	    else
            return false;
    }

    void print()
    {
        cout << "The Lo Shu Square" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << square[i][j] << " ";
            }
            cout << endl;
        }
    }
};



#endif // LOSHUSQUARE_H_INCLUDED

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
