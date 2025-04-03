#include <iostream>
#include <string.h>
#include <cstring>//used for calling strrev()
#include <algorithm>
using namespace std;
//The quick brown fox jumps over the lazy dog
string FindtheLongestWord(const string& sentence) {
    string longestword, currentword;
    for (char c : sentence) {
        if (c !=' ') {
            currentword += c;
        }
        else {
            if (currentword.length() >= longestword.length()) {
                longestword = currentword;
            }
            currentword = "";
        }

    }
    if (currentword.length() >= longestword.length()) {
        longestword = currentword;
    }
    return longestword;
}

int main() {
    //problem 1
    // int n, m;
    // cin >> n >> m;
    // int arr[n][m];
    // int sum = 0;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cin >> arr[i][j];
    //
    //     }
    //
    // }
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         sum += arr[i][j];
    //     }
    //
    // }
    // cout << sum << endl;
    //problem 2
    // int n,m;
    // cin>>n>>m;
    // int a[n][m];
    //
    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<m;j++) {
    //         cin>>a[i][j];
    //     }
    // }
    //
    // for(int i=0;i<n;i++) {
    //     int rowmax=a[i][0];
    //     for(int j=0;j<m;j++) {
    //         if(a[i][j]>rowmax) {
    //             rowmax=a[i][j];
    //         }
    //
    //
    //     }
    //     cout<<rowmax<<' ';
    //
    // }
    //
    //
    // return 0;
    //problem 3
    //  int n,m;
    //  cin>>n>>m;
    //  int a[n][m];
    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<m;j++) {
    //         cin>>a[i][j];
    //     }
    // }
    // for(int j=0;j<m;j++) {
    //     int columnsum=0;
    //     for(int i=0;i<n;i++) {
    //         columnsum+=a[i][j];
    //
    //     }
    //     cout<<columnsum<<' ';
    // }
    //problem 4
    // int n;
    // cin >> n;
    // int arr[n][n];
    // int dioganalsum=0;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cin >> arr[i][j];
    //     }
    // }
    // for (int i = 0; i < n; i++) {
    //     dioganalsum += arr[i][i];
    //
    // }
    // cout << dioganalsum;
    //problem 5
    // int n,m;
    // cin>>n>>m;
    // int a[n][m];
    // int transpose[n][m];
    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<m;j++) {
    //         cin>>a[i][j];
    //     }
    // }
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         transpose[j][i] = a[i][j];
    //     }
    // }
    // for (int i = 0; i < m; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << transpose[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    //
    // return 0;
    //problem 6
    // int r1, c1, r2, c2;
    // cin >> r1 >> c1;
    // int A[r1][c1];
    // for (int i = 0; i < r1; i++) {
    //     for (int j = 0; j < c1; j++) {
    //         cin >> A[i][j];
    //     }
    // }
    // cin >> r2 >> c2;
    // int B[r2][c2];
    // for (int i = 0; i < r2; i++) {
    //     for (int j = 0; j < c2; j++) {
    //         cin >> B[i][j];
    //     }
    // }
    // if (c1 != r2) {
    //     cout << "Matrix multiplication not possible";
    //     return 0;
    // }
    // int C[r1][c2];
    // for (int i = 0; i < r1; i++) {
    //     for (int j = 0; j < c2; j++) {
    //         C[i][j] = 0;
    //     }
    // }
    // for (int i = 0; i < r1; i++) {
    //     for (int j = 0; j < c2; j++) {
    //         for (int k = 0; k < c1; k++) {
    //             C[i][j] += A[i][k] * B[k][j];
    //         }
    //     }
    // }
    // for (int i = 0; i < r1; i++) {
    //     for (int j = 0; j < c2; j++) {
    //         cout << C[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;
    //problem 7
    // int n;
    // cin >> n;
    // int a[n][n];
    // int b[n][n];
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cin >> a[i][j];
    //     }
    //
    // }
    //
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         b[j][i] = a[i][j];
    //     }
    // }
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n / 2; j++) {
    //         // Swap first and last elements of the row
    //         int temp = b[i][j];
    //         b[i][j] = b[i][n - 1 - j];
    //         b[i][n - 1 - j] = temp;
    //     }
    // }
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << b[i][j] <<' ';
    //     }
    //     cout << endl;
    // }
    // return 0;
    // STRING PROBLEMS
    //problem 1
    // char a[100];
    // cin >> a;
    // int vowels=0;
    // int consonant=0;
    // for (int i = 0; i < strlen(a); i++) {
    //     switch (a[i]) {
    //             case 'a':
    //             case 'e':
    //             case 'i':
    //             case 'o':
    //             case 'u':
    //                 vowels++;
    //             break;
    //             default:
    //                 consonant++;
    //     }
    // }
    // cout << vowels <<' '<< consonant;
    // return 0;
    //problem 2
    // char str[100];
    // cin>>str;
    // cout<<strrev(str)<<endl;
    // return 0;
    //problem 3
    // char str[100];
    // cin>>str;
    //
    // string a=str;
    // reverse(a.begin(),a.end());
    // if (str==a) {
    //     cout<<"YES"<<endl;
    // }
    // else {
    //     cout<<"NO"<<endl;
    //problem 4
   //  char str[100];
   //  int frequency=0;
   //  int count=0;
   //  cin>>str;
   //  int len = strlen(str);
   // for ( char c: str) {
   //     if ( c >= 'a' && c <= 'z') {
   //         count++;
   //     }
   // }
    //problem 5
//     char str[100];
//     cin>>str;
//     char str1[100];
//     int size = 0;
//     for (int i = 0; str[i] != '\0'; i++) {
//         bool found = false;
//         for (int j = 0; j < size; j++) {
//             if (str1[j] == str[i]) {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) {
//             str1[size] = str[i];
//             size++;
//         }
//     }
//     str1[size] = '\0';
// cout<<str1<<endl;
    //problem 6
    // string input="The quick brown fox jumps over the lazy dog";
    // string longestword = FindtheLongestWord(input);
    // cout << longestword << endl;
    // return 0;
    //problem 7


    




    }


