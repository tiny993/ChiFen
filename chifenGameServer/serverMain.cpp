#include "poker.h"

using namespace ChiFen;
int main()
{
	Poker poker;
	vector<int> list = poker.pokerListTotal(2);
	for (int i = 0; i < list.size();i++)
	{
		cout << list[i] << " ";
	}
	return 0;
}