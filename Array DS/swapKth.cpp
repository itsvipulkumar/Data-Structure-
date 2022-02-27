/* swap Kth elemnets
K=3;
1 2 3 4 5 6 7 8
after swap 1 2 6 4 5 3 7 8*/

#include <iostream>
using namespace std;
int main()

{
    int k,N;
    cout<<"Enter the size of array : ";
    cin>>N;
    int arr[N];
    cout<<"Enter the value of K : ";
    cin>>k;
    cout<<"Enter array elements : ";
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
    int l = sizeof(arr) / 4;
    cout<<"\n____Before swaping____";
    for (int i = 1; i <= N; i++)
    {
        cout << arr[i] << " ";
    }
    int last = (l - k) + 1;
 
    cout << "\n\n____After Swaping____\n";

    arr[k] = arr[k] + arr[last];
    arr[last] = arr[k] - arr[last];
    arr[k] = arr[k] - arr[last];
    for (int i = 1; i <= N; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
