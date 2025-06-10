#include<iostream>
#include<algorithm>

using namespace std;

string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

string board[50];

int WB_cnt(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != WB[i][j])
                cnt++;
        }

    }
    return cnt;
}

int BW_cnt(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != BW[i][j])
                cnt++;
        }

    }
    return cnt;
}

int main() {

    int min_val = 10000;
    int num1, num2;
    cin >> num1 >> num2;
    for (int i = 0; i < num1; i++)
        cin >> board[i];
    for (int i = 0; i <= num1 - 8; i++)
    {
        for (int j = 0; j <= num2 - 8; j++)
        {
            int tmp;
            tmp = min(WB_cnt(i, j), BW_cnt(i, j));
            if (tmp < min_val) {
                min_val = tmp;
            }
        }
    }
    cout << min_val;
    return 0;
}