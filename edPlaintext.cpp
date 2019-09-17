#include<iostream>
#include<stdio.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;

// Function to display the menu 
void menu() 
{ 
	cout << "Press 1 for Encryption\n"; 
	cout << "Press 2 for Decryption\n";
	cout << "Press 7 to exit\n"; 
} 

// Function for P-Box
void shuffle(bitset<32> b, bitset<32> &a)
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

//Function for Encryption/ Decryption
bitset<32> cryptofy(bitset<32> input, bitset<32> key)
{
	bitset<32> bs;
	shuffle(input,bs);
	key.flip();
	bs^=key;
	bitset<32> output;	
	shuffle(bs,output);
	return output;
}

/** 
Function for Encryption
bitset<32> encrypt(bitset<32> input, bitset<32> key)
{
	bitset<32> bs;
	shuffle(input,bs);
	key.flip();
	bs^=key;
	bitset<32> ct;	
	shuffle(bs,ct);
	return ct;
}

Function for Decryption
bitset<32> decrypt(bitset<32> input, bitset<32> key)
{
	bitset<32> bs;
	shuffle(input,bs);
	key.flip();
	bs^=key;
	bitset<32> pt;	
	shuffle(bs,pt);
	return pt;
}
**/

string strToBinary(string s) 
{ 
    int n = s.length(); 
    string binary="";
    for (int i = 0; i <= n; i++) 
    { 
        // convert each char to ASCII value 
        int val = int(s[i]); 
  
        // Convert ASCII value to binary 
        string bin = ""; 
        while (val > 0) 
        { 
            (val % 2)? bin.push_back('1') : 
                       bin.push_back('0'); 
            val /= 2; 
        } 
        reverse(bin.begin(), bin.end()); 
  
        cout << bin << " ";
        binary.append(bin);
    } 
    return binary;
} 

void result(int choice, bitset<32> key)
{
	if (choice == 1)
	{
	    string a;
	    cout<< "Enter the plain text: ";
		cin>>a;
		a=strToBinary(a);
		bitset<32> arr(a);
		cout<<arr;
		cout<< "\nCipher Text: " << cryptofy(arr, key);
	}

	else if (choice ==2)
	{
		string cipherText;
		cout<< "Enter the cipher text: ";
		cin>>cipherText;
		bitset<32> ct(cipherText);
		
		//Convert Binary output to ASCII then ASCII to char
		cout<< "\nPlain Text: " << (cryptofy(ct, key).to_string());     //BINARY
		
		//break into 8-bit pairs, then convert to ascii, followed by char
		cout<< "\nPlain Text: " << (int)(cryptofy(ct, key).to_ulong()); //ASCII
		cout<< "\n" << (char)(cryptofy(ct, key).to_ulong()); //CHAR
	}

	else if (choice == 7)
		exit(1);

}

void validate(int choice)
{
	if (choice == 1 || choice ==2 || choice ==7)
	    return;
	else
	{
		cout<< "Invalid choice";
		exit(0);
	}
}

int main()
{
	int choice;
	//unsigned int a;

	menu();
	cout << "Enter your choice:\n"; 
	cin>> choice;

	validate(choice);

	//cout<< "Input: ";
	//cin>>a; 

	//bitset<32> arr(a);
	bitset<32> key(0xffff0000);

	result(choice, key);
	//cout<< cryptofy(arr, key);
	
	return 0;
}
