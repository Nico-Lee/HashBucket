#define _CRT_SECURE_NO_WARNINGS 1

#include"HashBucket.h"
#include"hashbucket.cpp"

//其中的一个测试用例
int main()
{
	HashBucket<string, string, StringFunc> h;
	h.Insert("assiter", "助手");
	h.Insert("suger", "糖果");
	h.Insert("110", "姐姐");
	h.Insert("11e", "歌手");
	HashBucket<string, string, StringFunc> g(h);
	g.Remove("11e");
	h.Print();
	return 0;
}
