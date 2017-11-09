#include "poker.h"

namespace ChiFen
{
	Poker::Poker() 
	{
		return;
	}
	Poker::~Poker()
	{
		return;
	}

	//初始化扑克
	int Poker::init()
	{

#ifdef _DEBUG
		cout << "请输入扑克有几副：" << endl;
		cin >> poker_Pairs;
#endif // _DEBUG

		pokerList = pokerListTotal(pokerPairs(poker_Pairs));
		return 1;
	}

	//设置几套牌
	int Poker::pokerPairs(int pairs)
	{
		return poker_Pairs = pairs;
	}
	
	//总扑克序列
	vector<int> Poker::pokerListTotal(int pairs)
	{
		vector<int> pokerList;
		for (int i = 2; i < 56; ++i)
		{
			for (int j = 0; j < pairs; ++j)
			{
				pokerList.push_back(i);
			}
		}
		return pokerList;
	}
}