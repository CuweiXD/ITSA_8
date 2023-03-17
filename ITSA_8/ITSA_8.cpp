// ITSA_8.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
    int x,i,ans=0;
    cin >> x;

    for (i = 2;i < x; i++) 
    {

        if (x % i == 0)
            ans += 1;
            }
    if (ans == 0) {

        cout << "YES" << endl;
    }

    else {

        cout << "NO" << endl;

    }

    
}



