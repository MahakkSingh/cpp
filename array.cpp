// #include <iostream>
// using namespace std;

// int main() {
//      int marks[] = {85,96,42,95,76};
//     //  int size = sizeof(marks);
//      int size = 5;
// for(int i=0;i<size;i++){
//     cout << marks[i] << endl;
// }

// return 0;
//  }

// #include <iostream>
// using namespace std;

// int main() {
//      int size = 5;
//      int marks[size];

// for(int i=0; i<size; i++){
//     cin >> marks[i];
// }
// for (int i=0; i<size; i++){
//     cout << marks [i] << endl;
// }
// return 0;
//  }

// #include <iostream>
// #include <climits>
// using namespace std;

// int main(){
//     int nums[5]= {85,63,87,99,76};
//     // int smallest= INT_MAX;
//     int largest= INT_MIN;

//     int size = 5;
//     for (int i=0; i<size; i++){
//         // if (nums[i]<smallest) {
//         //     smallest= nums[i];
//         // }
//         // smallest= min(nums[i],smallest);
//         largest= max(nums[i],largest);

//     }
//     // cout << "smallest =" << smallest <<endl;
//     cout << "largest =" << largest <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void changeArr(int arr[], int size){
//     cout << "in function\n";

//     for(int i=0; i<size; i++){
//         arr[i]= 2* arr[i];
//     }
//     // cout << "in function\n" << arr<< endl;
// }

// int main (){
//     int arr[]= {1,2,3};
//     changeArr(arr,3);
//     cout << "in main \n";
//     for(int i =0; i<3; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;

// }

// #include <iostream>
// using namespace std;

// int linearsearch(int arr[], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {1, 4, 5, 2, 8, 7, 3};
//     int target = 7;
//     int size = 7;

//     cout << linearsearch(arr, size, target) << endl;
//     return 0;
// }

// reverse an array

#include <iostream>
using namespace std;

void reverseArr(int arr[], int size)
{
    int start = 0, end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    reverseArr(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0; 
}
