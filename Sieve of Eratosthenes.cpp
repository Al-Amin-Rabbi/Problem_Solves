#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[100] = {0};

    for (int i = 2; i <=sqrt(1000); i++)
    {
        for (int j = i * i; j < 30; j+=i)
        {
            arr[j - 1] = 1;
        }
    }
    for (int i = 1; i < 100; i++)
    {
        if (arr[i - 1] == 0)
            cout << i << "\t";
    }

}
