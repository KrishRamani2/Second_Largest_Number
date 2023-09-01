#include <iostream>
using namespace std;
int secondLargest(int arr[], int n) 
{
   int res = -1, largest =0;
   for(int i=1;i<n;i++)
   {
    if(arr[i]>arr[largest])
    {
        res=largest;
        largest =i;
    }
    else if(arr[i]|| arr[i]>arr[res])
    {
        if(res==-1|| arr[i]>arr[res])
        res =i;
    }
   }
   return res;

}
int main() 
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int second_Largest = secondLargest(arr, n);
    if (second_Largest == -1)
        cout << "Second largest didn't exit\n";
    else
        cout << "Second largest : " << arr[second_Largest];
}