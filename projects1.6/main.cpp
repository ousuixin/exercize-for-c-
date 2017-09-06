//in this problem, you should write a programe to generate a magic square(we talked about magic square in test.cpp) 
//and the row of them should be odd 
//you can achieve it by:
//把第一行最中间的那个位置标号为1，然后把位置向上向右移动（遇到顶端就转到低端，遇到最右端就转到最左端），
//如果遇到了已经赋值过的位置，就重新从之前那个位置的下方开始。
#include <iostream>
using namespace std;
int main () {
    int row = 0;
    cout << "Please enter the row of square you want to test:" << endl;
    cout << "(Please only enter odd number!)" << endl;
    cin >> row;
    while (row%2==0) {
        cout << "The number you enter is not odd, "
             << "Please enter the row of square you want to test:" << endl;
        cin >> row;
    }

    int count = 0;
    int num[row][row] = {};
    int flag_row = 0;
    int flag_col = row/2;
    num[flag_row][flag_col] = ++count;
    while(1) {
        flag_row--;
        flag_col++;
        if (flag_row < 0) {
            flag_row = row-1;
        }
        if (flag_col > row-1)
        {
            flag_col = 0;
        }
        if (num[flag_row][flag_col] == 0) {
            num[flag_row][flag_col] = ++ count;
        } else {
            flag_row++;
            flag_col--;
            if (flag_row > row-1) {
                flag_row = 0;
            }
            if (flag_col < 0)
            {
                flag_col = row-1;
            }
            flag_row++;
            if (flag_row > row-1) {
                flag_row = 0;
            }
            if (num[flag_row][flag_col] != 0) {
                break;
            } else {
                num[flag_row][flag_col] = ++ count;
            }
        }
    }

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}