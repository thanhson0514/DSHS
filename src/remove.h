#include <iostream>
using namespace std;

// function remove student
void remove(int choose, int n, string sinhvien[]) {
	int pos;

	// remove students
    if(choose == 2) {
        cout << "Vi tri can xoa:";
        cin >> pos;

        while(pos < n) {
            sinhvien[pos - 1] = sinhvien[pos];
            pos++;            
        }
        
        n = n - 1;
        
        cout << endl;
        // print list students after remove 
        cout << "Danh sach sinh vien sau khi xoa:" << endl;
        for(int i = 0; i < n; i++) {
            cout << (i + 1) << ". " << sinhvien[i] << endl;
        }
    }
}
