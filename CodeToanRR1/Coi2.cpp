#include <bits/stdc++.h>
#include<windows.h>
using namespace std;

struct mcb{
    string macb;
    string tencb;
    float hsl;
    string chucvu;
    float phucap;
    float luong;
};
int size = 0;
void nhapds_1(mcb ds[]){
    cout << "MOI BAN NHAP SO LUONG: ";
    int n;
    cin >> n;
    if(n == 0){
        cout << "BAN DA NHAP SAI SO LIEU, CAN CHON VA NHAP LAI" << endl;
    }
    else{
        size = n;
        cin.ignore();
        for(int i=0; i<n; i++){
            cout << "Ma can bo: ";
            getline(cin, ds[i].macb);
            cout << "Ho va ten can bo: ";
            getline(cin,ds[i].tencb);
            cout << "He so luong: ";
            cin >> ds[i].hsl;
            cin.ignore(); 
            cout << "Chuc vu: ";
            getline(cin,ds[i].chucvu);
            ds[i].luong = 0;
            if(ds[i].chucvu == "Giam doc"){
                ds[i].phucap = 10000000;
                ds[i].luong = ds[i].hsl*1500000 + ds[i].phucap;
            }
                
            else if(ds[i].chucvu == "Truong phong"){
                ds[i].phucap = 5000000;
                ds[i].luong = ds[i].hsl*1500000 + 5000000;
            }
            else{
                ds[i].phucap = 5000000;
                ds[i].luong = ds[i].hsl*1500000 + 2000000;
            } 
        }
        cout << "BAN DA NHAP THANH CONG" << endl;
    }
    
}
void Xuatds_2(mcb ds[]){
    if(size == 0){
        cout << "DANH SACH CHUA CO AI" << endl;
    }
    else{
        cout << "DANH SACH CAN BO BAN CAN TIM: " << endl;
        for(int i = 0; i < size; i++){
            if(ds[i].macb != "0"){
                cout << ds[i].macb << "  " << ds[i].tencb << "  ";
                cout << fixed << setprecision(1)  << ds[i].hsl << "  " ;
                cout << ds[i].chucvu << "  " << ds[i].phucap << "  " << ds[i].luong;
                cout << endl;
            }
        }
    }
}
void nhapds_3(mcb ds[]){
    if(size == 0){
        cout << "HIEN TAI DANH SACH CHUA CO AI NEN KHONG NHAP DUOC MA" << endl;
    }
    else{
        cout << "MOI BAN NHAP MA CAN BO CAN TIM: ";
        string s;
        cin >> s;
        for(int i=0; i<size; i++){
            if(ds[i].macb == s){
                cout << ds[i].macb << "  " << ds[i].tencb << "  ";
                cout << fixed << setprecision(1)  << ds[i].hsl << "  " ;
                cout << ds[i].chucvu << "  " << ds[i].phucap << "  " << ds[i].luong;
                cout << endl;
            }
        }
    }
}
void nhapds_4(mcb ds[]){
    if(size == 0){
        cout << "BAN CAN CHON SO 1 VA NHAP TOI THIEU 1 CAN BO" << endl;
    }
    else{
        for(int i = 0; i < size-1; i++){
            for(int j = i+1; j < size; j++){
                if(ds[i].luong > ds[j].luong){
                    // struct mcb t = ds[i];
                    // ds[i] = ds[j];
                    // ds[j] = t;
                    swap(ds[i], ds[j]);
                }  
            }
        }
        cout << "LUA CHON CUA BAN DA THANH CONG" << endl;
    }

}
void nhapds_5(mcb ds[]){
    cout << "Ma can bo";
    getline(cin, ds[size].macb);
    cout << "Ho va ten can bo" ;
    getline(cin,ds[size].tencb);
    cout << "He so luong";
    cin >> ds[size].hsl;
    cin.ignore(); 
    cout <<"Chuc vu";
    getline(cin,ds[size].chucvu);
    ds[size].luong = 0;
    if(ds[size].chucvu == "Giam doc"){
        ds[size].phucap = 10000000;
        ds[size].luong = ds[size].hsl*1500000 + ds[size].phucap;
    }
        
    else if(ds[size].chucvu == "Truong phong"){
        ds[size].phucap = 5000000;
        ds[size].luong = ds[size].hsl*1500000 + 5000000;
    }
    else{
        ds[size].phucap = 5000000;
        ds[size].luong = ds[size].hsl*1500000 + 2000000;
    } 
    size++;
    cout << "BAN DA THEM THANH CONG";
}
void nhapds_6(mcb ds[]){
    if(size == 0){
        cout << "BAN CAN CHON SO 1 VA NHAP TOI THIEU 1 CAN BO" << endl;
    }
    else{
        cout << "MOI BAN NHAP MA CAN BO CAN XOA:";
        string s;
        cin >> s;
        cout << "BAN DA XOA THANH CONG";
        for(int i=0; i< size; i++){
            if(ds[i].macb == s){
                ds[i].macb = "0";
            }
        }
    }
};
void nhapds_7(mcb ds[]){
    if(size == 0){
        cout << "BAN CAN CHON SO 1 VA NHAP TOI THIEU 1 CAN BO" << endl;
    }
    else{
        cout << "BAN DA LUU FILE THANH CONG" << endl;
        fstream fout("canbo.dat", ios::out);
        fout << "DANH SACH CAN BO: " << endl;
        for(int i=0; i< size; i++){
            if(ds[i].macb == "0"){ 
                continue;
            }
            fout << ds[i].macb << "  " << ds[i].tencb << "  ";
            fout << fixed << setprecision(1)  << ds[i].hsl << "  " ;
            fout << ds[i].chucvu << "  " << ds[i].phucap << "  " << ds[i].luong;
            fout << endl;
        }
        fout.close();
    }
}
void nhapds_8(mcb ds[])
{
    if(size == 0){
        cout << "BAN CAN CHON SO 1 VA NHAP TOI THIEU 1 CAN BO" << endl;
    }
    else{
        fstream fin("canbo.dat", ios::in);
        if(fin.eof()){
            cout << "File cua ban bi loi, can nhap danh sach can bo va luu file" << endl;
        }
        else{
            vector<string>results;
            while(!fin.eof()){
                string s;
                getline(fin, s);
                results.push_back(s);
            }
            for(int i=0; i<results.size();i++){
                if(results[i][0] != '0'){
                    cout << results[i] << endl;
                }
                
            }
        }
    }
}
void SetColor(int backgound_color, int text_color);

