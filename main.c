//팀원이 같이 작성
#include <iostream>
#include "bet.h"
#include "card.h"
#include "win.h"
#include "hand_ranking.h"
#include "givecard.h"

using namespace std;

int main() {
	Card player;
	betting bet;
	Give_card test; //
	Win test1;
	HandRank test2;
	HandRank test3;
	int result, ans1, ans2, round=1;

//개인 추가 작성 부분
	while (bet.retpoint1(bet) > 0 && bet.retpoint2(bet) > 0) { /
		cout << round << "번째 경기 입니다" << endl; //
		bet.printMoney();

		player.shuffle();
		player.dist();
		player.show1();
		player.show2();

//개인 추가 작성 부분
		cout << "100원이 자동으로 기본 베팅금으로 들어갑니다" << endl; //
		if (bet.deal() == -1) continue;
		test.Give_deck(player);
//개인 추가 작성 부분
		cout << "100원이 자동으로 기본 베팅금으로 들어갑니다" << endl; //
		if (bet.deal() == -1) continue;

		test2.checkHandRanking(player, test2, 1);
		test3.checkHandRanking(player, test3, 2);
		cout << "1. " << test2.returnHighestHandRanking() << endl;
		test2.printHighestSelectedCard();
		cout << "2. " << test3.returnHighestHandRanking() << endl;
		test3.printHighestSelectedCard();

		result = test1.round_Win(test2.returnHighestHandRanking(), test3.returnHighestHandRanking(), test2.returnSumOfHighestSelectedCard(), test3.returnSumOfHighestSelectedCard());
		bet.playerWin(result);
		bet.printMoney();

//개인작성 부분
		cout << "player1 계속 하시겠습니까? yes : 1, no : 2" << endl;
		cin >> ans1;
		cout << "player2 계속 하시겠습니까? yes : 1, no : 2" << endl; 
		cin >> ans2;
		if (ans1 == 2 || ans2 == 2)
			break; 
//

		test2.initHandRankClass();
		test3.initHandRankClass();
		round++;
	}
	cout << endl;
	test1.final_Win(bet); //개인작성부분
	bet.printMoney();

	return 0;
}
/*
0 : Royal Straight Flush
1 : Back Straight Flush
2 : Straight Flush
3 : Four Card
4 : Full House
5 : Flush
6 : Mountain
7 : Back Straight
8 : Straight
9 : Triple
10 : Two Pairs
11 : One Pairs
12 : No Pairs
*/
