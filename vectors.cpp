// #include <iostream>
// #include <vector> //this is the library for vectors
// using namespace std;

// int main(){
//     vector<int> vec; // this vector is empty
//     cout << vec[0];
//     return 0;
// }

// #include <iostream>
// #include <vector> //this is the library for vectors
// using namespace std;

// int main(){
//     vector<int> vec= {1,2,3,4,5}; // this vector is empty
//     cout << vec[0] << endl ;
//     cout << vec[1] << endl ;
//     cout << vec[2] << endl ;
//     cout << vec[3] << endl ;
//     cout << vec[4] << endl ;

//     return 0;
// }

// #include <iostream>
// #include <vector> //this is the library for vectors
// using namespace std;

// int main(){
//     vector<int> vec(3,0); // this vector is empty
//     cout << vec[0] << endl;
//     cout << vec[1] << endl;
//     cout << vec[2] << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector> //this is the library for vectors
// using namespace std;

// int main(){
//     vector<int> vec(3,0); // this vector is empty
//     for (int i : vec){
//         cout << i << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector> //this is the library for vectors
// using namespace std;

// int main()
// {
//     vector<char> vec{'a', 'b', 'c', 'd', 'e'}; // this vector is empty
//     cout <<"size = " << vec.size() << endl;
    
//     for (char val : vec)
//     {
//         cout << val << endl;
//     }
//     return 0;
// }


#include <iostream>
#include <vector> //this is the library for vectors
using namespace std;

int main(){
    vector<int> vec; // this vector is empty
    
    vec.push_back(20);
    vec.push_back(25);

    cout << "after push back size= " << vec.size() << endl;  
    for (int i : vec){
        cout << "elements in vector = " << i << endl;
    }

    return 0;
}
