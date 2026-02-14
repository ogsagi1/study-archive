#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input = "0 1";
    
    while (input != "0 0")
    {
        getline(cin, input);

        stringstream ss(input); //제미나이의 도움으로 이 코드만 작성함.

        int num1, num2;

        ss >> num1 >> num2;

        if(input == "0 0")
			break;
        cout << num1 + num2 << endl;
    }


    return 0;
}