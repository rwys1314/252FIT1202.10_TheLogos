===================================================
  BTL: TU DIEN ANH - VIET & ON TAP
===================================================

CAU TRUC FILE:
  main.cpp     <- Leader viet 
  tuvung.h     <- Leader viet 
  tuvung.cpp   <- Ca 3 viet 
  crud.cpp     <- Developer viet
  fileIO.cpp   <- Tester & Documenter viet
  tudien.txt   <- Du lieu mau (co san)

---------------------------------------------------
Leader:
  [x] struct TuVung + TuDien (mang dong)
  [x] khoiTao() / giaiPhong() / moRong()
  [x] sapXepTheoAlphabet()
  [x] timKiemBinarySearch()
  [x] timKiemChuoiCon()
  [x] hienThiMenu() / veKhung()
  [x] main.cpp (vong lap menu chinh)
  [ ] Ghep code cuoi + test tich hop

---------------------------------------------------
Developer
  [ ] themTuVung()
  [ ] hienThiTatCa() + hienThiChiTiet()
  [ ] suaTuVung()
  [ ] xoaTuVung()
  [ ] danhDauYeuThich() + hienThiYeuThich()
  [ ] quizNgauNhien()
  [ ] hienThiThongKe()
  => File: crud.cpp 

---------------------------------------------------
Tester & Documenter:
  [ ] docFile() - doc tu file khi khoi dong
  [ ] ghiFile() - ghi khi thoat
  [ ] xuatYeuThich() - xuat file rieng
  [ ] nhapSoHopLe() - validation so
  [ ] nhapChuoiHopLe() - validation chuoi
  [ ] try-catch cho tat ca truong hop loi
  [ ] Test toan bo chuc nang, ghi bug ra
  [ ] Viet bao cao
  => File: fileIO.cpp 

---------------------------------------------------
CACH COMPILE:
  g++ main.cpp tuvung.cpp crud.cpp fileIO.cpp -o tudien
  ./tudien

---------------------------------------------------
LUU Y QUAN TRONG:
  - Ca 3 nguoi deu phai hieu TOAN BO code
  - GV se hoi van dap tung nguoi
  - Du lieu KHONG duoc mat khi tat/mo lai
  - Bat buoc co new/delete va try-catch
===================================================