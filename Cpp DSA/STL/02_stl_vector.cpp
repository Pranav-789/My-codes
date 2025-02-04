#include<iostream>
#include<vector>
using namespace std;
//vector is dynamic
int main() {

    vector<int> v;
    vector<int> a(5, 1); //5 is size and 1 indicates that every element is initialized by 1

    vector<int> last(a); //copies vector from one into another
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i <<" ";
    }cout<<endl;

    cout<<"Size-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size-> "<<v.capacity()<<endl; //output:4;
    //when you put extra element in vector than it's size, the size of the vector doubles
    cout<<"Size-> "<<v.size()<<endl;

    cout<<"Element at 2nd index "<<v.at(2)<<endl;
    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i <<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i <<" ";
    }cout<<endl;

    cout<<"Size before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"Size after clear size "<<v.size()<<endl;
    //clearing size empties vector but capaccity remains intact

}
