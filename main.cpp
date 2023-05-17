#include <iostream>

using namespace std;
void pole_kwadratu(){
    for(int i =1;i<=10;i++){
        for(int j =1;j<=i;j++){
            cout<<"$";
        }
        cout<<" "<<endl;
    }

}
int main()
{


    pole_kwadratu();



    return 0;
}