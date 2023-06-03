#include<iostream>
#include<queue>

using namespace std;
int main()
{
    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int,vector<int>,greater<int> > mini; 

    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);

    int sizeMini = mini.size();
    for (int i = 0; i < sizeMini; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    
    // for maximum heap
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);

    int sizeMax = maxi.size();

    int size = maxi.size();
    for (int i = 0; i < sizeMax; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

    return 0;
}