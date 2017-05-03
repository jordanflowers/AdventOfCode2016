#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

//Finds the first code to the bathroom in easter bunny HQ 
int main(int argc, char* argv[])
{
	vector<int> ar;
	int index = 4;
	for (int i = 1; i < 12; i++)
		ar.push_back(i);
	int k = 0;



	
	char dir;
	fstream in;
	in.open(argv[1]);
	while (!in.eof())
	{
		while ((dir != '\n') && (!in.eof()))
		{
			dir = in.get();
			switch (dir)
			{
				case 'U': 
					{
						switch (index)
						{
							case 0:
								{
									// Do nothing
									break;
								}
							case 1:
								{
									// Do nothing
									break;
								}
							case 2:
								{
									// Do nothing
									break;
								}
							case 3:
								{
									index = index - 3;
									break;
								}
							case 4:
								{
									index = index - 3;
									break;
								}
							case 5:
								{
									index = index - 3;
									break;
								}
							case 6:
								{
									index = index - 3;
									break;
								}
							case 7:
								{
									index = index - 3;
									break;
								}
							case 8:
								{
									index = index - 3;
									break;
								}
							default:
								cout << "Error" << endl;
								break;
						}
					break;
					}
				case 'R':
					{
						switch (index)
						{
							case 0:
								{
									index++;
									break;
								}
							case 1:
								{
									index++;
									break;
								}
							case 2:
								{
									// Do nothing
									break;
								}
							case 3:
								{
									index++;
									break;
								}
							case 4:
								{
									index++;
									break;
								}
							case 5:
								{
									// Do nothing
									break;
								}
							case 6:
								{
									index++;
									break;
								}
							case 7:
								{
									index++;
									break;
								}
							case 8:
								{
									// Do nothing
									break;
								}
							default:
								cout << "Error" << endl;
								break;
						}
					break;
					}
				case 'D':
					{
 						switch (index)
						{
							case 0:
								{
									index = index + 3;
									break;
								}
							case 1:
								{
									index = index + 3;
									break;
								}
							case 2:
								{
									index = index + 3;
									break;
								}
							case 3:
								{
									index = index + 3;
									break;
								}
							case 4:
								{
									index = index + 3;
									break;
								}
							case 5:
								{
									index = index + 3;
									break;
								}
							case 6:
								{
									// Do nothing
									break;
								}
							case 7:
								{
									// Do nothing
									break;
								}
							case 8:
								{
									// Do nothing
									break;
								}
							default:
								cout << "Error" << endl;
								break;
						}
					break;
					}
				case 'L':
					{
						switch (index)
						{
							case 0:
								{
									// Do nothing
									break;
								}
							case 1:
								{
									index--;	
									break;
								}
							case 2:
								{
									index--;
									break;
								}
							case 3:
								{
									// Do nothing
									break;
								}
							case 4:
								{
									index--;
									break;
								}
							case 5:
								{
									index--;
									break;
								}
							case 6:
								{
									// Do nothing
									break;
								}
							case 7:
								{
									index--;
									break;
								}
							case 8:
								{
									index--;
									break;
								}
							default:
								cout << "Error" << endl;
								break;
						}
					break;
					}
			}

			

		}
		cout << index << endl;
		dir = in.get();
	}

	return 0;

}