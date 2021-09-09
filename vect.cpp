#include <iostream>
#include <vector>
using namespace std;


void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i] <<" ";
        
    }
    cout<<endl;
    
}

int main() {

    vector<int> abc ;
    int num,siz;
    cin>>siz;


    for (int i = 0; i < siz; i++)
    {
        cout<<"enter few number to add this vector: ";
        cin>>num;
        abc.push_back(num);
    }

    cout<<" this is in your vector";
    
    display (abc);



    return 0;
}
