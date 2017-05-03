#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>


//Bathroom code for part two keypad
//D65C3
using namespace std;

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
									//Do nothing
									break;
								}
							case 1:
								{
									//Do nothing
									break;
								}
							case 2:
								{
									index = index - 2;
									break;
								}
							case 3:
								{
									//Do nothing
									break;
								}
							case 4:
								{
									//Do nothing
									break;
								}
							case 5:
								{
									index = index - 4;
									break;
								}
							case 6:
								{
									index = index - 4;
									break;
								}
							case 7:
								{
									index = index - 4;
									break;
								}
							case 8:
								{
									//Do nothing
									break;
								}
								case 9:
								{
									index = index - 4;
									break;
								}
								case 10:
								{
									index = index - 4;
									break;
								}
								case 11:
								{
									index = index - 4;
									break;
								}
								case 12:
								{
									index = index - 2;
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
									//Do nothing
									break;
								}
							case 1:
								{
									index++;
									break;
								}
							case 2:
								{
									index++;
									break;
								}
							case 3:
								{
									//Do nothing
									break;
								}
							case 4:
								{
									index++;
								}
							case 5:
								{
									index++;
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
								case 9:
								{
									index++;
									break;
								}
								case 10:
								{
									index++;
									break;
								}
								case 11:
								{
									//Do nothing	
									break;
								}
								case 12:
								{
									//Do nothing
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
									index = index + 2;
									break;
								}
							case 1:
								{
									index = index + 4;
									break;
								}
							case 2:
								{
									index = index + 4;
									break;
								}
							case 3:
								{
									index = index + 4;
									break;
								}
							case 4:
								{
									//Do nothing
									break;
								}
							case 5:
								{
									index = index + 4;
									break;
								}
							case 6:
								{
									index = index + 4;
									break;
								}
							case 7:
								{
									index = index + 4;
									break;
								}
							case 8:
								{
									//Do nothing
									break;
								}
								case 9:
								{
									//Do nothing
									break;
								}
								case 10:
								{
									index = index + 2;
									break;
								}
								case 11:
								{
									//Do nothing
									break;
								}
								case 12:
								{
									//Do nothing
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
									//Do nothing
									break;
								}
							case 1:
								{
									//Do nothing
									break;
								}
							case 2:
								{
									index--;
									break;
								}
							case 3:
								{
									index--;
									break;
								}
							case 4:
								{
									//Do nothing
									
									break;
								}
							case 5:
								{
									index--;
									break;
								}
							case 6:
								{
									index--;
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
								case 9:
								{
									//Do nothing
									
									break;
								}
								case 10:
								{
									index--;	
									break;
								}
								case 11:
								{
									index--;
									break;
								}
								case 12:
								{
									//Do nothing
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
		if(index < 9)
			cout << index+1;
		else
		{
			switch (index)
			{
				case 9:
					cout << "A";
					break;
				case 10: 
					cout << "B";
					break;
				case 11:
					cout << "C";
					break;
				case 12:
					cout << "D";
					break;
				default:
					cout << "error";
					break;
			}
		}
		dir = in.get();
	}
	cout << endl;

	return 0;

}