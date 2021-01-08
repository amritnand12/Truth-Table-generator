#include<iostream>

#define K ((c|~d)&b)&~(f|d|a&e)// change the expression here to find its truth table(no spaces)
#define N 6 // change number of variables here
using namespace std;
class Truthtable {
	public:
		void two();
		void three();
		void four();
		void five();
		void six();
};
void Truthtable::two() {
	cout<<"in function 2";
	bool answer;
	int a,b,c,d,e,f;
	bool aBool, bBool;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "|  a  |  b  | "  << "  |" << endl;
	cout << "----------------------------------------------------------------------" << endl;
	for(a=0; a<=1; a++) {
		for(b=0; b<=1; b++) {
			answer = K ;
			cout << a<<b<<"   "<<answer<<endl;
		}
	}
};

void Truthtable::three() {
	bool answer;
	cout<<"in function 3";
	int a,b,c,d,e,f;
	bool aBool, bBool, cBool;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "|  a  |  b  |  c  |   "  << "  |" << endl;
	cout << "----------------------------------------------------------------------" << endl;
	for(a=0; a<=1; a++) {
		for(b=0; b<=1; b++) {
			for(c=0; c<=1; c++) {

				answer = K ;
				cout << a<<b<<c<<"   "<<answer<<endl;
			}
		}
	}
};

void Truthtable::four() {
	cout<<"in function 4";
	bool answer;
	int a,b,c,d,e,f;
	bool aBool, bBool, cBool, dBool;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "|  a  |  b  |  c  |  d    "  << "  |" << endl;
	cout << "----------------------------------------------------------------------" << endl;
	for(a=0; a<=1; a++) {
		for(b=0; b<=1; b++) {
			for(c=0; c<=1; c++) {
				for(d=0; d<=1; d++) {

					answer =  K;
					cout << a<<b<<c<<d<<"   "<<answer<<endl;
				}
			}
		}
	}
};

void Truthtable::five() {
	cout<<"in function 5";
	bool answer;
	int a,b,c,d,e,f;
	bool aBool, bBool, cBool, dBool, eBool;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "|  a  |  b  |  c  |  d  |  e  |  "  << "  |" << endl;
	cout << "----------------------------------------------------------------------" << endl;
	for(a=0; a<=1; a++) {
		for(b=0; b<=1; b++) {
			for(c=0; c<=1; c++) {
				for(d=0; d<=1; d++) {
					for(e=0; e<=1; e++) {
						answer =  K;
						cout << a<<b<<c<<d<<e<<"   "<<answer<<endl;
					}
				}
			}
		}
	}
};

void Truthtable::six() {
	cout<<"in function 6";
	bool answer;
	int a,b,c,d,e,f;
	bool aBool, bBool, cBool, dBool, eBool,fbool;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "|  a  |  b  |  c  |  d  |  e  |  f  |"  << "  |" << endl;
	cout << "----------------------------------------------------------------------" << endl;
	for(a=0; a<=1; a++) {
		for(b=0; b<=1; b++) {
			for(c=0; c<=1; c++) {
				for(d=0; d<=1; d++) {
					for(e=0; e<=1; e++) {
						for(f=0; f<=1; f++) {
							answer = K ;
							cout << a<<b<<c<<d<<e<<f<<"   "<<answer<<endl;
						}
					}
				}
			}
		}
	}
};




int main() {
	Truthtable myObj;
	if( N == 2) {
		myObj.two();
	}
	if( N == 3) {
		myObj.three();
	}
	if( N == 4) {
		myObj.four();
	}
	if( N == 5) {
		myObj.five();
	}
	if( N == 6) {
		myObj.six();
	}
	return 0;
}
