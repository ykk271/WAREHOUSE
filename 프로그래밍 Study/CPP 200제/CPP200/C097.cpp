#include <iostream>
#include <filesystem>


using namespace std;
namespace fs = std::filesystem;

int main()
{

	cout << "프로젝트 폴더: "<<fs::current_path() << endl;


	return 0;
}