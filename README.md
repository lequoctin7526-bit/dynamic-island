# Dynamic Island Pro – Liquid Glass for Windhawk (v1.2.0)

![Dynamic Island Pro](https://raw.githubusercontent.com/devcode90/Dynamic-Island-for-Windows/793cf954d51aa9748c39d544187fab6e25ecd0fb/previews/desktop.png)

Dynamic Island Pro tái hiện chuẩn xác trải nghiệm **Apple Dynamic Island** nguyên bản từ iPhone kết hợp cùng phong cách khúc xạ kính **Liquid Glass** cao cấp cho Windows 10 và Windows 11 dưới dạng mod native chạy trực tiếp bên trong [Windhawk](https://windhawk.net/).

## ✨ Thiết Kế Chuẩn Apple Dynamic Island (Version 1.2.0)

- **Compact Mode Siêu Tối Giản:** Viên thuốc đen tuyền bo tròn hoàn hảo ở đỉnh màn hình, loại bỏ hoàn toàn các thanh tab hay nút đóng thô kệch. Khi phát nhạc, hiển thị mini artwork bên trái và sóng equalizer 3 vạch nhảy nhịp nhàng bên phải. Khi sạc pin, hiển thị biểu tượng tia sét ⚡ và % pin.
- **Expanded Music Player (iPhone Style):** 
  - Bên trái: Album artwork hình vuông bo góc mềm 12px cùng hiệu ứng đĩa than tinh xảo.
  - Ở giữa: Tên bài hát đậm nét, tên nghệ sĩ thanh tú (tự động cắt ellipsis).
  - Bên phải: Cụm sóng âm Music Visualizer chuyển động sống động.
  - Phía dưới: Thanh thời gian (Progress Bar) siêu mảnh, nhãn thời lượng thực (`01:24 / 03:45`) cùng bộ nút điều khiển tối giản không viền hộp (`⏮`, `⏯`, `⏭`).
- **Context-Aware Dynamic Activities (Không Tab, Không Dashboard):**
  - Tự động thay đổi layout theo ngữ cảnh sự kiện đang diễn ra:
    - **Music:** Trình phát nhạc cao cấp đầy đủ điều khiển.
    - **Clipboard:** Tự bung xem trước nội dung khi nhấn Ctrl+C (văn bản, tệp, ảnh) và tự thu gọn sau 3s.
    - **Downloads:** Nhận diện trình duyệt tải tệp và thông báo khi hoàn tất.
    - **Battery:** Hiệu ứng cắm sạc pin và cảnh báo pin yếu < 20%.
- **Liquid Glass Reflection:** Nền Obsidian đen sâu bán trong suốt kết hợp DWM Acrylic Blur, vòm phản chiếu Specular Glare chân thực, viền kính 1px Specular Rim Light tinh tế, đổ bóng mềm nhiều lớp. Hỗ trợ 4 phong cách: Liquid Glass, Obsidian Dark, Frosted Acrylic và Porcelain Light.
- **Spring Physics Animation & Zero CPU:** Co giãn mượt mà theo vật lý lò xo, tự ngắt hoàn toàn timer khi về trạng thái nghỉ (Zero Idle CPU – 0.0%), hỗ trợ Windows Reduce Motion.

## 🚀 Hướng Dẫn Cài Đặt Trong Windhawk

1. Mở **Windhawk**.
2. Nhấn vào biểu tượng menu hoặc click **"Create a Mod"** (hoặc mở mod đã tạo).
3. Sao chép toàn bộ mã nguồn trong tệp `dynamic-island-pro.wh.cpp` và dán vào trình soạn thảo của Windhawk.
4. Nhấn **Compile** (`Ctrl + S` hoặc `Ctrl + B`), sau đó nhấn **Save**.
5. Bật công tắc sang **Enabled** để trải nghiệm.

## 🛠 Công Nghệ Sử Dụng

- C++17 / C++23
- Win32 API & Windows DWM (`dwmapi.h`)
- Direct2D Hardware Acceleration (`d2d1.h`)
- DirectWrite Typography (`dwrite.h`)
- Windows Native Clipboard Format Listener (`winuser.h`)
- Windhawk Mod API

## 📄 Bản Quyền & Tác Giả

- Tác giả: **Le Quoc Tin**
- GitHub: [https://github.com/lequoctin7526-bit/dynamic-island.git](https://github.com/lequoctin7526-bit/dynamic-island.git)
- Giấy phép: MIT License
