#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    const int MMAX=20;
    int A[MMAX][MMAX];
    int n = 0, m = 0;
    ifstream f;
    ofstream g;
    int sumaC[MMAX] = {0}, sumaL[MMAX] = {0};

    f.open("matrice.in");
    if (!f) {
        cerr<<"nu exista fisier de intrare";
        exit(EXIT_FAILURE);
    }
    f>>n>>m;
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            f>>A[i][j];

    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            sumaL[i] += A[i][j];

    for (int j=0; j<m; j++)
        for (int i=0; i<n; i++)
            sumaC[j] += A[i][j];

    g.open("matrice.out");
    if (!g) {
        cerr<<"nu exista fisier de iesire";
        exit(EXIT_FAILURE);
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            g << A[i][j] << " ";
        }
        g<<endl;
    }
}
