#include<iostream>
using namespace std;


void Funk(){
    int a[5], i, s = 0;
    int *ptr;


    ptr = a;
    for (i = 0; i < 5; i++) {
       s = s + *(ptr + i);
    }

cout << "\nSum of elements :" << s
}

int main(){

    cout << "Enter th numbers to be added: ";
    for (i = 0; i < 5; i++) {
        cin >> a[i];
    }
cout << Funk << endl;

}
