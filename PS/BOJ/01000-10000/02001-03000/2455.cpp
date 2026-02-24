#include <iostream>

using namespace std;

int main()
{
	int out, in;
	int curr_people = 0; //변수를 아껴 사용하다가 틀림. 변수 분리는 필수다!
	int max_people=0;
		
	int i = 4;

	while (i != 0)
	{
		cin >> out >> in;

		curr_people = curr_people - out + in;
		if (curr_people > max_people)
			max_people = curr_people;

		i--;
	}

	cout << max_people;

	return 0;
}