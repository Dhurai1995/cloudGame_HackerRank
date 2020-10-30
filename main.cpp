#include<iostream>
#include<vector>
int jumpingOnClouds(std::vector<int>);

int main()
{
	int num;
	std::vector<int> c;
	int finVal = 0;
	std::cin >> num;

	for (int i = 0; i < num; i++)
	{
		std::cin >> finVal;
		c.push_back(finVal);
	}
	finVal = 0;
	finVal = jumpingOnClouds(c);
}

int jumpingOnClouds(std::vector<int> c)
{
	int jump = 0;
	for (int currPosition = 0; currPosition < (c.size()-2);)
	{
		//std::cout <<"current position"<< currPosition<<"\n";
		int firstPosVal = c[currPosition + 1];
		int secondPosVal = c[currPosition + 2];
		if (firstPosVal == 0 & secondPosVal == 0)
			currPosition = currPosition + 2;
		else if (firstPosVal == 1)
			currPosition += 2;
		else
			currPosition += 1;
		jump++;
	}

	//if (c.size() > 2 & c[c.size() - 1] == 0 & c[c.size() - 2] == 0 & c[c.size() - 3] != 0)
	//	jump=jump;
	//else if (c[c.size() - 2] == 0)
	//	jump++;

	if (c.size() > 2)
	{
		if (c[c.size() - 2] == 0 & c[c.size() - 3] != 0)
			jump++;
	}
	else if (c[c.size() - 2] == 0)
		jump++;

	std::cout << "Jump = " << jump;
	return jump;
}

