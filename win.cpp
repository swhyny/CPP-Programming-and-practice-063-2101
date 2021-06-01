#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "bet.h"
#include "card.h"
#include "win.h"
#include "hand_ranking.h"

using namespace std;

void Win::final_Win(betting ref)
{
	if (ref.point1 < ref.point2)
		cout << "�÷��̾�2�� �� ���� ���� ������ϴ�" << endl;
	else if (ref.point1 > ref.point2)
		cout << "�÷��̾�1�� �� ���� ���� ������ϴ�" << endl;
}

int Win::round_Win(int player1_Result, int player2_Result, int player1, int player2)
{
	if (player1_Result < player2_Result)
	{
		cout << "�÷��̾�1�� �¸��Ͽ����ϴ�" << endl;
		return 1;
	}
	else if (player1_Result > player2_Result)
	{
		cout << "�÷��̾�2�� �¸��Ͽ����ϴ�" << endl;
		return 2;
	}
	else
	{
		if ( player1 > player2 )
		{
			cout << " �÷��̾�1�� �¸��Ͽ����ϴ�" << endl;
			return 1;
		}
		else if ( player1 < player2 )
		{
			cout << "�÷��̾�2�� �¸��Ͽ����ϴ�" << endl;
			return 2;
		}
	}
}


