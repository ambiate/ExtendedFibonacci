#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    clock_t start = clock();
    int sum = 0, n;

    cin >> n;

    //Running times: n-250 t-886 | n-125 t-104 | n-62 t-54
    for(int i = 0; i < n; i++)
        for(int j=1; j < i*i; j++)
            if(j%i == 0)
                for(int k = 0; k<j; k++)
                    sum++;
    clock_t fin = clock();
    cout << "time: " << fin-start/CLOCKS_PER_SEC << " microsecs" << endl;
    cout << "sum: " << sum << endl;

    return 0;
}