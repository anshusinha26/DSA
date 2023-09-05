#include<iostream>
#include<vector>
using namespace std;

// // BRUTE FORCE APPROACH TO FIND THE NUMBER OF OCCURENCES OF AN INTEGER IN A VECTOR - Big theta (n)
// int main() {
//     vector<int> v1 = {1, 2, 3, 1, 2, 3, 1, 1, 1};
//     int count = 0;
//     int ele;

//     cout << "Enter element to search for: ";
//     cin >> ele;

//     for (int i = 0; i < v1.size(); i += 1) {
//         if (ele == v1[i]) {
//             count += 1;
//         }
//     }
//     cout << count << endl;

//     return 0;
// }

// // HAShING APPROACH TO FIND THE NUMBER OF OCCURENCES OF AN INTEGER
// int hashh[10000000]; // can take 10^7 values, and everything is initialized as zero
// int main() {
//     int arr_size; // size of the array
//     cout << "Enter size of the array: ";
//     cin >> arr_size;

//     int arr[arr_size]; // initializing the size of the array

//     cout << "Enter array elements: ";
//     for (int i = 0; i < arr_size; i += 1) {   
//         cin >> arr[i]; // taking the inputs and storing it in the array
//     }

//     // precomputation
//     // int hashh[1000000] = {0}; // hash[10000000] will be segmentation fault, i.e, 10^7, max limit 10^6
//     for (int i = 0; i < arr_size; i += 1) {
//         hashh[arr[i]] += 1; // loop through the array elements and increment the value of hash elements, i.e, if arr[0] = 1, arr[1] = 1, than hash[1] += 1, hash[1] += 1, so 1 exited two times, was stored in the hash array
//     }

//     // fetching 
//     int num_el;
//     cout << "Enter number of elements to search for: ";
//     cin >> num_el;
    
//     for (int i = 0; i < num_el; i += 1) {
//         int el;
//         cout << "Enter the element: ";
//         cin >> el;
//         cout << hashh[el] << endl;
//     }

//     return 0;
// }

// HAShING APPROACH TO FIND THE NUMBER OF OCCURENCES OF AN INTEGER
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    // precomputation
    int hashh[256] = {0};
    for (int i = 0; i < s.size(); i += 1) {
        hashh[s[i]] += 1; 
    }

    // fetching
    int n;
    cout << "Enter number of characters to search for: "
}