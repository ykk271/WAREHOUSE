#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	//�ڷ����� ���ÿ� �ٲ� �� �־ �ڵ� ���������� ���� ��
	typedef double distance_t;
	
	
	double		my_dsitance;
	distance_t	home2work;
	distance_t  home2school;
	
	using namespace std;

	typedef vector < pair<string, int> > pairlist_t;
	
	//������ �ڷ����� ������ ���� �ִ�.
	vector < pair<string, int> > pairlist1;
	vector < pair<string, int> > pairlist2;

	typedef vector < pair<string, int> > pairlist_t;
	
	pairlist_t pairlist3;
	pairlist_t pairlist4;


	//typedef�� ���� ��
	using pairlist_t = vector< pair<string, int> >;
	



	return 0;
}