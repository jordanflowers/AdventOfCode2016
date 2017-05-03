#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>


//This program finds how far away Easter Bunny Headquarters is
//It also finds the first path cross
using namespace std;

int main(int argc, char* argv[])
{

	fstream file;
	char dir = 'N';
	char changeDir;
	int steps = 0;
	vector<int> final;
	vector<string> hash;
	
	for(int i = 0; i < 2; i++)
	{
		final.push_back(0);
	}
	file.open(argv[1]);
	while (!file.eof())
	{ 
		file >> changeDir;
		if (changeDir == 'L')
		{
			if (dir == 'N')
			{
				dir = 'W';
			}
			else if (dir == 'W')
			{
				dir = 'S';
			}
			else if (dir == 'E')
			{
				dir = 'N';
			}
			else if (dir == 'S')
			{
				dir = 'E';
			}
		}
		else if (changeDir == 'R')
		{
			if (dir == 'N')
			{
				dir = 'E';
			}
			else if (dir == 'W')
			{
				dir = 'N';
			}
			else if (dir == 'E')
			{
				dir = 'S';
			}
			else if (dir == 'S')
			{
				dir = 'W';
			}	
		}
		file >> steps;
		if (dir == 'N')
		{
			for (int i = steps; i > 0; i--){
				string myStr;
				myStr += final[0];
				myStr += ", ";
				myStr += final[1];
				vector<string>::iterator it;
				it = find(hash.begin(), hash.end(), myStr);
				if (it != hash.end())
					cout << "We have a cross " << (abs(final[0]) + abs(final[1])) << " blocks away." << endl;
				hash.push_back(myStr);
				final[1]++;
			}

		}
		else if (dir == 'W')
		{
			for (int i = steps; i > 0; i--){
				string myStr;
				myStr += final[0];
				myStr += ", ";
				myStr += final[1];
				vector<string>::iterator it;
				it = find(hash.begin(), hash.end(), myStr);
				if (it != hash.end())
					cout << "We have a cross " << (abs(final[0]) + abs(final[1])) << " blocks away." << endl;
				hash.push_back(myStr);
				final[0]--;
			}
		}
		else if (dir == 'E')
		{
			for (int i = steps; i > 0; i--){
				string myStr;
				myStr += final[0];
				myStr += ", ";
				myStr += final[1];
				vector<string>::iterator it;
				it = find(hash.begin(), hash.end(), myStr);
				if (it != hash.end())
					cout << "We have a cross " << (abs(final[0]) + abs(final[1])) << " blocks away." << endl;
				hash.push_back(myStr);
				final[0]++;
			}
		}
		else if (dir == 'S')
		{
			for (int i = steps; i > 0; i--){
				string myStr;
				myStr += final[0];
				myStr += ", ";
				myStr += final[1];
				vector<string>::iterator it;
				it = find(hash.begin(), hash.end(), myStr);
				if (it != hash.end())
					cout << "We have a cross " << (abs(final[0]) + abs(final[1])) << " blocks away." << endl;
				hash.push_back(myStr);
				final[1]--;
			}
		}
		
	}

	int x, y;
	x = abs(final[0]);
	y = abs(final[1]);

	cout << "Easter Bunny Headquarters is " << x + y << " blocks away." << endl;


	return 0;
}
