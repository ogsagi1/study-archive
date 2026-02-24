#include <iostream>
//#include <string>

using namespace std;
int arr[80];

int main()
{
    int tmp = 0;
    int num;
    int ans = 0;
    string right, wrong, answer, tmpstring;

    cin >> num;

    for(int i = 0; i < num; i++)
    {   
        cin >> right; //문자열의 길이 알아야됨.
        for (int j = 0; j < right.length(); j++)
        {
            
            if ("O" ==  right.substr(j, 1))//문자열에서 하나씩 불러와야됨.
            {
                tmp = tmp + 1;
                ans = ans + tmp;
            }
            if ("X" ==  right.substr(j, 1))
            {
                tmp = 0;
            }
        }
        arr[i] = ans;
        ans = 0;
        tmp = 0;
    }
    
    for(int i = 0; i < num; i++)
        cout << arr[i] << endl;

    return 0;
}