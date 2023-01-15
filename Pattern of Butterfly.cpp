///Pattern of Butterfly

/**
*
*   author :: 101rror
*
**/

#include <bits/stdc++.h>

using namespace std;

#define MAX 100
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;                               //101rror
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL))

#define T while(t--)
#define for2(i,a,b) for(i=a;i>=b;i--)
#define for3(i,a,b) for(i=a;i<=b;i=i+2)
#define for1(i,a,b) for(i=a;i<=b;i=i+1)
#define for4(i,a,b) for(i=a;i>=b;i=i-2)

#define fi first
#define se second
#define pb push_back
#define eb emplace_back

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    fastread();


    printf("Enter a Number : ");

    int num;
    cin >> num;
    cout << endl;


    // Upper half of the pattern
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < (2 * num); j++)
        {
            if(i >= j) // upper left triangle
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }

            if(i >= (2 * num - 1) - j)  // upper right triangle
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }


    // Bottom half of the pattern
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < (2 * num); j++)
        {
            if(i + j <= num - 1)  // Bottom left triangle
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }

            if((i + num) <= j)  // Bottom right triangle
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }


    return 0;
}
