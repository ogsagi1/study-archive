#include <iostream>

using namespace std;

int main()
{
    int R1,R2,S; 

    cin >> R1 >> S;

    //S = (R1 + R2) / 2
    //2S = R1 + R2
    //2S - R1 = R2

    cout << S*2 - R1 << endl;

    return 0;
}