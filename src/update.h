#include <iostream>
using namespace std;

// function update student
void update(int choose, int n, string sinhvien[]) {
	int pos;
    string item;
    
    // update students
    if(choose == 1) {
        cout << "Vi tri can cap nhat (Chinh sua): ";
        cin >> pos;
        cin.ignore();
        cout << "Ten cap nhat (chinh sua):";
        getline(cin,item);
        for(int i = 0; i < n; i++) {
            if(i == (pos - 1)) {
                sinhvien[i] = item;
            }
        }
        cout << endl;
        // print list student after update in screen
        cout << "Danh sach sinh vien sau khi cap nhat:" << endl;
        for(int i = 0; i < n; i++) {
            cout << (i + 1) << ". " << sinhvien[i] << endl;
        }
    }
}	
	
