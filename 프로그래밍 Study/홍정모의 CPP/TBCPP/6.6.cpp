#include <iostream>



using namespace std;

int main()
{
	//char myString[] = "string";

	//for (int i = 0; i < 7; ++i)
	//{
	//	cout << (int)myString[i] << endl;
	//}
	////null이 맨 뒤에 있음

	//cout << sizeof(myString) / sizeof(myString[0]) << endl;




	//char string2[255];
	
	//cin >> string2;

	//string2[0] = 'A';
	//string2[5] = '\0'; // null이 나오기 전까지 출력함

	//cout << string2 << endl;

	//char myString[255];
	//cin.getline(myString, 255); //빈칸출력가능




	//char myString[255];
	//cin.getline(myString, 255);

	//int ix = 0;
	//while (true)
	//{
	//	if (myString[ix] == '\0') break;
	//	cout << myString[ix] << " " << (int)myString[ix] << endl;
	//	++ix;
	//}




	char source[] = "Copy this!";
	char dest[55]; // 더 적게 메모리 할당하면 런타임에러 뜸
	strcpy_s(dest, 55, source);

	//cout << source << endl;
	//cout << dest << endl;

	//strcat() 뒤에다 한글자 붙임
	//strcmp() 두 문자열이 동일한지 비교

	strcat_s(dest, 55, source);

	cout << source << endl;
	cout << dest << endl;

	//같으면 0리턴, 다르면 -1 리턴
	cout << strcmp(source, dest) << endl;
	if (strcmp(source, dest) == 0)
	{
	}


	return 0;
}