#ifndef __WIN_H__ 
#define __WIN_H__
#include <iostream>
#include "bet.h"
#include "card.h"
#include "hand_ranking.h"

class Win
{
public:
	void final_Win(betting ref);
	int round_Win(int player1_Result, int player2_Result, int player1, int player2);
};
#endif



