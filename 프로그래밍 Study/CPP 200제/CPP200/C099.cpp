#include <iostream>
#include <filesystem>
#include <string>


using namespace std;
namespace fs = std::filesystem;



int main()
{

	string dir = "C\\Program Files";


	for (auto& p : fs::directory_iterator(dir)
		std::cout << p << endl;
	

	return 0;
} 


