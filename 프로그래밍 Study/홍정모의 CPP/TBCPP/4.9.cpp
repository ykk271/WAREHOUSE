#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	//자료형을 동시에 바꿀 수 있어서 코드 유지관리에 도움 됨
	typedef double distance_t;
	
	
	double		my_dsitance;
	distance_t	home2work;
	distance_t  home2school;
	
	using namespace std;

	typedef vector < pair<string, int> > pairlist_t;
	
	//복잡한 자료형이 존재할 수도 있다.
	vector < pair<string, int> > pairlist1;
	vector < pair<string, int> > pairlist2;

	typedef vector < pair<string, int> > pairlist_t;
	
	pairlist_t pairlist3;
	pairlist_t pairlist4;


	//typedef와 같은 말
	using pairlist_t = vector< pair<string, int> >;
	



	return 0;
}