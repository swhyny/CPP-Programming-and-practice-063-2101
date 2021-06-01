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
		cout << "플레이어2가 더 많은 돈을 얻었습니다" << endl;
	else if (ref.point1 > ref.point2)
		cout << "플레이어1이 더 많은 돈을 얻었습니다" << endl;
}

int Win::round_Win(int player1_Result, int player2_Result, int player1, int player2)
{
	if (player1_Result < player2_Result)
	{
		cout << "플레이어1이 승리하였습니다" << endl;
		return 1;
	}
	else if (player1_Result > player2_Result)
	{
		cout << "플레이어2가 승리하였습니다" << endl;
		return 2;
	}
	else
	{
		if ( player1 > player2 )
		{
			cout << " 플레이어1이 승리하였습니다" << endl;
			return 1;
		}
		else if ( player1 < player2 )
		{
			cout << "플레이어2가 승리하였습니다" << endl;
			return 2;
		}
	}
}


