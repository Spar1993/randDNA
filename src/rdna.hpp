#include <string>
#include <iostream>
#include <random>

using namespace std;

string randDNA(int seed,string bases,int n)
{
string sequence = "";
int square=-1;
int min=0;
	if (bases =="")
	{
	return "";
	}
int max=bases.size()-1;
git 
mt19937 eng1(seed);
uniform_int_distribution<> un(min,max);
	

for(int i=0; i<n; i++)
	{

	square=un(eng1);
	sequence +=bases[square];
	}
	
	return sequence;
	
}
	
