/*

JOURNEY

Monocarp decided to embark on a long hiking journey.

He decided that on the first day he would walk a kilometers, on the second day he would walk b kilometers, on the third day he would walk c kilometers, on the fourth day, just like on the first, he would walk a kilometers, on the fifth day, just like on the second, he would walk b kilometers, on the sixth day, just like on the third, he would walk c kilometers, and so on.

Monocarp will complete his journey on the day when he has walked at least n kilometers in total. Your task is to determine the day on which Monocarp will complete his journey.

Input
The first line contains one integer t (1≤t≤104) — the number of test cases.
Each test case consists of one line containing four integers n, a, b, c (1≤n≤109; 1≤a,b,c≤106).

Output
For each test case, output one integer — the day on which Monocarp will have walked at least n kilometers in total and will complete his journey.

*/

# include <iostream>
using namespace std;

int t;
long long n;
int a, b, c;

bool isComplete(int d){
    long long cycles = d / 3;
    long long sum = cycles * (a + b + c);

    int rem = d % 3;
    if (rem >= 1) sum += a;
    if (rem >= 2) sum += b;

    return sum >= n;
}

int main(){
    cin >> t;

    for(int i=0 ; i<t ; i++){
        cin >> n;
        cin >> a >> b >> c;

        int start = 0;
        int end = 1e9;

        while(end-start > 1){
            int mid = start + ((end-start)/2);

            if(!isComplete(mid)){
                start = mid+1;
            }
            else{
                end = mid;
            }
        }

        if(isComplete(start)){
            cout << start << endl;
        }
        else if(isComplete(end)){
            cout << end << endl;
        }
    }

    return 0;
}