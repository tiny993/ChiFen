#pragma once
#ifndef POKER_H_
#define POKER_H_
#endif // !POKER_H_

#include "header.h"
#define POKER_TOTAL 54

namespace ChiFen 
{
	class Poker
	{
	public:
		Poker();
		~Poker();
		int init();
		inline int pokerPairs(int);
		inline vector<int> pokerListTotal(int);
	private:
		int poker_Pairs = 1;
		vector<int> pokerList;
	};
}