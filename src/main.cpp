#include <iostream>
#include <string>
#include "remove.h"
#include "update.h"
#include "add.h"

using namespace  std;
#define MAX 10000

int main()
{
    int n;
    cout << "So luong sinh vien:";
    cin >> n;
    string sinhvien[MAX];
    cin.ignore();
    
    // input your name 
    for(int i = 0; i < n; i++) {
        cout << "Sinh vien thu " << (i + 1) << ": ";
        getline(cin,sinhvien[i]);
    }
    
    // print list students in screen
    cout << "Danh sach sinh vien vua nhap:" << endl;
    for(int i = 0; i < n; i++) {
        cout << (i + 1) << ". " << sinhvien[i] << endl;
    }
    
    // choose data type
    int choose;
    do {
    	// case error or input not number
    	if(cin.fail()) {
    		cin.clear();
    		cin.ignore();
		}
		
        cout << "Chon du lieu can thuc thi:" << endl;
        cout << "1. update" << endl;
        cout << "2. remove" << endl;
        cout << "3. add" << endl;
        cout << "Number: ";
        cin >> choose;
    }while(choose < 1 || choose > 3);
    
    // processed by data type
    update(choose, n, sinhvien);
	remove(choose, n, sinhvien);
	add(choose, n, sinhvien);
}
