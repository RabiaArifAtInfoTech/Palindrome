#include<iostream>
#include<vector>


template<typename T>
bool palindromeVec(std::vector<T> vec)
{
	bool flag = false;

	int count = 0;

	int len = vec.size() / 2;
	std::cout << len << std::endl;
	

	for (int i = 0; i < len; i++)
	{
		auto i1 = vec.begin();
		auto i2 = vec.end()-1;
		std::cout << *i1 << " " <<  *i2 << std::endl;

		if (*i1 == *i2)
			count++;

		//std::vector<T>::iterator it;

		auto it = vec.begin();
		vec.erase(it);
		vec.pop_back(); 
	}
	if (count == len)
	{
		flag = true;
	}


	return flag;
}

int main()
{
	std::vector<int> vec1;

	vec1.push_back(4);
	vec1.push_back(7);
	vec1.push_back(4);
	vec1.push_back(7);
	vec1.push_back(7);
	vec1.push_back(4); 

	//std::cout << vec1.size();

	std::cout << palindromeVec(vec1) << std::endl;

	std::vector<char> vec2;
	vec2.push_back('g');
	vec2.push_back('j');
	vec2.push_back('k');
	vec2.push_back('j');
	vec2.push_back('g');

	std::cout << palindromeVec(vec2) << std::endl;


	std::cout << "\n\n\n";
	return 0;
}
