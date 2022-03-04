#include<iostream>
using namespace std;

int main(){
	int i, x;
	char str[75];
	
	cout<<"Please enter a string:\t";
	cin>>str;

	cout<<"\nPlease chose from thr following options:\n";
	cout<<"1. = Encrypt the string.\n";
	cout<<"2. = Decrypt the string.\n";
	cin>>x;

	//Switch using case statements
	switch(x){
		//first case for encrypting the string
		case 1:
			for(i=0; (i<75 && str[i]!='\0');i++)
				str[i]=str[i]+2; // the key for encryption is 3 that is added to the ASCII value. 	

		cout << "\nEncrypted String: "<<str<<endl;
			
		break;

		//second case for decrypting a string
		case 2:
			for (i=0; (i<75 && str[i]!='0');i++)
			str[i]=str[i]-2;// the key for encryption is the 3 that is subtrated to the ASCII value.
		cout << "\nDecrypted String: "<<str<< endl;

		break;
		default:
			cout<<"\nInvalid Input\n";
	}
	return 0;
}
