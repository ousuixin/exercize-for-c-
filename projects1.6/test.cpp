#include <iostream>
using namespace std;
int main () {

    int row;
    int num[20][20] = {};
    cout << "Please tell me the row of the square you want to test"
         << "(the row of which should not beyond 20)" << endl;
    cin >> row;
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