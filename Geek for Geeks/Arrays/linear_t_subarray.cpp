// #include <iostream>

// using namespace std;

// int main()
// {
    
//     int arr[] = {1,2,3};
//     int s = 3;

//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             if (sum ==s)
//             {
//                 for (size_t p = i; p <= j; p++)
//                 {
//                   cout<<arr[p]<<" ";
                    
//                 }

//                 //    cout<< arr[j]<<"="<<j<<arr[i]<<"="<<i<<endl;
//             }
//         }

        
//     }
// }

#include <iostream>

using namespace std;

int main()
{
    
    int arr[] = {1,2,3};
    int s = 3;

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum ==s)
            {
                for (size_t p = i; p <= j; p++)
                {
                  cout<<arr[p]<<" ";
                    
                }

                //    cout<< arr[j]<<"="<<j<<arr[i]<<"="<<i<<endl;
            }
        }
        return 0;
        
    }
}