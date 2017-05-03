#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>


//This program figures out the false triangles for advent day 3
using namespace std;

int main(int argc, char* argv[])
{
	



	
	vector<int> vals;
	for (int i = 0; i < 3; i++)
		vals.push_back(0);
	fstream in;
	int temp = 0;
	int smallerSum = 0;
	int max, index;
	int numberOfNonTriangles = 0;
	in.open(argv[1]);
	while (!in.eof())
	{
		smallerSum = 0;
		max = 0;
		index = 0;
		for(int i = 0; i < 3; i++)
			in >> vals[i];
		auto biggest = max_element(begin(vals), end(vals));
		max = *biggest;
		index = distance(begin(vals), biggest);
		//cout << max << endl;
    	// so index is the index that we do not add.
		for (int i = 0; i < 3; i++)
		{
			if (i != index)
			{
				smallerSum += vals[i];
			}
			else
			{
				//Do nothing
			}
		}
		if (smallerSum > vals[index])
			numberOfNonTriangles++;
		temp = 0;
	}
	cout << "numberOfNonTriangles = " << numberOfNonTriangles << endl;

	return 0;

}