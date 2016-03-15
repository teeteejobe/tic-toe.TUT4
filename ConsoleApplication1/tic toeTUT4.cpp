#include <iostream>

using namespace std;
void design();
void input();
void Change_player();
char matrx[3][3] = { '1', '2', '3','4', '5', '6','7', '8', '9'};
char player = 'x';

int main()
{
	design();
	while (1)
	{
		input();
		design();
		Change_player();
	}
	system("pause");
	return 0;
}
// Function to draw playing court
void design()
{

	int i, j;
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			cout << matrx[i][j] << " " ;

		}
		cout << endl;
	}
}
void input()
{
	int b;
	cout << "Press the of the place you want to play:" << endl;
	cin >> b;

	if (b == 1)
	{
		matrx[0][0] = player;
	}
	else if (b == 2)
	{
		matrx[0][1] = player;
	}
	else if (b == 3)
	{
		matrx[0][2] = player;
	}
	else if (b == 4)
	{
		matrx[1][0] = player;
	}
	else if (b == 5)
	{
		matrx[1][1] = player;
	}
	else if (b == 6)
	{
		matrx[1][2] = player;
	}
	else if (b == 7)
	{
		matrx[2][0] = player;
	}
	else if (b == 8)
	{
		matrx[2][1] = player;
	}
	else if (b == 9)
	{
		matrx[2][2] = player;
	}
}
void Change_player()
{
	if (player == 'x')
		player = '0';
	else
		player = 'x';

}