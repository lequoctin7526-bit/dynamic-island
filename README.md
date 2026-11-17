# Dynamic Island Pro – Liquid Glass for Windhawk (v1.1.0)

![Dynamic Island Pro](https://raw.githubusercontent.com/devcode90/Dynamic-Island-for-Windows/793cf954d51aa9748c39d544187fab6e25ecd0fb/previews/desktop.png)

Dynamic Island Pro mang đến giao diện **Dynamic Island** phong cách **Liquid Glass** cao cấp cho Windows 10 và Windows 11 dưới dạng một mod gốc chạy trực tiếp bên trong [Windhawk](https://windhawk.net/).

## ✨ Tính Năng Nổi Bật (Version 1.1.0)

- **Liquid Glass Reflection:** Vòm phản chiếu specular sheen chân thực, viền kính 1px specular rim light, và đổ bóng đa lớp mềm mại. Hỗ trợ 4 phong cách: Liquid Glass, Obsidian Dark, Frosted Acrylic và Porcelain Light.
- **Spring Physics Animation:** Chuyển động đàn hồi siêu mượt, tự động thay đổi chiều cao thông minh theo nội dung từng Tab, tự động dừng render hoàn toàn khi ở trạng thái nghỉ (Zero Idle CPU – 0.0%).
- **Music Player & Vinyl Disc:** Tự động nhận diện bài hát (Spotify, YouTube, Apple Music, Media Player,...), đĩa than Vinyl xoay tròn tinh tế, dàn sóng nhạc Equalizer 6 cột, thanh tiến trình bài hát thời gian thực và các nút điều khiển trực tiếp (`⏮`, `⏯`, `⏭`).
- **Clipboard Preview (Bộ Nhớ Tạm):** Tích hợp listener Windows native, tự động bung Island hiển thị xem trước khi người dùng sao chép văn bản, tệp hoặc hình ảnh (Ctrl+C).
- **Downloads Tracker (Tiến Trình Tải Xuống):** Tự động phát hiện khi trình duyệt (Chrome, Edge, Firefox,...) đang tải file và thông báo ngay khi tải xong.
- **Battery & Charging Telemetry:** Tự động thông báo khi cắm sạc (kèm tia sét ⚡) hoặc ngắt sạc, cảnh báo khi pin yếu dưới 20%.
- **Bảng Theo Dõi Hệ Thống:** Giám sát trực tiếp CPU, RAM và thời lượng Pin với thiết kế thẻ kính hiện đại.
- **Low Performance Mode:** Tối ưu hóa cho máy cấu hình thấp hoặc laptop tiết kiệm pin.

## 🚀 Hướng Dẫn Cài Đặt Trong Windhawk

1. Cài đặt và mở **Windhawk**.
2. Nhấn vào biểu tượng menu hoặc click **"Create a Mod"**.
3. Sao chép toàn bộ mã nguồn trong tệp `dynamic-island-pro.wh.cpp` và dán vào trình soạn thảo của Windhawk.
4. Nhấn **Compile** (`Ctrl + S`), sau đó chọn **Save**.
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
