#include<iostream>
#include<stdio.h>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

	int key;
	ofstream fileout("keys.txt");
   	if(!fileout) {
    	cout << "Cannot open file!" << endl;
      	exit (0);
	}

    while (key!=(0xffffffff))
    {
        fileout<<(bitset<32>)key<<endl;
        key++;
    }

    fileout.close();
    
    return 0;
}