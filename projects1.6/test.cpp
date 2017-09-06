//this problem talks about a kind of square
//the sum of every row, every col and each of two diagonals are equal 
//here is 2 example:
//(1)
// 16 3 2 13
// 5 10 11 8
// 9 6 7 12
// 4 15 14 1
// (2)
// 17 24 1 8 15
// 23 5 7 14 16
// 4 6 13 20 22
// 10 12 19 21 3
// 11 18 25 2 9
// please write a program to prove whether a square has such property;
#include <iostream>
using namespace std;
int main () {

    int row;
    cout << "Please tell me the row of the square you want to test:" << endl;
    cin >> row;
    int num[row][row] = {};
    cout << "Please enter the square you want to test:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; ++j)
        {
            cin >> num[i][j];
        }
    }

    int ret = 0;
    int count = 0;
    for (int i = 0; i < row; ++i)
    {
        count += num[0][i];
    }

    int count1 = 0;
    for (int i = 1; i < row; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            count1 += num[i][j];
        }
        if (count1 != count) {
            cout << "It is not a magic square." << endl;
            return 0;
        }
        count1 = 0;
    }
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            count1 += num[j][i];
        }
        if (count1 != count) {
            cout << "It is not a magic square." << endl;
            return 0;
        }
        count1 = 0;
    }
    for (int i = 0; i < row; ++i)
    {
        count1 += num[i][i];
    }
    if (count1 != count) {
        cout << "It is not a magic square." << endl;
        return 0;
    }
    count1 = 0;
    for (int i = 0; i < row; ++i)
    {
        count1 += num[row-1-i][i];
    }
    if (count1 != count) {
        cout << "It is not a magic square." << endl;
        return 0;
    }
    count1 = 0;
    cout << "It is a magic square." << endl;
    return 0;
}