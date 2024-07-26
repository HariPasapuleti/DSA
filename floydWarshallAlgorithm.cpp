#include <iostream>
#include <vector>
#include <limits>
#include <iomanip>

using namespace std;

void floydWarshallAlgorithm(vector<vector<int>>& dist, int n)
{

    for(int i = 0; i < n; i++)
    {
        dist[i][i] = 0;
    }

    for(int k = 0; k < n; k++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(dist[i][k] != numeric_limits<int>::max() && dist[k][j] != numeric_limits<int>::max()) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}

int main()
{
    int n = 5;
    vector<vector<int>> dist(n, vector<int>(n, numeric_limits<int>::max()));

    dist[0][1] = 10;
    dist[0][2] = 3;
    dist[1][2] = 1;
    dist[1][3] = 2;
    dist[2][1] = 4;
    dist[2][3] = 8;
    dist[3][4] = 7;
    dist[4][3] = 5;

    floydWarshallAlgorithm(dist, n);

    cout << "Shortest Distance Matrix: " << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(dist[i][j] == numeric_limits<int>::max()) {
                cout << setw(5) << "INF";
            }
            else {
                cout << setw(5) << dist[i][j];
            }
        }
        cout << endl;
    }

    return 0;

}