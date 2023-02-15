#include "mergesort.h"
#include <iostream>

using namespace std;

// write test cases here and check results
void test_merge_sort()
{
    vector<int> arr{1, 5, 4, 3, 6, 8, 1};
    
     mergeSort(arr);
    
    for(int i = 0; i<arr.size(); i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
    
    std::cout<< arr.size()<<endl; 
}