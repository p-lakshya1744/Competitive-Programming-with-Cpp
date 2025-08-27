# include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int x, y, z;
    int xInitial = 0, yInitial = 0, zInitial = 0;

    for(int i=0 ; i<n ; i++){
        cin >> x >> y >> z;

        xInitial += x;
        yInitial += y;
        zInitial += z;
    }

    if(xInitial==0 && yInitial==0 && zInitial==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}