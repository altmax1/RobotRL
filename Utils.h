#pragma once

#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <fstream>


using namespace std;
class Utils
{
private:

public:
	vector <string> ReadFile(string name);
	vector <map <string, string>> ParseStrings(vector <string> s);

};

