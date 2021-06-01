#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include "card.h"
#include "givecard.h"

using namespace std;


void Give_card::Give_deck(Card& ref)
{
	int numofCard = sizeof(ref.card1) / sizeof(int);

	if (numofCard < 8)
	{
		for (int i = 3; i < 7; i++)
		{
			ref.card1[i] = ref.deck[i + 3];
			ref.card2[i] = ref.deck[i + 7];
		}
	}
	else {
		cout << "이미 모든 패를 받았습니다" << endl;
	}
	cout << "플레이어1의 카드 7장 : ";
	for (int cnt = 0; cnt < 7; cnt++)
	{
		int pattern = ref.card1[cnt] / 13;
		int cardnumber = ref.card1[cnt] % 13;

		switch (pattern)
		{
		case 0:
			cout << "♠";
			break;
		case 1:
			cout << "◇";
			break;
		case 2:
			cout << "♣";
			break;
		case 3:
			cout << "♡";
			break;
		default:
			break;
		}
		if (cardnumber > 1 && cardnumber < 11)
		{
			cout << cardnumber << " ";
		}
		else
		{
			switch (cardnumber)
			{
			case 0:
				cout << "K ";
				break;
			case 1:
				cout << "A ";
				break;
			case 11:
				cout << "J ";
				break;
			case 12:
				cout << "Q ";
				break;
			}
		}
	}
	Sleep(10000);
	system("cls");

	cout << "플레이어2의 카드 7장 : ";
	for (int cnt = 0; cnt < 7; cnt++)
	{
		int pattern = ref.card2[cnt] / 13;
		int cardnumber = ref.card2[cnt] % 13;

		switch (pattern)
		{
		case 0:
			cout << "♠";
			break;
		case 1:
			cout << "◇";
			break;
		case 2:
			cout << "♣";
			break;
		case 3:
			cout << "♡";
			break;
		default:
			break;
		}

		if (cardnumber > 1 && cardnumber < 11)
		{
			cout << cardnumber << " ";
		}
		else
		{
			switch (cardnumber)
			{
			case 0:
				cout << "K ";
				break;
			case 1:
				cout << "A ";
				break;
			case 11:
				cout << "J ";
				break;
			case 12:
				cout << "Q ";
				break;
			}
		}
	}
	Sleep(10000);
	system("cls");
}