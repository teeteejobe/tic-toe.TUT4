#include <iostream>

using namespace std;
void design();
void input();
char Status();
void Position_check();
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
		if (Status() == 'x')
		{
			cout << "x wins!:"<<endl;
			break;
		}
		else if (Status() == '0')
		{
			cout << "x wins!:"<<endl;
			break;
		}
		Change_player();
	}
	system("pause");
	return 0;
}
// Function to draw playing court
void design()
{
	system("cls");
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
//placing position for each player 
void input()
{
	int b;
	cout << "Press the of the place you want to play:" << endl;
	cin >> b;

	if (b == 1)
	{  
		if (matrx[0][0] = !'x' || '0') //check if position has been taken
		{
			matrx[0][0] = player;
		}
	}
	else if (b == 2)
	{
		if (matrx[0][1] = !'x' || '0')//check if position has been taken
		{
			matrx[0][1] = player;
		}
	}
	else if (b == 3)
	{
		if (matrx[0][2] = !'x' || '0')//check if position has been taken
		{
			matrx[0][2] = player;
		}
	}
	else if (b == 4)
	{
		if (matrx[1][0] = !'x' || '0')//check if position has been taken
		{
			matrx[1][0] = player;
		}
	}
	else if (b == 5)
	{
		if (matrx[1][1] = !'x' || '0')//check if position has been taken
		{
			matrx[1][1] = player;
		}
	}
	else if (b == 6)
	{
		if (matrx[1][2] = !'x' || '0')//check if position has been taken
		{
			matrx[1][2] = player;
		}
	}
	else if (b == 7)
	{
		if (matrx[2][0] = !'x' || '0')//check if position has been taken
		{
			matrx[2][0] = player;
		}
	}
	else if (b == 8)
	{
		if (matrx[2][1] = !'x' || '0')//check if position has been taken
		{
			matrx[2][1] = player;
		}
	}
	else if (b == 9)
	{
		if (matrx[2][2] = !'x' || '0')//check if position has been taken
		{
			matrx[2][2] = player;
		}
	}
}
void Change_player()
{
	if (player == 'x')
		player = '0';
	else
		player = 'x';

}
char Status()
{
	// checking if player one wins 
	if (matrx[0][0] == 'x' && matrx[0][1] == 'x' && matrx[0][2] == 'x')
		return 'x';
	if (matrx[1][0] == 'x' && matrx[1][1] == 'x' && matrx[1][2] == 'x')
		return 'x';
	if (matrx[2][0] == 'x' && matrx[2][1] == 'x' && matrx[2][2] == 'x')
		return 'x'; 
	if (matrx[0][0] == 'x' && matrx[1][0] == 'x' && matrx[2][0] == 'x')
		return 'x';
	if (matrx[0][1] == 'x' && matrx[1][1] == 'x' && matrx[2][1] == 'x')
		return 'x';
	if (matrx[0][2] == 'x' && matrx[1][2] == 'x' && matrx[2][2] == 'x')
		return 'x';
	if (matrx[0][0] == 'x' && matrx[1][1] == 'x' && matrx[2][2] == 'x')
		return 'x';
	if (matrx[0][2] == 'x' && matrx[1][1] == 'x' && matrx[2][0] == 'x')
		return 'x';
	//checking if player two wins
	if (matrx[0][0] == '0' && matrx[0][1] == '0' && matrx[0][2] == '0')
		return '0';
	if (matrx[1][0] == '0' && matrx[1][1] == '0' && matrx[1][2] == '0')
		return '0';
	if (matrx[2][0] == '0' && matrx[2][1] == '0' && matrx[2][2] == '0')
		return '0';
	if (matrx[0][0] == '0' && matrx[1][0] == '0' && matrx[2][0] == '0')
		return '0';
	if (matrx[0][1] == '0' && matrx[1][1] == '0' && matrx[2][1] == '0')
		return '0';
	if (matrx[0][2] == '0' && matrx[1][2] == '0' && matrx[2][2] == '0')
		return '0';
	if (matrx[0][0] == '0' && matrx[1][1] == '0' && matrx[2][2] == '0')
		return '0';
	if (matrx[0][2] == '0' && matrx[1][1] == '0' && matrx[2][0] == '0')
		return '0';

	return '/';

}
/*void Position_check()
{
	if (matrx[0][0] == 'x' || '0' || matrx[0][1] == 'x' || '0' || matrx[0][2] == 'x' || '0')
		return 'x';
	if (matrx[1][0] == 'x' || '0' || matrx[1][1] == 'x' || '0' || matrx[1][2] == 'x' || '0')
		return 'x';
	if (matrx[2][0] == 'x' || '0' || matrx[2][1] == 'x' || '0' || matrx[2][2] == 'x' || '0')
		return 'x';
	if (matrx[0][0] == 'x' || '0' || matrx[1][0] == 'x' || '0' || matrx[2][0] == 'x' || '0')
		return 'x';
	if (matrx[0][1] == 'x' || '0' || matrx[1][1] == 'x' || '0' || matrx[2][1] == 'x'|| '0')
		return 'x';
	if (matrx[0][2] == 'x' || '0' || matrx[1][2] == 'x' || '0' || matrx[2][2] == 'x' || '0')
		return 'x';
	if (matrx[0][0] == 'x' || '0' || matrx[1][1] == 'x' || '0' || matrx[2][2] == 'x' || '0')
		return 'x';
	if (matrx[0][2] == 'x' || '0' || matrx[1][1] == 'x' || '0' || matrx[2][0] == 'x' || '0')
		return 'x';
}*/