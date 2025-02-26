// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;

//     for (int i = 0; i <= n-1; i++)
//     {
//         for (int j = 0; j <= n-1; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//  }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;

//     for (int i = 0; i <= n-1; i++){
//         char ch = 'A';
//         for(int j = 0; j <= n-1; j++)
//         {
//             cout << ch << " ";
//             ch= ch+1;
//         }
//         cout << endl;
//     }
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;

//     for (int i = 1; i <= n; i++){
//         char ch = 'A';
//         for(int j = 1; j <= n; j++)
//         {
//             cout << ch << " ";
//             ch = ch+1;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n=3;
//     int num=1;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//         cout << num  ;
//         num++;
            
//         }
//         cout << endl;
       
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n=3;
//     char A = 'A';
//         for(int i=0; i<n ;i++){
//             // char A = 'A';
//             for(int j=0; j<n ;j++){
//                 cout << A << " ";
//                 A = A + 1;
//             }
//             cout << endl;
//         } 
//     return 0;
//     }


// #include <iostream>
// using namespace std;

// int main(){
//    int n=4;
//    for(int i=0; i<n; i++){
//     for(int j=0; j<i+1; j++){
//         cout << '*' ;
//     }
//     cout << endl;
//    }
//    return 0;
// }

// ---------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout << i+1 ;
//         }
//         cout << endl; 
//     } 
//     return 0;
// }

// output :

// 1
// 22
// 333
// 4444

// --------------------------------------------------


// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0; i<n;  i++){
//         for(int j=1; j<=i+1; j++){
//             cout << j <<' ';
//         }
//         cout << endl;
//     }
//     return 0;
// }

// output: 
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// -----------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0; i<n;  i++){
//         for(int j=i+1; j>0; j--){
//             cout << j <<' ';
//         }
//         cout << endl;
//     }
//     return 0;
// }

// output :

// 1 
// 2 1
// 3 2 1
// 4 3 2 1

// ------------------------------------------------------------



// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     // int num= 1;
//     char A = 'A';
//     for(int i=0; i<n;  i++){
//         for(int j=i+1; j>0; j--){
//             // cout << num <<' ';
//             cout << A << ' ';
//             A++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// -------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0;j--){
//             cout << j << ' ';
//         }
//         cout << endl;
//     }
//     return 0;
// }

// output :
// 1
// 2 1
// 3 2 1
// 4 3 2 1

// -------------------------------------------------------------


// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=i+n; j>=n; j--){
//             cout << j << ' ';
//         }
//         cout << endl;
//     }
//     return 0;
// }
// output :

// 4 
// 5 4
// 6 5 4
// 7 6 5 4

// ---------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     int num=1;
//     for(int i=0; i<4; i++){
//         for(int j=i+1; j>0; j--){
//             cout << num << " " ;
//             num++;
//                   }
//         cout << endl;
//     }
//     return 0;
// }

// output :

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// -------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;

//     int num=1;
//     for(int i=0; i<n; i++){

//         for(int j=0; j<i; j++){
//             cout << " ";
//         }
//         for(int j=0; j<n-i; j++ ) {
//             cout <<  (i+1);
//         }
//         cout << endl;
//     }
//     return 0;
// }


// output :

// 1111
//  222
//   33
//    4

// --------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int n=10;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout << " ";
//         }

//         for (int j=1; j<=i+1; j++){
//             cout << j;
//         }

//         for (int j=i; j>=1;j--){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// output :

//          1
//         121
//        12321
//       1234321
//      123454321
//     12345654321
//    1234567654321
//   123456787654321
//  12345678987654321
// 12345678910987654321








