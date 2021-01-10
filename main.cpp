#include <iostream>
#define W ((c|~d)&b)&~(f|d|a&e)      // change the expression here to find its truth table(no spaces)
#define N 6                          // change number of variables here
using namespace std;
typedef char bit;

class TruthTable{
    public: int i,j,k,res;
    public: int a,b,c,d,e,f;
    public: bool answer;
    void run(){}
};

// class JK which is child class of parent class TruthTable
class JK: public TruthTable{
public:
    bit jk(bit J,bit K,bit Q){
        return (J&~(Q))|(Q&~(K));
    }
    void run(){                             // overriding of run() function
        cout << "Truth Table of JK flip flop\n";
        cout << "J  K  Q(t) | Q(t+1)" << endl;
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                for (k = 0; k < 2; k++) {
                    res = jk(i, j, k);
                    cout << i << "  " << j << "  " << k << "  ";
                    cout << "  | " << res << endl;
                }
            }
        }
    }
};

// class SR which is child class of parent class TruthTable
class SR: public TruthTable{
public:
    bit sr(bit S,bit R,bit Q){
        return S|((~R)&Q);
    }
    void run(){                                 // overriding of run() function
        cout << "Truth Table of SR flip flop\n";
        cout << "S  R  Q(t) | Q(t+1)" << endl;
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                for (k = 0; k < 2; k++) {
                    if(i==1 & j==1){
                        cout << i << "  " << j << "  " << k << "  ";
                        cout << "  | " << "indeterminate" << endl;
                    }else {
                        res = sr(i, j, k);
                        cout << i << "  " << j << "  " << k << "  ";
                        cout << "  | " << res << endl;
                    }
                }
            }
        }
    }
};

// class D is another child class of Truthtable
class D: public TruthTable{
public:
    bit d(bit D){
        return D;
    }
    void run(){                                 // overriding run()
        cout << "Truth Table of D flip flop\n";
        cout << "D | Q(t) | Q(t+1)" << endl;
        for (i = 0; i < 2; i++) {
            res = d(i);
            cout << i;
            cout << " | "<<"x    | " << res << endl;
        }
    }
};

// class T is another child class of TruthTable
class T: public TruthTable{
public:
    bit t(bit T,bit Q){
        return  T&(~Q)|(~T)&Q;
    }
    void run(){                     // further overriding of run()
        cout << "Truth Table of T flip flop\n";
        cout << "T  Q(t) | Q(t+1)" << endl;
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                res = t(i,  j);
                cout << i << "  " << j << "  ";
                cout << "  | " << res << endl;
            }
        }
    }
};

// class Equation is another child class of TruthTable
class Equation: public TruthTable {
public:
    void two();
    void three();
    void four();
    void five();
    void six();
};
void Equation::two() {
    bool answer;
    int a,b,c,d,e,f;
    cout << "-----------------------" << endl;
    cout << "| a  |  b  |"  << " --> op" <<"|"<< endl;
    cout << "-----------------------" << endl;
    for(a=0; a<=1; a++) {
        for(b=0; b<=1; b++) {
            answer = W ;
            cout <<"| "<< a<<"  |  "<<b<<"  |"<<" --> "<<answer<<" |"<<endl;
        }
    }
};

void Equation::three() {
    bool answer;
    cout << "----------------------------" << endl;
    cout << "| a  |  b  |  c  |"  << " --> op" <<"|"<< endl;
    cout << "----------------------------" << endl;
    for(a=0; a<=1; a++) {
        for(b=0; b<=1; b++) {
            for(c=0; c<=1; c++) {

                answer = W ;
                cout <<"| "<< a<<"  |  "<<b<<"  |  "<<c<<"  |"<<" --> "<<answer<<" |"<<endl;
            }
        }
    }
};

void Equation::four() {
    bool answer;
    cout << "---------------------------------" << endl;
    cout << "| a  |  b  |  c  |  d  |"  << " --> op" <<"|"<< endl;
    cout << "---------------------------------" << endl;
    for(a=0; a<=1; a++) {
        for(b=0; b<=1; b++) {
            for(c=0; c<=1; c++) {
                for(d=0; d<=1; d++) {

                    answer =  W;
                    cout <<"| "<< a<<"  |  "<<b<<"  |  "<<c<<"  |  "<<d<<"  |"<<" --> "<<answer<<" |"<<endl;
                }
            }
        }
    }
};

void Equation::five() {
    bool answer;
    cout << "--------------------------------------" << endl;
    cout << "| a  |  b  |  c  |  d  |  e  |"  << " --> op" <<"|"<< endl;
    cout << "--------------------------------------" << endl;
    for(a=0; a<=1; a++) {
        for(b=0; b<=1; b++) {
            for(c=0; c<=1; c++) {
                for(d=0; d<=1; d++) {
                    for(e=0; e<=1; e++) {
                        answer =  W;
                        cout <<"| "<< a<<"  |  "<<b<<"  |  "<<c<<"  |  "<<d<<"  |  "<<e<<"  |"<<" --> "<<answer<<" |"<<endl;
                    }
                }
            }
        }
    }
};

void Equation::six() {
    cout << "-------------------------------------------" << endl;
    cout << "| a  |  b  |  c  |  d  |  e  |  f  |"  << " --> op" <<"|"<< endl;
    cout << "-------------------------------------------" << endl;
    for(a=0; a<=1; a++) {
        for(b=0; b<=1; b++) {
            for(c=0; c<=1; c++) {
                for(d=0; d<=1; d++) {
                    for(e=0; e<=1; e++) {
                        for(f=0; f<=1; f++) {
                            answer = W ;
                            cout <<"| "<< a<<"  |  "<<b<<"  |  "<<c<<"  |  "<<d<<"  |  "<<e<<"  |  "<<f<<"  |"<<" --> "<<answer<<" |"<<endl;
                        }
                    }
                }
            }
        }
    }
};

int main(){
    int C;
    cout<<"1. JK"<<endl;
    cout<<"2. SR"<<endl;
    cout<<"3. D"<<endl;
    cout<<"4. T"<<endl;
    cout<<"5. equation"<<endl;
    cout<<"0. quit"<<endl;
    cout<<"Choice: ";
    cin>>C;

    if (C==1) {
        JK jk;
        jk.run();
        cout<<"---------------------------------------------------------"<<endl;
        main();
    }else if (C==2) {
        SR sr;
        sr.run();
        cout<<"---------------------------------------------------------"<<endl;
        main();
    }else if (C==3) {
        D d;
        d.run();
        cout<<"---------------------------------------------------------"<<endl;
        main();
    }else if(C==4){
        T t;
        t.run();
        cout<<"---------------------------------------------------------"<<endl;
        main();
    }else if(C==5){
        Equation myObj;
        if( N == 2) {
            myObj.two();
        }else if( N == 3) {
            myObj.three();
        }else if( N == 4) {
            myObj.four();
        }else if( N == 5) {
            myObj.five();
        }else if( N == 6) {
            myObj.six();
        }
        cout<<"---------------------------------------------------------"<<endl;
        main();
    }else if(C==0){
        return 0;
    }else{
        cout<<"Invalid Choice"<<endl;
        cout<<"---------------------------------------------------------"<<endl;
        main();
    }
}
