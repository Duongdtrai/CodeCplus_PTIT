#include <bits/stdc++.h>
using namespace std;
class honso{
private:
    int nguyen;
    int tu, mau;
public:
    honso() {}
    honso(int nguyen, int tu, int mau){
        this->nguyen = nguyen;
        this->tu = tu;
        this->mau = mau;
    }
    void nhapbp(){
        cin >> nguyen >> tu >> mau;
    }
    void xemmh(){
        if(nguyen == 0 && tu == 0){
            cout << "0" << endl;
        }
        else if(nguyen == 0){
            cout << tu << "/" << mau << endl;
        }
        else if(tu == mau){
            cout << nguyen+1 << endl;
        }
        else{
            cout << nguyen << " " << tu << "/" << mau << endl;
        }
    }
    void rutgon(){
        tu = nguyen * mau + tu;
        int ucln = __gcd(tu, mau);
        tu = tu/ucln;
        mau = mau/ucln;
        if(tu >= 0){
            if(tu <= mau){
                nguyen = 0;
            }
            else{
                nguyen = tu/mau;
                tu = tu - nguyen*mau;
                mau = mau;
            }
        }
        else{
            if(tu <= mau){
                nguyen = 0;
            }
            else{
                tu = -tu;
                nguyen = tu/mau;
                tu = tu - nguyen*mau;
                mau = mau;
                nguyen = -nguyen;
            }
        }
        
    }
    friend honso operator+(honso a, honso b);
    friend honso operator-(honso a, honso b);
    friend honso operator*(honso a, honso b);
    friend honso operator/(honso a, honso b);
    // honso operator + (honso &a);
    operator string();
    honso(float n){
        nguyen = 0;
        tu = n*100;
        mau = 100;
        int ucln = __gcd(tu,mau);
        tu = tu/ucln;
        mau = mau/ucln;
        if(tu < mau){
            nguyen = 0;
            tu = tu;
            mau = mau;
        }
        else if(tu > mau){
            nguyen = tu/mau;
            tu = tu - nguyen*mau;
            mau = mau;
        }
    }
};
 
honso ::operator string(){
    char *x = new char;
    char *y = new char;
    int z = 0, t = 0;
    while (nguyen != 0){
        x[z++] = (nguyen % 10) + 48;
        nguyen /= 10;
    }
    while (z > 0){
        y[t++] = x[--z];
    }
    y[t++] = ' ';
    while (tu != 0){
        x[z++] = (tu % 10) + 48;
        tu /= 10;
    }
    while (z > 0){
        y[t++] = x[--z];
    }
    y[t++] = '/';
    z = 0;
    while (mau != 0){
        x[z++] = (mau % 10) + 48;
        mau /= 10;
    }
    while (z > 0){
        z = z - 1;
        y[t++] = x[z];
    }
    return y;
}
honso operator+(honso a, honso b){
    honso c;
    c.nguyen = a.nguyen + b.nguyen;
    c.tu = a.tu*b.mau+b.tu*a.mau;
    c.mau = a.mau * b.mau;
    c.rutgon();
    return c;
}
honso operator-(honso a, honso b){
    honso c;
    c.nguyen = a.nguyen - b.nguyen;
    c.tu = a.tu*b.mau - b.tu*a.mau;
    c.mau = a.mau * b.mau;
    c.rutgon();
    return c;
}
honso operator*(honso a, honso b){
    honso temp(1, 1, 1);
    int ok1 = 1;
    int ok2 = 1;
    if(a.nguyen < 0){
        a.nguyen = - a.nguyen;
        ok1 = -1;
    }
    if(b.nguyen < 0){
        b.nguyen = -b.nguyen;
        ok2 = -1;
    }
    int tusoA = a.nguyen*a.mau+a.tu;
    int mausoA = a.mau;
    int tusoB = b.nguyen*b.mau+b.tu;
    int mausoB = b.mau;
    temp.tu = tusoA*tusoB;
    temp.mau = mausoA*mausoB;
    int ucln = __gcd(temp.tu, temp.mau);
    temp.tu = temp.tu/ucln;
    temp.mau = temp.mau/ucln;
    if(temp.tu < temp.mau){
        temp.nguyen = 0;
        temp.tu = temp.tu*ok1*ok2;
        
    }
    else if(temp.tu == temp.mau){
        temp.nguyen = 1*ok1*ok2;
        temp.tu = 0;
    }
    else if(temp.tu > temp.mau){
        temp.nguyen = temp.tu/temp.mau;
        temp.tu = temp.tu - temp.nguyen*temp.mau;
        temp.mau = temp.mau;
        temp.nguyen = temp.nguyen*ok1*ok2;
    }
    return temp;
}
honso operator/(honso a, honso b){
    honso temp(1, 1, 1);
    int ok1 = 1;
    int ok2 = 1;
    if(a.nguyen < 0){
        a.nguyen = - a.nguyen;
        ok1 = -1;
    }
    if(b.nguyen < 0){
        b.nguyen = -b.nguyen;
        ok2 = -1;
    }
    int tusoA = a.nguyen*a.mau+a.tu;
    int mausoA = a.mau;
    int tusoB = b.nguyen*b.mau+b.tu;
    int mausoB = b.mau;
    temp.tu = tusoA*mausoB;
    temp.mau = mausoA*tusoB;
    int ucln = __gcd(temp.tu, temp.mau);
    temp.tu = temp.tu/ucln;
    temp.mau = temp.mau/ucln;
    if(temp.tu < temp.mau){
        temp.nguyen = 0;
        temp.tu = temp.tu*ok1*ok2;
    }
    else if(temp.tu == temp.mau){
        temp.nguyen = 1*ok1*ok2;
        temp.tu = 0;
    }
    else if(temp.tu > temp.mau){
        temp.nguyen = temp.tu/temp.mau;
        temp.tu = temp.tu - temp.nguyen*temp.mau;
        temp.mau = temp.mau;
        temp.nguyen = temp.nguyen*ok1*ok2;
    }
    return temp;
}
main(){ 
    honso a,b(2,3,5),c;
    a.nhapbp(); a.rutgon(); a.xemmh();
    c=a*b;c.xemmh(); c=a/b; c.xemmh();
    c=a+b; c.xemmh(); c=a-b; c.xemmh();
    a = honso(1.25);a.xemmh();
    cout<<"\n a ="<<string(a);
}