/*

SQUARE YEAR

One can notice the following remarkable mathematical fact: the number 2025 can be represented as (20+25)2
You are given a year represented by a string s, consisting of exactly 4 characters. Thus, leading zeros are allowed in the year representation. For example, "0001", "0185", "1375" are valid year representations. You need to express it in the form (a+b)2, where a and b are non-negative integers, or determine that it is impossible.
For example, 
if s = "0001", you can choose a=0, b=1, and write the year as (0+1)2=1


Input
The first line of the input contains a single integer t (1≤t≤104) — the number of test cases.
The following lines describe the test cases.

The only line of each test case contains a string s, consisting of exactly 4 characters.
Each character is a digit from 0 to 9

Output
On a separate line for each test case, output:

Two numbers a and b (a,b≥0) such that (a+b)2=s, if they exist. If there are multiple suitable pairs, you may output any of them.
The number −1 otherwise.

*/

# include <iostream>
# include <string>
# include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0 ; i<t ; i++){
        string n;
        cin >> n;

        int start = 0;
        int end = 100;

        int ans;
        double root = sqrt(stoi(n));

        if(int(root)==root){
            while(start<=end){
                int mid = start + ((end-start)/2);

                if(root == mid){
                    ans = mid;
                    break;
                }
                else if(root>mid){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
            }

            int ans1 = stoi(n.substr(0, 2));
            int ans2 = stoi(n.substr(2, 2));

            if(ans1+ans2 == root){
                cout << ans1 << " " << ans2 << endl;
            }
            else{
                cout << 1 << " " << ans-1 << endl;
            }
        }
        else{
            cout << -1 << endl;
        }
    }

    return 0;
}