#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

void shuffle(bitset<32> b, bitset<32> &a)
{
	
	for(int i=0; i<=b.size()-1; i++)
	{
		a[0]=b[0];
		a[1]=b[16];
		a[2]=b[8];
		a[3]=b[24];
		a[4]=b[4];
		a[5]=b[20];
		a[6]=b[12];
		a[7]=b[28];
		a[8]=b[2];
		a[9]=b[18];
		a[10]=b[10];
		a[11]=b[26];
		a[12]=b[6];
		a[13]=b[22];
		a[14]=b[14];
		a[15]=b[30];
		a[16]=b[1];
		a[17]=b[17];
		a[18]=b[9];
		a[19]=b[25];
		a[20]=b[5];
		a[21]=b[21];
		a[22]=b[13];
		a[23]=b[29];
		a[24]=b[3];
		a[25]=b[19];
		a[26]=b[11];
		a[27]=b[27];
		a[28]=b[7];
		a[29]=b[23];
		a[30]=b[15];
		a[31]=b[31];
		
	}
	
		
}

void encrypt(bitset<32> input, bitset<32> key)
{
	bitset<32> bs;
	shuffle(input,bs);
	//cout<<bs<<endl;
	key.flip();
	//cout<<key<<endl;
	bs^=key;
	//cout<<bs<<endl;
	bitset<32> ct;	
	shuffle(bs,ct);
	cout<<"The cipher text: " << ct<<endl;
	
	
}

int main()
{

	unsigned int a;
	cout<< "Enter the plain text: ";
	cin>>a; 
	cout<<endl;
	bitset<32> arr(a);
	bitset<32> key(0xffff0000);
	encrypt(arr, key);
	
	return 0;
}
