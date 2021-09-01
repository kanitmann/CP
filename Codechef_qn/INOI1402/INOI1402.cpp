#include <bits/stdc++.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int c, f;
    std::cin >> c >> f;
    int graph[c][c];
    int i, j, k, x, y, p;
    for (i = 0; i < c; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            graph[i][j] = 100000000;
        }
    }
    for (i = 0; i < c; ++i)
    {
        graph[i][i] = 0;
    }
    for (i = 0; i < f; ++i)
    {
        std::cin >> x >> y >> p;
        graph[x - 1][y - 1] = p;
        graph[y - 1][x - 1] = p;
    }
    int distance[c][c];
    for (i = 0; i < c; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            distance[i][j] = graph[i][j];
        }
    }
    for (k = 0; k < c; ++k)
    {
        for (i = 0; i < c; ++i)
        {
            for (j = 0; j < c; ++j)
            {
                if (distance[i][j] > distance[i][k] + distance[j][k])
                {
                    distance[i][j] = distance[i][k] + distance[j][k];
                }
            }
        }
    }

    int max_min = 0;
    for (i = 0; i < c; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            max_min = std::max(max_min, distance[i][j]);
        }
    }
    std::cout << max_min << "\n";
    return 0;
}