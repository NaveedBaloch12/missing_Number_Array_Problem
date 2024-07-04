#include <iostream>

using namespace std;

// User Defined Functions....

int main()
{
    int n;
    cin >> n;
    int Arr[n];

    for(int i = 0; i < n - 1; i++)
    {
        cin >> Arr[i];
    }

    for(int i = 0; i < n - 2; i++)
    {
        if(Arr[i + 1] - Arr[i] != 1)
        {
            cout<<Arr[i] + 1; 
            break;
        }
    }

    
    return 0;
}