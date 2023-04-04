#include<iostream>

bool palindromeStr(std::string str)
{
	bool flag = false;

	int count = 0;
	int len = str.length();
	int lenTemp = str.length()-1;
//	std::cout << str.length() << std::endl;
	for (int i = 0; i < len/2; i++)
	{
	//	std::cout << str[i] << " " << str[lenTemp] << std::endl;

		if (str[i] == str[lenTemp])
			count++;
		lenTemp--;
	}
	if (count == len / 2)
	{
		flag = true;
	}


	return flag;
}

int main()
{
	std::string str = "hello World";
	std::string str2 = "abba";
	std::string str3 = "hello olleh";
	std::string str4 = "hello ollehm";

	//std::cout << str.length() << std::endl;


	std::cout << palindromeStr(str) << std::endl;
	std::cout << palindromeStr(str2) << std::endl;
	std::cout << palindromeStr(str3) << std::endl;
	std::cout << palindromeStr(str4) << std::endl;


	std::cout << "\n\n\n";
	return 0;
}
