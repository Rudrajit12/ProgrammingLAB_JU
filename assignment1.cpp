#include <fstream>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	fstream fin;
	fin.open("sample.txt",ios::in);
	char ch;
	int c=0;

	map<char, int>charcount{ 
								{ 'a', 0 },{ 'b', 0 },{ 'c', 0 },{ 'd', 0 },{ 'e', 0 },
								{ 'f', 0 },{ 'g', 0 },{ 'h', 0 },{ 'i', 0 },{ 'j', 0 },
								{ 'k', 0 },{ 'l', 0 },{ 'm', 0 },{ 'n', 0 },{ 'o', 0 },
								{ 'p', 0 },{ 'q', 0 },{ 'r', 0 },{ 's', 0 },{ 't', 0 },
								{ 'u', 0 },{ 'v', 0 },{ 'w', 0 },{ 'x', 0 },{ 'y', 0 },
								{ 'z', 0 },{ '1', 0 },{ '2', 0 },{ '3', 0 },{ '4', 0 },
								{ '5', 0 },{ '6', 0 },{ '7', 0 },{ '8', 0 },{ '9', 0 },
								{ '0', 0 },{ '*', 0 },{ 'A', 0 },{ 'B', 0 },{ 'C', 0 },
								{ 'D', 0 },{ 'E', 0 },{ 'F', 0 },{ 'G', 0 },{ 'H', 0 },
								{ 'I', 0 },{ 'J', 0 },{ 'K', 0 },{ 'L', 0 },{ 'M', 0 },
								{ 'N', 0 },{ 'O', 0 },{ 'P', 0 },{ 'Q', 0 },{ 'R', 0 },
								{ 'S', 0 },{ 'T', 0 },{ 'U', 0 },{ 'V', 0 },{ 'W', 0 },
								{ 'X', 0 },{ 'Y', 0 },{ 'Z', 0 } 
            			};
    map<char, int>::iterator i; 
    int k=0;

	while(!fin.eof())
	{
		ch=fin.get();
		c=0;
		for (i = charcount.begin(); i !=(charcount.end()); i++)
		{		
			if(i->first==ch && ch!='*')
				{i->second++; c=1;break;}
		} 
		if(c==0 && ch!=' ')
			charcount['*']++;

	}
	charcount['*']	= charcount['*']-2;
	for (i = charcount.begin(); i != charcount.end(); i++) 
		cout<<i->first<<" "<<i->second<<endl;
	cout<<endl;
	fin.close();

	return 0;
}
