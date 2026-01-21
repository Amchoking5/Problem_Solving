using namespace std;
#include <iostream>
#include <string>

int main(){
	string a,b,result;
	cin >> a >>b;
	int lena=a.size();
	int lenb=b.size();
	int carry=0;
	
	if (lena > lenb)
    {
        string d;
        for (int i = 0; i < lena-lenb; i++)
            d += '0';
        b = d + b;
    }
    else
    {
        string d;
        for (int i = 0; i < lenb-lena; i++)
            d += '0';
        a = d + a;
    }
    while (a.size()!=0 && b.size() !=0)
    {
        int aback = a.back() - '0';
        int bback = b.back() - '0';
        int remain = (carry + aback + bback) % 10;
        carry = (carry + aback + bback) / 10;
        result = (char)(remain + '0') + result;
        a.pop_back();
        b.pop_back();
    }
    if(carry){
        result = (char)(carry+'0') + result;
    }
	cout << result;
}