#include<iostream>

template<typename T>
bool palindromeArr(T arr, int len)
{
	bool flag = false;

	int count = 0;

	int lenTemp = len - 1;
	
	for (int i = 0; i < len / 2; i++)
	{
		if (arr[i] == arr[lenTemp])
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
	int arr1[4] = { 1,2,3,1 };
	char arr2[5] = { 'a' , '2' , 'v' , '2' , 'a'};
	


	std::cout << palindromeArr(arr1, 4) << std::endl;
	std::cout << palindromeArr(arr2,5) << std::endl;
	
	std::cout << "\n\n\n";
	return 0;
}
