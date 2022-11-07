#include <iostream> 
using namespace std;
int sums(string chars)
{
    string temp="";
    int sum = 0;
    for (char ch:chars){
        if(isdigit(ch))
        temp +=ch;
        else{
            sum += atoi(temp.c_str());
            temp ="";
        }
    }

    return sum + atoi(temp.c_str());
}

int main(){
    string chars = "hello  1 something 2 is3 bur4ning now 5";
    cout<<sums(chars);

    return 0;
}
