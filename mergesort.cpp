#include <vector>
#include <iostream>
using namespace std;

void merge(vector<int> &arr, int L, int M, int R)
{
    vector<int> help;
    int p1 = L;
    int p2 = M + 1;
    while(p1 <= M && p2 <= R)
    {
        help.push_back(arr[p1] <= arr[p2]? arr[p1++] : arr[p2++]);
    }
    while(p1 <= M)
    {
        help.push_back(arr[p1++]);
    }
    while(p2 <= R)
    {
        help.push_back(arr[p2++]);
    }
    for(int i = 0; i < help.size(); i++)
    {
        arr[L+i] = help[i];
    }
}

void process(vector<int> &arr, int L, int R)
{
    if(L == R) // base case
    {
        return;
    }
    int mid = L + ((R-L)>>1);
    process(arr, L, mid);
    process(arr, mid+1, R);
    merge(arr, L, mid, R);
}

void mergeSort(vector<int> &arr)
{
    if(arr.empty() || arr.size() < 2)
    {
        return;
    }
    process(arr, 0, arr.size() -1);

}

// write test cases here and check results
int main()
{
    vector<int> arr{1, 5, 4, 3, 6, 8, 1};
    
     mergeSort(arr);
    
    for(int i = 0; i<arr.size(); i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
    
    std::cout<< arr.size()<<endl; 
    return 0;
}