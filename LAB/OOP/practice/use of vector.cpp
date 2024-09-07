#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int arr[]={10,5,3,9,4,5,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr,arr+n);
    cout<<"Vector is:";
    for(int i=0;i<n;i++)cout<<vect[i]<<" ";
    cout<<endl;
    cout<<endl;
    cout<<"Sorting the vector:";
    sort(vect.begin(),vect.end());
    for(int i=0;i<n;i++)cout<<vect[i]<<" ";
    cout<<endl;
    cout<<endl;
    cout<<"Reversing the vector:";
    reverse(vect.begin(),vect.end());
    for(int i=0;i<n;i++)cout<<vect[i]<<" ";
    cout<<endl;
    cout<<endl;
    cout<<"Maximum element: "<<*max_element(vect.begin(),vect.end())<<endl;
    cout<<endl;
    cout<<"Miniimum element: "<<*min_element(vect.begin(),vect.end())<<endl<<endl;
    cout<<"Summation of element: "<<accumulate(vect.begin(),vect.end(),0)<<endl<<endl;

}

