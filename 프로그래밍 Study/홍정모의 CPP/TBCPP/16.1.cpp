#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>

using namespace std;

void sequence_containers()
{
	//vector
	cout << "vector" << endl;
	{
		vector<int> vec;
		for (int i = 0; i < 10; ++i)
			vec.push_back(i);

		 
		for (auto& e : vec)
			cout << e << " ";
		cout << endl;		 
	}


	//deque
	cout << "deque" << endl;
	{
		deque<int> deq;
		for (int i = 0; i < 10; ++i)
		{
			deq.push_back(i);
			deq.push_front(i);
		}
			
		
		for (auto& e : deq)
			cout << e << " ";
		cout << endl;
	}
}

void associative_containers()
{
	//set
	cout << "set" << endl;
	{
		set<string> str_set;

		str_set.insert("Hello");
		str_set.insert("World");
		str_set.insert("Hello"); //무시해버림

		cout << str_set.size() << endl;

		
		for (auto& e : str_set)
			cout << e << " ";
		cout << endl;
	}
	
	//multi set : duplication is allowed
	cout << "multi set" << endl;
	{
		std::multiset<string> str_set;

		str_set.insert("Hello");
		str_set.insert("World");
		str_set.insert("Hello"); //허용

		cout << str_set.size() << endl;

		
		for (auto& e : str_set)
			cout << e << " ";
		cout << endl;
	}

	//map
	cout << "map" << endl;
	{
		std::map<char, int> map;
		map['a'] = 10;
		map['b'] = 20;
		map['c'] = 50;

		cout << map['a'] << endl;

		map['a'] = 100;

		cout << map['a'] << endl;

		
		for (auto& e : map)
			cout << e.first << " " << e.second << "	";
		cout << endl;			
	}

	//multimap : duplicated keys
	{
		std::multimap<char, int>map;
		map.insert(std::pair('a', 10));
		map.insert(std::pair('b', 10));
		map.insert(std::pair('d', 10));
		map.insert(std::pair('a', 100));

		cout << map.count('a') << endl;

		for (auto& e : map)
			cout << e.first << " " << e.second << " ";
			cout << endl;
	}

}

void container_adapters()
{
	// stack
	cout << "Stack" << endl;
	{
		std::stack<int> stack;
		stack.push(1); // push adds a copy
		stack.emplace(2); // emplace constructs a new object
		stack.emplace(3);
		cout << stack.top() << endl;
		stack.pop(); //맨위 제거
		cout << stack.top() << endl;
	}

	//queue
	{
		cout << "Queue" << endl;

		std::queue<int> queue;
		queue.push(1);
		queue.push(3);
		queue.push(5);
		cout << queue.front() << " " << queue.back() << endl;
		queue.pop(); // 앞에 것이 사라짐
		cout << queue.front() << " " << queue.back() << endl;
	}

	//priority queue
	{
		cout << "Priority queue" << endl;

		std::priority_queue <int> queue;

		for (const int n : {5,1,2,3,7,2,8,6,4,9,1})
			queue.push(n);

		for (int i = 0; i < 10; ++i)
		{
			cout << queue.top() << endl;
			queue.pop();
		}
	}
}

int main()
{
	cout << "sequence_containers" << endl;
	sequence_containers();
	cout << endl;

	cout << "associative_containers" << endl;
	associative_containers();
	cout << endl;

	cout << "container_adapters" << endl;
	container_adapters();
	cout << endl;

	return 0;
}