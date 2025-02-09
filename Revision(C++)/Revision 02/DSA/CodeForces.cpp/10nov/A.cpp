#include <bits/stdc++.h>
using namespace std;

bool ifBeyond(int minx, int miny, int maxx, int maxy, int incx, int incy, int a, int b)
{

    if (incx < 0)
    {

        if (maxx < a)
        {
            return 0;
        }
    }

    if (incy < 0)
    {

        if (maxy < a)
        {
            return 0;
        }
    }

    if (incx > 0)
    {

        if (minx > a)
        {
            return 0;
        }
    }

    if (incy < 0)
    {

        if (miny > a)
        {
            return 0;
        }
    }

    if (incx == 0 && incy == 0)
    {
        return 0;
    }

    return 1;
}

int asdf(int a, int b)
{
    return a > b ? a - b : b - a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        vector<char> s;
        int incx = 0, incy = 0;
        int maxnegx = 0, maxposx = 0;
        int maxnegy = 0, maxposy = 0;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == 'N')
                incy++;
            if (c == 'E')
                incx++;
            if (c == 'W')
                incx--;
            if (c == 'S')
                incy--;
            if (incx < maxnegx)
            {
                maxnegx = (-1) * incx;
            }
            if (incx > maxposx)
            {
                maxposx = incx;
            }
            if (incy < maxnegy)
            {
                maxnegy = (-1) * incy;
            }
            if (incy > maxposy)
            {
                maxposy = incy;
            }
            s.push_back(c);
        }
        int miny = 0, maxy = 0, minx = 0, maxx = 0;
        int i = 0;
        int x = 0, y = 0;
        minx = x - maxnegx;
        maxx = x + maxposx;
        miny = y - maxnegy;
        maxy = y + maxposy;
        while (1)
        {

        X:;
            i = 0;
            minx = x - maxnegx;
            maxx = x + maxposx;
            miny = y - maxnegy;
            maxy = y + maxposy;
            while (i < n)
            {
                if (ifBeyond(minx, miny, maxx, maxy, incx, incy, a, b))
                {

                    if (s[i] == 'N')
                    {
                        y++;
                        if (x == a && y == b)
                        {
                            cout << "YES\n";
                            goto Y;
                        }
                    }
                    if (s[i] == 'E')
                    {

                        x++;
                        if (x == a && y == b)
                        {
                            cout << "YES\n";
                            goto Y;
                        }
                    }
                    if (s[i] == 'W')
                    {
                        x--;
                        if (x == a && y == b)
                        {
                            cout << "YES\n";
                            goto Y;
                        }
                    }
                    if (s[i] == 'S')
                    {
                        y--;
                        if (x == a && y == b)
                        {
                            cout << "YES\n";
                            goto Y;
                        }
                    }
                    if (minx > x)
                    {
                        minx = x;
                    }
                    if (maxx < x)
                    {
                        maxx = x;
                    }
                    if (miny > y)
                    {
                        miny = y;
                    }
                    if (maxy < y)
                    {
                        maxy = y;
                    }
                }
                else
                {
                    cout << "NO\n";
                    goto Y;
                }

                i++;
            }
            if (x == 0 && y == 0)
            {
                cout << "NO\n";
                goto Y;
            }
            goto X;
        }
    Y:;
    }
}