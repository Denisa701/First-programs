#include <iostream>
#include <fstream>
using namespace std;

const int MAX = 30;
int m, n, A[MAX][MAX];
int xi, yi;
int dx[] = { -1, 0,+1, 0 };
int dy[] = { 0,+1, 0,-1 };
ifstream f("labirint.txt");

void citire()
{
    f >> m >> n >> xi >> yi;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            f>> A[i][j];
}

bool coordonate(int x, int y)
{
    return x >= 0 && x < m && y >= 0 && y < n;
}

bool gata(int x, int y)
{
    return x == 0 || x == m - 1 || y == 0 || y == n - 1;
}

void scrie_traseu()
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            switch (A[i][j])
            {
            case 0: cout << '.'; break;
            case 1: cout << '#'; break;
            case 2: cout << '*'; break;
            }
        cout << endl;
    }
    cout << endl;
}

void traseu(int x, int y)
{
    if (coordonate(x, y) && !A[x][y])
    {
        A[x][y] = 2;
        if (gata(x, y))
            scrie_traseu();
        else
            for (int i = 0; i < 4; i++)
                traseu(x + dx[i], y + dy[i]);
        A[x][y] = 0;
    }
}

int main()
{
    citire();
    traseu(xi,yi);
}
