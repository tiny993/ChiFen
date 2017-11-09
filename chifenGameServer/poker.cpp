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

	//��ʼ���˿�
	int Poker::init()
	{

#ifdef _DEBUG
		cout << "�������˿��м�����" << endl;
		cin >> poker_Pairs;
#endif // _DEBUG

		pokerList = pokerListTotal(pokerPairs(poker_Pairs));
		return 1;
	}

	//���ü�����
	int Poker::pokerPairs(int pairs)
	{
		return poker_Pairs = pairs;
	}
	
	//���˿�����
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