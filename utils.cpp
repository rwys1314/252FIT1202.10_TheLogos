#include <iostream>
#include <string>
#include <limits>
using namespace std;

// ============================================================
//  VẼ KHUNG
// ============================================================
void veKhung(const string&) {
    for (int i = 0; i < rong; i++) {
        cout << "=";
    }
    cout << "\n";
}

// ============================================================
//  NHẬP SỐ NGUYÊN (có kiểm tra lỗi)
// ============================================================
int nhapSoNguyen(const string& thongBao, int min, int max) {
    int x;

    while (true) {
        cout << thongBao;
        cin >> x;

        // Nếu nhập sai kiểu dữ liệu (vd: chữ)
        if (cin.fail()) {
            cin.clear(); // xóa trạng thái lỗi
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "  ✗ Vui long nhap so!\n";
            continue;
        }

        // Kiểm tra phạm vi
        if (x < min || x > max) {
            cout << "  ✗ Nhap tu " << min << " den " << max << "!\n";
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return x;
    }
}

// ============================================================
//  NHẬP CHUỖI HỢP LỆ (không rỗng)
// ============================================================
string nhapChuoi(const string& thongBao) {
    string s;

    while (true) {
        cout << thongBao;
        getline(cin, s);

        if (s.empty()) {
            cout << "  ✗ Khong duoc de trong!\n";
            continue;
        }

        return s;
    }
}

// ============================================================
//  HIỂN THỊ MENU
// ============================================================
void hienThiMenu() {
    veKhung(50);

    cout << " TU DIEN ANH - VIET\n";

    veKhung(50);

    cout << "  1. Them tu vung\n";
    cout << "  2. Hien thi danh sach\n";
    cout << "  3. Sua tu vung\n";
    cout << "  4. Xoa tu vung\n";
    cout << "  5. Tim kiem\n";
    cout << "  6. Danh dau yeu thich\n";
    cout << "  7. Hien thi yeu thich\n";
    cout << "  8. Quiz ngau nhien\n";
    cout << "  9. Thong ke\n";
    cout << "  0. Luu va thoat\n";

    veKhung(50);
}
