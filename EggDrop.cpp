#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int n, k, nl, nh, f;
    char c[10];

    cin>>n>>k;
    nl = 2;
    nh = k-1;
    while (n--)
    {
        cin>>f>>c;
        if (c[0] == 'S')
        {
            if (f+1 > nl)
            {
                nl = f+1;
            }
        }
        else
        {
            if (f-1 < nh)
            {
                nh = f-1;
            }
        }
    }
    printf("%d %d\n", nl, nh);

    return 0;
}
