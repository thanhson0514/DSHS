#include <iostream>
using namespace std;
// function add student
void add(int choose, int n, string sinhvien[]) {
	int pos;
	string item;
	
	// add students
    if(choose == 3) {
        n = n + 1;
        cout << "Vi tri can them: ";
        cin >> pos;
        cin.ignore();
        cout << "Sinh vien can them: "; 
        getline(cin,item);
        
        int j = n;
        while(j > pos) {
            sinhvien[j - 1] = sinhvien[j - 2];
            j--;
        }
        sinhvien[pos - 1] = item;
        
        cout << endl;
        // print list students after add students
        for(int i = 0; i < n; i++) {
            cout << (i + 1) << ". " << sinhvien[i] << endl;
        }
    }
}
