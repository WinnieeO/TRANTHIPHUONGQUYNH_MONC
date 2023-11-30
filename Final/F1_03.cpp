#include <iostream>
using namespace std;

class MayLoc {
    protected: 
        float m_tgian;
        float m_cs;
        virtual float congSuat();
    public: 
        MayLoc(): m_tgian(0), m_cs(0) {};
        virtual void nhap();    // Khi gap tu khoa virtual, chuong trinh se uu tien chay ham cua cac class con
        float tinhLuongNuoc();  // Luong nuoc = thoi gian * cong suat
        virtual float tinhChiPhi() = 0;     // Ham thuan ao
};

float MayLoc::tinhLuongNuoc() {
    return congSuat() * m_tgian;    // Tra ve luong nuoc loc duoc
}

float MayLoc::congSuat(){
    return this->m_cs;              // Tra ve gia tri cua cong suat
}

void MayLoc::nhap() {
    cout << "Nhap cong suat loc: ";
    cin >> m_cs;                    // Nhap cong suat
    cout << "Nhap thoi gian: ";
    cin >> m_tgian;                 // Nhap thoi gian
}

class MayLyTam: public MayLoc {
    private: 
	    float luongXang;
    public: 
        static const int DON_GIA_XANG = 20000;  // Khai bao hang so tinh
        static const int DON_GIA_THUE = 50000;  // Khai bao hang so tinh
        void nhap();
        float tinhChiPhi();
};

void MayLyTam::nhap() {
    MayLoc::nhap();                 // Goi ham nhap cua class MayLoc de nhap thoi gian va cong suat
    cout << "Nhap luong xang: ";    
    cin >> luongXang;               // Nhap luong xang
}

float MayLyTam::tinhChiPhi() {
    return luongXang * DON_GIA_XANG + DON_GIA_THUE * m_tgian;       // Tra ve chi phi cua may ly tam
}

// 2. /////////////////////////////////////////////////////////////
class MayXucTac: public MayLoc {
    public: 
        static const int DON_GIA_HOA_CHAT = 10000;      // Khai bao hang so tinh
        static const int DON_GIA_THUE = 80000;          // Khai bao hang so tinh
        void nhap();
        float congSuat();
        float tinhChiPhi();
    private: 
	    float luongHoaChat;
};

void MayXucTac::nhap() {
    MayLoc::nhap();                     // Goi ham nhap cua class MayLoc de nhap thoi gian va cong suat
    cout << "Nhap luong hoa chat: ";
    cin >> luongHoaChat;                // Nhap luong hoa chat
}

float MayXucTac::tinhChiPhi() {
    return DON_GIA_THUE * m_tgian + DON_GIA_HOA_CHAT * luongHoaChat;     // Tra ve chi phi cua may xuc tac
}

float MayXucTac::congSuat(){
    // Tinh cong suat thuc te theo dieu kien thoi gian
    if (m_tgian < 10)
        return m_cs * (luongHoaChat / 100.0);
    else
        return m_cs * (luongHoaChat / 100.0) / (m_tgian / 10);
}

int main() {
// 3.b.i //////////////////////////////////////////////////////////
    cout << "Nhap so luong may loc: ";
    int n;
    cin >> n;

    MayLoc ** mayLocs = new MayLoc * [n];   // Khoi tao 1 mang con tro tro den dia chi cua doi tuong ke thua cua class MayLoc
    for (int i = 0; i < n; ++i) {
        cout << "Nhap loai may: \n";
        cout << "1: May ly tam\n";
        cout << "2: May xuc tac\n";
        int type = 0;
        do cin >> type;
        while (type != 1 && type != 2);

        if (type == 1) 
            mayLocs[i] = new MayLyTam();    // Khoi tao 1 doi tuong MayLyTam bang tu khoa new
        else 
            mayLocs[i] = new MayXucTac();   // Khoi tao 1 doi tuong MayXucTac bang tu khoa new

        mayLocs[i] -> nhap();               // Goi ham nhap va nhap cac gia tri can thiet
    }

// 3.b.ii ////////////////////////////////////////////////////////
    int m;
    cout << "Nhap luong nuoc M: ";
    cin >> m;

    float tongLuongNuoc = 0;
    float tongChiPhi = 0;

    for (int i = 0; i < n; ++i) {
        tongLuongNuoc += mayLocs[i] -> tinhLuongNuoc();     // Tinh tong luong nuoc loc duoc 
        tongChiPhi += mayLocs[i] -> tinhChiPhi();           // Tinh tong chi phi phai chi tra
    }

    // Hien thi thong bao ve trang thai loc cua cac may (loc het / khong loc het)
    if (m <= tongLuongNuoc) 
        cout << "Loc het\n";
    else 
        cout << "Khong loc het\n";

    cout << "Tong chi phi: " << tongChiPhi;     // Hien thi tong chi phi

    delete [] mayLocs;                          // Giai phong vung nho mang con tro quan ly
    return 0;
}