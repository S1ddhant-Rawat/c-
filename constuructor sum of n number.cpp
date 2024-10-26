#include <iostream>
using namespace std;
class sumofn{
    int sum;
    int n;
public:
   sumofn(int num){
       n=num;
       sum=(n*(n+1))/2;
   }
   void displaysum(){
       cout<<"The sum of first "<<n<<" natural numbers is:"<<sum<<endl;}
};

int main() {
    int n;
    cout << "Enter number ";
    cin>>n;
    sumofn
    sumObj(n);
    sumObj.displaysum();

    return 0;
}