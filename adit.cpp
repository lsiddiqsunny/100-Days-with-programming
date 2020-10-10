#include <iostream>
#include<cstring>
using namespace std;

int getLength(char *str){
    int len = 0;
    while(str[len])
        len++;

    return len;
}

int stringToInt(char* str)
{
    int res = 0;
    int i = 0;
    while(str[i]){
        res = res * 10 + str[i] - '0';
        i++;
    }
    return res;
}

char* intToString(int number, int length){
    char * temp;
    temp = new char[length];
    temp[length] = '\0';
    for(int i=(length-1); i>=0; i--){
        temp[i] = number % 10 + '0';
        number = number / 10;
    }

    return temp;
}

int totalDigit(int n)
{
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

class StringMath{

    char * p;

public:
    StringMath(){
        p = new char[20];
        p[0]='\0';
    }

    StringMath(char *str){
        int i = 0;
        int len = getLength(str);
        //cout << len;
        p = new char[len+1];
        i = 0;
        while(str[i]){
            p[i] = str[i];
            i++;
        }
        p[i]='\0';
        //cout<<p<<endl;
    }
    StringMath(const StringMath& sm){
        char * temp;
        temp = sm.getp();
        p = new char [getLength(temp)+1];
        int i = 0;
        while(temp[i]){
            p[i] = temp[i];
            i++;
        }
        p[i]='\0';
    }

    char* getp() const{
        return p;
    }

    void setp(char * s){
        p = new char[getLength(s)+1];
        int i = 0;
        while(s[i]){
            p[i] = s[i];
            i++;
        }
        p[i]='\0';
    }

    void print(){
        cout << p;
        cout << endl;
    }

    void operator = (StringMath str);
    //StringMath& operator + (StringMath &str);

    StringMath operator + (StringMath &str){
        int i=0;
        char * temp;
        temp = str.getp();

        int summation = stringToInt(p) + stringToInt(temp);
        int newLength = totalDigit(summation);
        //cout<<newLength<<endl;
        StringMath res(intToString(summation,newLength));
        //cout << intToString(summation,newLength) << endl;

        //res.print();

        return res;
    }

    ~StringMath(){
        delete [] p;
    }
};

void StringMath::operator=(StringMath sm){
        int i=0;
        char * temp;
        temp = sm.getp();
        //cout<<temp<<endl;
        int len = getLength(temp);
        if(getLength(p) < len){
            delete[] p;
            p = new char [len+1];
        }
        while(temp[i]){
            p[i] = temp[i];
            i++;
        }
        p[i]='\0';
        return ;
}

//StringMath& StringMath::operator+(StringMath &sm){
//        int i=0;
//        char * temp;
//        temp = sm.getp();
//
//        int summation = stringToInt(p) + stringToInt(temp);
//        int newLength = totalDigit(summation);
//
//        if(newLength > getLength(p)){
//            delete [] p;
//            p = new char [totalDigit(summation)];
//        }
//
//        p = intToString(summation,newLength);
//        return *this;
//}

int main( ) {
    char s[20] = "123" ;
    
    StringMath S1;
    StringMath S2(s);
    strcpy(s, "757");
    StringMath S3(s);
    strcpy(s, "220");
    StringMath S4(s);
    StringMath S5;

    //S1 = S4;
    //S1.print();
    //S4.print();

   // (S3+S4+S2).print();

    // S2.print();
    // S3.print();
    //(S2+S3).print();
    S1 = S2+S3;



    S1.print();
    S2.print();
    S3.print();

    return 0;
}