#include "MinMaxHeap.h"

#include <vector>
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace minmax;
using namespace std;

int main()
{
    MinMaxHeap<int> heap;

    string input;
    int data;
    
    //for file input,output
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    while(true)
    {
        cin >> input;
        
        //Insert Integer into heap
        if(input=="I") {
            cin >> data;
            heap.push(data);
            input = "";
        }
        //Display Minimum Number
        
        else if(input=="Min")
            cout << heap.findMin()<<endl;
        //Display Maximum Number
        
		else if(input=="Max")
            cout << heap.findMax()<<endl;
         //Delete Minimum Number
        
		else if(input=="DelMin")
            heap.popMin();
        
        //Delete Maximum Number
		else if(input=="DelMax")
            heap.popMax();
        
        //Display Min-Max Heap Size
		else if(input=="Size")
            cout << heap.size()<<endl;
		else
            break;
    }
}