int main()
{
    SetColor(0,2);
    mcb ds[100];
    int chon;
    do
    {
        cout<< "\n-------MENU-----"<<endl;
        cout<< "1.Nhap danh sach"<<endl;
        cout<< "2.Xuat danh sach"<<endl;
        cout<< "3.Danh sach sach theo ma can bo"<<endl;
        cout<< "4.Sap xep danh sach theo thu tu luong"<<endl;
        cout<< "5.Them can bo vao danh sach"<<endl;
        cout<< "6.Xoa ma can bo theo yeu cau"<<endl;
        cout<< "7.Luu file "<<endl;
        cout<< "8.Xuat file"<<endl;
        cout<< "0.Ket thuc"<<endl;
        cout<< "\nMoi ban nhap lua chon ";
        cin>>chon;
        cin.ignore();
        switch(chon)
        {
            case 0:
                cout << "Chuc ban mot ngay moi vui ve";
                break;
            case 1:
                nhapds_1(ds);
                break;
            case 2:
                Xuatds_2(ds);
                break;
            case 3:
                nhapds_3(ds);
                break;
            case 4:
                nhapds_4(ds);
                break;
            case 5:
                nhapds_5(ds);
                break;
            case 6:
                nhapds_6(ds);
                break;
            case 7:
                nhapds_7(ds);
                break;
            case 8:
                nhapds_8(ds);
                break;
            
        }
    }while(chon!=0);
    return 0;
}
void SetColor(int backgound_color, int text_color)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    int color_code = backgound_color * 16 + text_color;
    SetConsoleTextAttribute(hStdout, color_code);
}