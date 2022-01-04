#include "Utils.h"

vector<string> Utils::ReadFile(string name)
{
	ifstream MyFile;
	MyFile.open(name, ifstream::in);
	string tempstring;
	vector<string> result;
	while (getline(MyFile, tempstring))
		result.push_back(tempstring);
	
	
	return (move(result));
}

vector<map<string, string>> Utils::ParseStrings(vector<string> s)
{
	return vector<map<string, string>>();
}
