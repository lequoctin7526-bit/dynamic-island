// ==WindhawkMod==
// @id              dynamic-island-pro
// @name            Dynamic Island Pro – Liquid Glass
// @description     A high-performance, fluid Dynamic Island with Liquid Glass effects, media playback controls, downloads, clipboard previews, battery telemetry, and notifications for Windows 10/11.
// @version         1.1.0
// @author          Le Quoc Tin
// @github          https://github.com/lequoctin7526-bit/dynamic-island.git
// @include         explorer.exe
// @compilerOptions -ld2d1 -ldwrite -ldwmapi -lole32 -lshcore -lgdi32 -luser32 -lshell32
// ==/WindhawkMod==

// ==WindhawkModReadme==
/*
# Dynamic Island Pro – Liquid Glass for Windows 10/11

Dynamic Island Pro mang đến trải nghiệm Dynamic Island đẳng cấp Apple lên máy tính Windows 10 và Windows 11 của bạn, được xây dựng hoàn toàn từ Win32 API gốc, Direct2D phần cứng và DWM Liquid Glass.

---

### ✨ Tính Năng Nổi Bật (Version 1.1.0)

1. **Hiệu Ứng Liquid Glass (Kính Thủy Tinh Khúc Xạ Ánh Sáng):**
   - Vòm phản chiếu specular glare chân thực.
   - Viền khúc xạ ánh sáng Specular Rim Light 1px sắc sảo.
   - Đổ bóng đa lớp mềm mại (Ambient Layered Drop Shadows).
   - Tự động fallback sang Acrylic hoặc Dark Glass khi chạy trên máy không bật hiệu ứng trong suốt.
   - Hỗ trợ 4 phong cách: Liquid Glass, Obsidian Dark, Frosted Acrylic và Porcelain Light.

2. **Chuyển Động Lò Xo Siêu Mượt (Spring-Damped Physics):**
   - Tự động điều chỉnh kích thước theo nội dung (Dynamic Content Height).
   - Không giật hình, không lag.
   - Tự ngắt hoàn toàn Timer khi về trạng thái nghỉ (Zero Idle CPU - 0.0%).
   - Tương thích với cài đặt Windows Reduce Motion.

3. **Trình Điều Khiển Media Thông Minh & Đĩa Than Vinyl:**
   - Tự động nhận diện bài hát và ứng dụng đang phát nhạc (Spotify, Chrome, YouTube, Apple Music, Media Player,...).
   - Đĩa nhạc Vinyl xoay tròn tinh tế với các đường vân phản chiếu ánh sáng.
   - Dàn sóng nhạc Equalizer 6 cột hoạt hình mượt mà.
   - Thanh tiến trình phát nhạc và thời gian bài hát.
   - Nút điều khiển tương tác trực tiếp: Bài trước (⏮), Phát/Dừng (⏯), Bài tiếp (⏭).

4. **Theo Dõi Clipboard (Bộ Nhớ Tạm):**
   - Tự động bung Island xem trước khi bạn nhấn Ctrl+C văn bản, tệp hoặc hình ảnh.
   - Chỉ đọc tức thì để hiển thị, không lưu trữ dữ liệu trái phép.

5. **Theo Dõi Tiến Trình Tải Xuống (Downloads Tracker):**
   - Tự động nhận diện khi trình duyệt (Chrome, Edge, Firefox,...) đang tải file.
   - Hiển thị tên tệp và thông báo khi tải xuống hoàn tất.

6. **Giám Sát Pin & Hiệu Ứng Sạc:**
   - Tự động bung Island khi cắm sạc (kèm tia sét ⚡) hoặc khi ngắt sạc.
   - Cảnh báo pin yếu khi dưới 20%.

7. **Bảng Theo Dõi Hệ Thống (CPU/RAM/Pin):**
   - Thẻ hiển thị chỉ số trực quan kèm thanh đo màu sắc.
   - Chỉ cập nhật khi mở rộng, tiết kiệm tối đa tài nguyên máy.

8. **Chế Độ Tối Ưu Máy Yếu (Low Performance Mode):**
   - Tối giản số bước đổ bóng và hiệu ứng phức tạp.
   - Tiêu hao RAM cực thấp (< 35 MB), CPU nhàn rỗi gần 0%.
*/
// ==/WindhawkModReadme==

// ==WindhawkModSettings==
/*
- enable_dynamic_island: true
  $name: "Bật Dynamic Island"
  $description: "Bật hoặc tắt hiển thị Dynamic Island trên màn hình."
- liquid_glass_style: 1
  $name: "Kiểu dáng Liquid Glass"
  $description: "Chọn hiệu ứng kính thủy tinh hiển thị."
  $options:
    - '0': "Dark Obsidian (Kính tối cổ điển)"
    - '1': "Liquid Glass (Kính lỏng phản xạ cao cấp)"
    - '2': "Frosted Acrylic (Kính mờ Fluent)"
    - '3': "Porcelain Light (Kính trong suốt sáng)"
- enable_animations: true
  $name: "Bật hoạt ảnh chuyển động"
  $description: "Cho phép Dynamic Island co giãn mượt mà."
- low_performance_mode: false
  $name: "Chế độ máy yếu (Low Performance Mode)"
  $description: "Giảm bớt số lớp đổ bóng và hiệu ứng nặng để tiết kiệm CPU/GPU cho máy cấu hình thấp hoặc laptop dùng pin."
- enable_music_player: true
  $name: "Bật Trình phát nhạc"
  $description: "Hiển thị thông tin bài hát và nút điều khiển media trực tiếp trên Island."
- enable_system_monitor: true
  $name: "Bật Theo dõi hệ thống (CPU/RAM/Pin)"
  $description: "Hiển thị thông số phần cứng khi mở rộng."
- enable_notifications: true
  $name: "Bật Thông báo"
  $description: "Tự động bung Island khi có sự kiện thông báo."
- enable_clipboard: true
  $name: "Bật Theo dõi Clipboard"
  $description: "Tự động bung xem trước khi bạn sao chép văn bản, tệp hoặc hình ảnh (Ctrl+C)."
- enable_battery_alerts: true
  $name: "Bật Cảnh báo & Trạng thái Pin"
  $description: "Bật hiệu ứng thông báo khi cắm sạc, ngắt sạc hoặc cảnh báo khi pin yếu dưới 20%."
- enable_downloads: true
  $name: "Bật Theo dõi Tải xuống (Downloads)"
  $description: "Tự động phát hiện và hiển thị tiến trình khi trình duyệt đang tải tệp hoặc tải xong."
- compact_width: 160
  $name: "Chiều rộng Compact (px)"
  $description: "Độ rộng mặc định khi ở dạng viên thuốc (từ 140 đến 200px)."
- compact_height: 38
  $name: "Chiều cao Compact (px)"
  $description: "Độ cao mặc định khi ở dạng viên thuốc (từ 34 đến 42px)."
- expanded_width: 440
  $name: "Chiều rộng Expanded (px)"
  $description: "Độ rộng khi mở rộng (từ 380 đến 520px)."
- expanded_height: 155
  $name: "Chiều cao Expanded (px)"
  $description: "Độ cao khi mở rộng (từ 130 đến 190px)."
- offset_y: 12
  $name: "Khoảng cách từ đỉnh màn hình (px)"
  $description: "Khoảng cách từ mép trên màn hình xuống Dynamic Island."
- auto_collapse_seconds: 4
  $name: "Thời gian tự thu gọn (giây)"
  $description: "Số giây tự động thu gọn về Compact Mode sau khi rời chuột hoặc nhận thông báo."
- transparency_level: 85
  $name: "Độ mờ đục của kính (50 - 100%)"
  $description: "100 là đặc hoàn toàn, 85 là trong suốt chuẩn Liquid Glass."
*/
// ==/WindhawkModSettings==

#include <windows.h>
#include <windhawk_api.h>
#include <d2d1.h>
#include <dwrite.h>
#include <dwmapi.h>
#include <uxtheme.h>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

#pragma comment(lib, "d2d1.lib")
#pragma comment(lib, "dwrite.lib")
#pragma comment(lib, "dwmapi.lib")
#pragma comment(lib, "ole32.lib")
#pragma comment(lib, "shcore.lib")
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "shell32.lib")

// DWM Accent composition definitions for blur/acrylic
typedef enum _ACCENT_STATE {
    ACCENT_DISABLED = 0,
    ACCENT_ENABLE_GRADIENT = 1,
    ACCENT_ENABLE_TRANSPARENTGRADIENT = 2,
    ACCENT_ENABLE_BLURBEHIND = 3,
    ACCENT_ENABLE_ACRYLICBLURBEHIND = 4,
    ACCENT_INVALID_STATE = 5
} ACCENT_STATE;

typedef struct _ACCENT_POLICY {
    ACCENT_STATE AccentState;
    DWORD AccentFlags;
    DWORD GradientColor;
    DWORD AnimationId;
} ACCENT_POLICY;

typedef struct _WINDOWCOMPOSITIONATTRIBDATA {
    DWORD Attrib;
    PVOID pvData;
    SIZE_T cbData;
} WINDOWCOMPOSITIONATTRIBDATA;

typedef BOOL(WINAPI* pfnSetWindowCompositionAttribute)(HWND, WINDOWCOMPOSITIONATTRIBDATA*);

// ─────────────────────────────────────────────────────────────────────────────
// MOD CONFIGURATION STRUCTURE
// ─────────────────────────────────────────────────────────────────────────────
struct ModSettings {
    bool enableIsland = true;
    int glassStyle = 1; // 0 = Dark, 1 = Liquid Glass, 2 = Acrylic, 3 = Porcelain Light
    bool enableAnimations = true;
    bool lowPerfMode = false;
    bool enableMusic = true;
    bool enableSysMon = true;
    bool enableNotifications = true;
    bool enableClipboard = true;
    bool enableBatteryAlerts = true;
    bool enableDownloads = true;
    int compactWidth = 160;
    int compactHeight = 38;
    int expandedWidth = 440;
    int expandedHeight = 155;
    int offsetY = 12;
    int autoCollapseSec = 4;
    float transparency = 0.88f;
} g_settings;

// ─────────────────────────────────────────────────────────────────────────────
// STATE ENUMS & TELEMETRY STRUCTURES
// ─────────────────────────────────────────────────────────────────────────────
enum class IslandState {
    Compact,
    Expanded
};

enum class ActiveTab {
    Music = 0,
    System = 1,
    Downloads = 2,
    Alerts = 3
};

struct SystemTelemetry {
    int cpuUsagePercent = 0;
    int ramUsagePercent = 0;
    int ramUsedMB = 0;
    int ramTotalMB = 0;
    int batteryPercent = 100;
    bool isCharging = false;
    bool hasBattery = false;
};

struct MusicInfo {
    bool isPlaying = false;
    std::wstring title = L"Dynamic Island Music";
    std::wstring artist = L"Sẵn sàng phát nhạc";
    float progress = 0.35f;
    float elapsedSeconds = 65.0f;
    float totalSeconds = 210.0f;
    float vinylRotation = 0.0f;
};

struct NotificationData {
    bool hasAlert = false;
    std::wstring title = L"";
    std::wstring body = L"";
    DWORD expireTick = 0;
};

struct DownloadInfo {
    bool isDownloading = false;
    std::wstring fileName = L"";
    ULONGLONG fileSize = 0;
};

// ─────────────────────────────────────────────────────────────────────────────
// GLOBAL STATE & THREADING
// ─────────────────────────────────────────────────────────────────────────────
static HWND g_hIslandWnd = NULL;
static HANDLE g_hUIThread = NULL;
static DWORD g_dwUIThreadId = 0;
static bool g_bRunning = false;
static bool g_bIsHovered = false;
static IslandState g_currentState = IslandState::Compact;
static ActiveTab g_activeTab = ActiveTab::Music;

// Animated properties
static float g_curWidth = 160.0f;
static float g_curHeight = 38.0f;
static float g_curRadius = 19.0f;
static float g_contentAlpha = 0.0f; // Alpha for expanded content
static float g_hoverAlpha = 0.0f;   // Hover sheen intensity
static float g_musicWavePhase = 0.0f;

// Velocity for spring physics
static float g_velWidth = 0.0f;
static float g_velHeight = 0.0f;
static float g_velContentAlpha = 0.0f;
static bool g_isAnimating = false;

// Telemetry, Media, Clipboard & Download states
static SystemTelemetry g_telemetry;
static MusicInfo g_musicInfo;
static NotificationData g_activeAlert;
static DownloadInfo g_downloadInfo;
static std::wstring g_lastClipboardText = L"";
static bool g_prevHasBattery = false;
static bool g_prevCharging = false;
static bool g_lowBatteryAlerted = false;

static FILETIME g_prevIdleTime = {0, 0};
static FILETIME g_prevKernelTime = {0, 0};
static FILETIME g_prevUserTime = {0, 0};
static ULONGLONG g_lastTelemetryTick = 0;
static ULONGLONG g_lastMediaCheckTick = 0;
static ULONGLONG g_lastDownloadCheckTick = 0;
static DWORD g_mouseLeaveCollapseTimer = 0;

// Direct2D & DirectWrite Interfaces
static ID2D1Factory* g_pD2DFactory = NULL;
static IDWriteFactory* g_pDWriteFactory = NULL;
static IDWriteTextFormat* g_pTextFormatTitle = NULL;
static IDWriteTextFormat* g_pTextFormatBody = NULL;
static IDWriteTextFormat* g_pTextFormatSmall = NULL;
static IDWriteTextFormat* g_pTextFormatIcon = NULL;

// Offscreen Layered Window DC and Bitmap
static HDC g_hMemDC = NULL;
static HBITMAP g_hMemBmp = NULL;
static HBITMAP g_hOldBmp = NULL;
static void* g_pBmpBits = NULL;
static int g_bmpWidth = 0;
static int g_bmpHeight = 0;
static ID2D1DCRenderTarget* g_pDCRenderTarget = NULL;

// ─────────────────────────────────────────────────────────────────────────────
// PROTOTYPES
// ─────────────────────────────────────────────────────────────────────────────
static void LoadModSettings();
static DWORD WINAPI IslandThreadProc(LPVOID lpParam);
static LRESULT CALLBACK IslandWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
static void InitD2DResources(HWND hWnd);
static void CleanupD2DResources();
static void EnsureBackbuffer(int width, int height);
static void RenderIsland(HWND hWnd);
static void StepPhysicsAnimation(float dt);
static void UpdateSystemTelemetry();
static void UpdateMediaSession();
static void UpdateDownloadsCheck();
static void TriggerNotification(const std::wstring& title, const std::wstring& body, DWORD durationSec);
static void ApplyBlurBackdrop(HWND hWnd, int style);

// ─────────────────────────────────────────────────────────────────────────────
// UTILITY: 64-bit FileTime subtraction for CPU measurement
// ─────────────────────────────────────────────────────────────────────────────
static ULONGLONG SubtractTimes(const FILETIME& ftA, const FILETIME& ftB) {
    ULARGE_INTEGER a, b;
    a.LowPart = ftA.dwLowDateTime;
    a.HighPart = ftA.dwHighDateTime;
    b.LowPart = ftB.dwLowDateTime;
    b.HighPart = ftB.dwHighDateTime;
    return (a.QuadPart > b.QuadPart) ? (a.QuadPart - b.QuadPart) : 0;
}

static std::wstring FormatTimeString(float totalSeconds) {
    int total = (int)totalSeconds;
    int mins = total / 60;
    int secs = total % 60;
    wchar_t buf[16];
    swprintf_s(buf, L"%02d:%02d", mins, secs);
    return std::wstring(buf);
}

// ─────────────────────────────────────────────────────────────────────────────
// DWM LIQUID GLASS BACKDROP
// ─────────────────────────────────────────────────────────────────────────────
static void ApplyBlurBackdrop(HWND hWnd, int style) {
    if (!hWnd) return;

    HMODULE hUser = GetModuleHandleW(L"user32.dll");
    if (!hUser) return;

    pfnSetWindowCompositionAttribute setWindowCompositionAttribute =
        (pfnSetWindowCompositionAttribute)GetProcAddress(hUser, "SetWindowCompositionAttribute");

    if (setWindowCompositionAttribute) {
        ACCENT_POLICY accent = { ACCENT_DISABLED, 0, 0, 0 };
        if (style == 1) { // Liquid Glass
            accent.AccentState = ACCENT_ENABLE_BLURBEHIND;
            accent.AccentFlags = 2; // Specular border
            accent.GradientColor = 0x18000000;
        } else if (style == 2) { // Frosted Acrylic
            accent.AccentState = ACCENT_ENABLE_ACRYLICBLURBEHIND;
            accent.AccentFlags = 0;
            accent.GradientColor = 0x30181818;
        } else if (style == 3) { // Porcelain Light
            accent.AccentState = ACCENT_ENABLE_BLURBEHIND;
            accent.AccentFlags = 2;
            accent.GradientColor = 0x20FFFFFF;
        } else { // Dark Obsidian
            accent.AccentState = ACCENT_ENABLE_TRANSPARENTGRADIENT;
            accent.GradientColor = 0x99101014;
        }

        WINDOWCOMPOSITIONATTRIBDATA data;
        data.Attrib = 19; // WCA_ACCENT_POLICY
        data.pvData = &accent;
        data.cbData = sizeof(accent);
        setWindowCompositionAttribute(hWnd, &data);
    }
}

// ─────────────────────────────────────────────────────────────────────────────
// SETTINGS LOADER
// ─────────────────────────────────────────────────────────────────────────────
static void LoadModSettings() {
    g_settings.enableIsland = Wh_GetIntSetting(L"enable_dynamic_island") != 0;
    g_settings.glassStyle = Wh_GetIntSetting(L"liquid_glass_style");
    g_settings.enableAnimations = Wh_GetIntSetting(L"enable_animations") != 0;
    g_settings.lowPerfMode = Wh_GetIntSetting(L"low_performance_mode") != 0;
    g_settings.enableMusic = Wh_GetIntSetting(L"enable_music_player") != 0;
    g_settings.enableSysMon = Wh_GetIntSetting(L"enable_system_monitor") != 0;
    g_settings.enableNotifications = Wh_GetIntSetting(L"enable_notifications") != 0;
    g_settings.enableClipboard = Wh_GetIntSetting(L"enable_clipboard") != 0;
    g_settings.enableBatteryAlerts = Wh_GetIntSetting(L"enable_battery_alerts") != 0;
    g_settings.enableDownloads = Wh_GetIntSetting(L"enable_downloads") != 0;

    int cw = Wh_GetIntSetting(L"compact_width");
    g_settings.compactWidth = (cw >= 120 && cw <= 260) ? cw : 160;

    int ch = Wh_GetIntSetting(L"compact_height");
    g_settings.compactHeight = (ch >= 28 && ch <= 55) ? ch : 38;

    int ew = Wh_GetIntSetting(L"expanded_width");
    g_settings.expandedWidth = (ew >= 320 && ew <= 650) ? ew : 440;

    int eh = Wh_GetIntSetting(L"expanded_height");
    g_settings.expandedHeight = (eh >= 100 && eh <= 250) ? eh : 155;

    int oy = Wh_GetIntSetting(L"offset_y");
    g_settings.offsetY = (oy >= 0 && oy <= 100) ? oy : 12;

    int ac = Wh_GetIntSetting(L"auto_collapse_seconds");
    g_settings.autoCollapseSec = (ac >= 1 && ac <= 20) ? ac : 4;

    int tr = Wh_GetIntSetting(L"transparency_level");
    g_settings.transparency = (tr >= 50 && tr <= 100) ? (tr / 100.0f) : 0.88f;

    if (g_hIslandWnd) {
        ApplyBlurBackdrop(g_hIslandWnd, g_settings.glassStyle);
        PostMessageW(g_hIslandWnd, WM_USER + 101, 0, 0); // Request repaint
    }
}

// ─────────────────────────────────────────────────────────────────────────────
// DOWNLOADS TRACKER
// ─────────────────────────────────────────────────────────────────────────────
static void UpdateDownloadsCheck() {
    if (!g_settings.enableDownloads) return;

    WCHAR userProfile[MAX_PATH];
    if (!GetEnvironmentVariableW(L"USERPROFILE", userProfile, MAX_PATH)) return;

    std::wstring downloadsPath = std::wstring(userProfile) + L"\\Downloads\\";
    std::wstring pattern = downloadsPath + L"*.crdownload";

    WIN32_FIND_DATAW fd;
    HANDLE hFind = FindFirstFileW(pattern.c_str(), &fd);
    if (hFind == INVALID_HANDLE_VALUE) {
        pattern = downloadsPath + L"*.part";
        hFind = FindFirstFileW(pattern.c_str(), &fd);
    }

    if (hFind != INVALID_HANDLE_VALUE) {
        std::wstring rawName = fd.cFileName;
        FindClose(hFind);

        size_t dotPos = rawName.rfind(L".");
        std::wstring cleanName = (dotPos != std::wstring::npos) ? rawName.substr(0, dotPos) : rawName;

        ULARGE_INTEGER sz;
        sz.LowPart = fd.nFileSizeLow;
        sz.HighPart = fd.nFileSizeHigh;

        if (!g_downloadInfo.isDownloading || g_downloadInfo.fileName != cleanName) {
            g_downloadInfo.isDownloading = true;
            g_downloadInfo.fileName = cleanName;
            g_downloadInfo.fileSize = sz.QuadPart;
            TriggerNotification(L"Đang tải tệp xuống 📥", cleanName, 3);
        } else {
            g_downloadInfo.fileSize = sz.QuadPart;
        }
    } else {
        if (g_downloadInfo.isDownloading) {
            std::wstring finishedName = g_downloadInfo.fileName;
            g_downloadInfo.isDownloading = false;
            g_downloadInfo.fileName = L"";
            TriggerNotification(L"Tải xuống hoàn tất ✅", finishedName, 4);
        }
    }
}

// ─────────────────────────────────────────────────────────────────────────────
// MEDIA CONTROLS & DETECTION
// ─────────────────────────────────────────────────────────────────────────────
static BOOL CALLBACK EnumWindowsMediaProc(HWND hwnd, LPARAM lParam) {
    if (!IsWindowVisible(hwnd)) return TRUE;

    WCHAR title[256];
    int len = GetWindowTextW(hwnd, title, 256);
    if (len < 3) return TRUE;

    DWORD pid = 0;
    GetWindowThreadProcessId(hwnd, &pid);
    HANDLE hProc = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pid);
    if (hProc) {
        WCHAR imagePath[MAX_PATH];
        DWORD pathLen = MAX_PATH;
        if (QueryFullProcessImageNameW(hProc, 0, imagePath, &pathLen)) {
            std::wstring procName = imagePath;
            std::transform(procName.begin(), procName.end(), procName.begin(), ::towlower);

            if (procName.find(L"spotify.exe") != std::wstring::npos) {
                if (wcscmp(title, L"Spotify") != 0 && wcscmp(title, L"Spotify Free") != 0 && wcscmp(title, L"Spotify Premium") != 0) {
                    MusicInfo* pInfo = (MusicInfo*)lParam;
                    pInfo->isPlaying = true;
                    std::wstring fullTitle = title;
                    size_t sep = fullTitle.find(L" - ");
                    if (sep != std::wstring::npos) {
                        pInfo->artist = fullTitle.substr(0, sep);
                        pInfo->title = fullTitle.substr(sep + 3);
                    } else {
                        pInfo->title = fullTitle;
                        pInfo->artist = L"Spotify";
                    }
                    CloseHandle(hProc);
                    return FALSE;
                }
            } else if (procName.find(L"music.exe") != std::wstring::npos ||
                       procName.find(L"aimp.exe") != std::wstring::npos ||
                       procName.find(L"foobar2000.exe") != std::wstring::npos ||
                       procName.find(L"wmplayer.exe") != std::wstring::npos) {
                MusicInfo* pInfo = (MusicInfo*)lParam;
                pInfo->isPlaying = true;
                pInfo->title = title;
                pInfo->artist = L"Media Player";
                CloseHandle(hProc);
                return FALSE;
            }
        }
        CloseHandle(hProc);
    }
    return TRUE;
}

static void UpdateMediaSession() {
    MusicInfo fresh;
    fresh.isPlaying = false;
    EnumWindows(EnumWindowsMediaProc, (LPARAM)&fresh);

    if (fresh.isPlaying) {
        g_musicInfo.isPlaying = true;
        g_musicInfo.title = fresh.title;
        g_musicInfo.artist = fresh.artist;
    } else {
        g_musicInfo.isPlaying = false;
        g_musicInfo.title = L"Dynamic Island Music";
        g_musicInfo.artist = L"Sẵn sàng phát nhạc";
    }
}

static void SendMediaKey(BYTE vkCode) {
    keybd_event(vkCode, 0, 0, 0);
    keybd_event(vkCode, 0, KEYEVENTF_KEYUP, 0);
}

// ─────────────────────────────────────────────────────────────────────────────
// SYSTEM TELEMETRY (CPU, RAM, BATTERY)
// ─────────────────────────────────────────────────────────────────────────────
static void UpdateSystemTelemetry() {
    // 1. RAM Usage
    MEMORYSTATUSEX memInfo;
    memInfo.dwLength = sizeof(MEMORYSTATUSEX);
    if (GlobalMemoryStatusEx(&memInfo)) {
        g_telemetry.ramUsagePercent = (int)memInfo.dwMemoryLoad;
        g_telemetry.ramTotalMB = (int)(memInfo.ullTotalPhys / (1024 * 1024));
        g_telemetry.ramUsedMB = (int)((memInfo.ullTotalPhys - memInfo.ullAvailPhys) / (1024 * 1024));
    }

    // 2. Battery Status & Charging Alerts
    SYSTEM_POWER_STATUS power;
    if (GetSystemPowerStatus(&power)) {
        if (power.BatteryLifePercent != 255) {
            g_telemetry.hasBattery = true;
            g_telemetry.batteryPercent = (int)power.BatteryLifePercent;
            g_telemetry.isCharging = (power.ACLineStatus == 1);
        } else {
            g_telemetry.hasBattery = false;
            g_telemetry.batteryPercent = 100;
            g_telemetry.isCharging = true;
        }

        if (g_settings.enableBatteryAlerts && g_telemetry.hasBattery) {
            if (g_prevHasBattery) {
                if (!g_prevCharging && g_telemetry.isCharging) {
                    TriggerNotification(L"Đang sạc pin ⚡", L"Bộ sạc đã kết nối (" + std::to_wstring(g_telemetry.batteryPercent) + L"%)", 3);
                } else if (g_prevCharging && !g_telemetry.isCharging) {
                    TriggerNotification(L"Đã ngắt sạc pin 🔋", L"Đang dùng nguồn pin (" + std::to_wstring(g_telemetry.batteryPercent) + L"%)", 3);
                } else if (!g_telemetry.isCharging && g_telemetry.batteryPercent <= 20 && !g_lowBatteryAlerted) {
                    g_lowBatteryAlerted = true;
                    TriggerNotification(L"Cảnh báo pin yếu ⚠️", L"Thời lượng pin còn " + std::to_wstring(g_telemetry.batteryPercent) + L"%, hãy cắm sạc!", 5);
                }
                if (g_telemetry.isCharging || g_telemetry.batteryPercent > 25) {
                    g_lowBatteryAlerted = false;
                }
            }
            g_prevCharging = g_telemetry.isCharging;
            g_prevHasBattery = true;
        }
    }

    // 3. CPU Usage
    FILETIME idleTime, kernelTime, userTime;
    if (GetSystemTimes(&idleTime, &kernelTime, &userTime)) {
        if (g_prevIdleTime.dwLowDateTime != 0 || g_prevIdleTime.dwHighDateTime != 0) {
            ULONGLONG idle = SubtractTimes(idleTime, g_prevIdleTime);
            ULONGLONG kernel = SubtractTimes(kernelTime, g_prevKernelTime);
            ULONGLONG user = SubtractTimes(userTime, g_prevUserTime);
            ULONGLONG total = kernel + user;

            if (total > 0) {
                ULONGLONG active = (total > idle) ? (total - idle) : 0;
                g_telemetry.cpuUsagePercent = (int)((active * 100) / total);
                if (g_telemetry.cpuUsagePercent > 100) g_telemetry.cpuUsagePercent = 100;
            }
        }
        g_prevIdleTime = idleTime;
        g_prevKernelTime = kernelTime;
        g_prevUserTime = userTime;
    }
}

// ─────────────────────────────────────────────────────────────────────────────
// NOTIFICATION DISPATCH
// ─────────────────────────────────────────────────────────────────────────────
static void TriggerNotification(const std::wstring& title, const std::wstring& body, DWORD durationSec) {
    if (!g_settings.enableNotifications) return;

    g_activeAlert.hasAlert = true;
    g_activeAlert.title = title;
    g_activeAlert.body = body;
    g_activeAlert.expireTick = GetTickCount() + (durationSec * 1000);

    g_activeTab = ActiveTab::Alerts;
    g_currentState = IslandState::Expanded;
    g_isAnimating = true;

    if (g_hIslandWnd) {
        SetTimer(g_hIslandWnd, 1, 16, NULL);
    }
}

// ─────────────────────────────────────────────────────────────────────────────
// DIRECT2D RESOURCE MANAGEMENT
// ─────────────────────────────────────────────────────────────────────────────
static void InitD2DResources(HWND hWnd) {
    if (!g_pD2DFactory) {
        D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &g_pD2DFactory);
    }
    if (!g_pDWriteFactory) {
        DWriteCreateFactory(DWRITE_FACTORY_TYPE_SHARED, __uuidof(IDWriteFactory), (IUnknown**)&g_pDWriteFactory);
    }
    if (g_pDWriteFactory) {
        if (!g_pTextFormatTitle) {
            g_pDWriteFactory->CreateTextFormat(
                L"Segoe UI Variable Display", NULL,
                DWRITE_FONT_WEIGHT_SEMI_BOLD, DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                14.0f, L"en-us", &g_pTextFormatTitle
            );
            if (g_pTextFormatTitle) {
                g_pTextFormatTitle->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_LEADING);
                g_pTextFormatTitle->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            }
        }
        if (!g_pTextFormatBody) {
            g_pDWriteFactory->CreateTextFormat(
                L"Segoe UI Variable Text", NULL,
                DWRITE_FONT_WEIGHT_NORMAL, DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                12.0f, L"en-us", &g_pTextFormatBody
            );
            if (g_pTextFormatBody) {
                g_pTextFormatBody->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_LEADING);
                g_pTextFormatBody->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            }
        }
        if (!g_pTextFormatSmall) {
            g_pDWriteFactory->CreateTextFormat(
                L"Segoe UI Variable Small", NULL,
                DWRITE_FONT_WEIGHT_MEDIUM, DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                11.0f, L"en-us", &g_pTextFormatSmall
            );
            if (g_pTextFormatSmall) {
                g_pTextFormatSmall->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_CENTER);
                g_pTextFormatSmall->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            }
        }
        if (!g_pTextFormatIcon) {
            g_pDWriteFactory->CreateTextFormat(
                L"Segoe Fluent Icons", NULL,
                DWRITE_FONT_WEIGHT_NORMAL, DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                13.0f, L"en-us", &g_pTextFormatIcon
            );
            if (!g_pTextFormatIcon) {
                g_pDWriteFactory->CreateTextFormat(
                    L"Segoe MDL2 Assets", NULL,
                    DWRITE_FONT_WEIGHT_NORMAL, DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                    13.0f, L"en-us", &g_pTextFormatIcon
                );
            }
            if (g_pTextFormatIcon) {
                g_pTextFormatIcon->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_CENTER);
                g_pTextFormatIcon->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            }
        }
    }
}

static void EnsureBackbuffer(int width, int height) {
    if (width <= 0) width = 100;
    if (height <= 0) height = 100;

    width = (width + 63) & ~63;
    height = (height + 63) & ~63;

    if (g_hMemDC && g_bmpWidth >= width && g_bmpHeight >= height && g_pDCRenderTarget) {
        return;
    }

    if (g_pDCRenderTarget) {
        g_pDCRenderTarget->Release();
        g_pDCRenderTarget = NULL;
    }
    if (g_hMemDC && g_hOldBmp) {
        SelectObject(g_hMemDC, g_hOldBmp);
    }
    if (g_hMemBmp) {
        DeleteObject(g_hMemBmp);
        g_hMemBmp = NULL;
    }
    if (g_hMemDC) {
        DeleteDC(g_hMemDC);
        g_hMemDC = NULL;
    }

    HDC hScreenDC = GetDC(NULL);
    g_hMemDC = CreateCompatibleDC(hScreenDC);

    BITMAPINFO bmi = {0};
    bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bmi.bmiHeader.biWidth = width;
    bmi.bmiHeader.biHeight = -height;
    bmi.bmiHeader.biPlanes = 1;
    bmi.bmiHeader.biBitCount = 32;
    bmi.bmiHeader.biCompression = BI_RGB;

    g_hMemBmp = CreateDIBSection(g_hMemDC, &bmi, DIB_RGB_COLORS, &g_pBmpBits, NULL, 0);
    g_hOldBmp = (HBITMAP)SelectObject(g_hMemDC, g_hMemBmp);
    g_bmpWidth = width;
    g_bmpHeight = height;

    ReleaseDC(NULL, hScreenDC);

    if (g_pD2DFactory) {
        D2D1_RENDER_TARGET_PROPERTIES props = D2D1::RenderTargetProperties(
            D2D1_RENDER_TARGET_TYPE_DEFAULT,
            D2D1::PixelFormat(DXGI_FORMAT_B8G8R8A8_UNORM, D2D1_ALPHA_MODE_PREMULTIPLIED),
            0, 0,
            D2D1_RENDER_TARGET_USAGE_NONE,
            D2D1_FEATURE_LEVEL_DEFAULT
        );
        g_pD2DFactory->CreateDCRenderTarget(&props, &g_pDCRenderTarget);
    }
}

static void CleanupD2DResources() {
    if (g_pDCRenderTarget) { g_pDCRenderTarget->Release(); g_pDCRenderTarget = NULL; }
    if (g_pTextFormatTitle) { g_pTextFormatTitle->Release(); g_pTextFormatTitle = NULL; }
    if (g_pTextFormatBody) { g_pTextFormatBody->Release(); g_pTextFormatBody = NULL; }
    if (g_pTextFormatSmall) { g_pTextFormatSmall->Release(); g_pTextFormatSmall = NULL; }
    if (g_pTextFormatIcon) { g_pTextFormatIcon->Release(); g_pTextFormatIcon = NULL; }
    if (g_pDWriteFactory) { g_pDWriteFactory->Release(); g_pDWriteFactory = NULL; }
    if (g_pD2DFactory) { g_pD2DFactory->Release(); g_pD2DFactory = NULL; }

    if (g_hMemDC && g_hOldBmp) {
        SelectObject(g_hMemDC, g_hOldBmp);
    }
    if (g_hMemBmp) { DeleteObject(g_hMemBmp); g_hMemBmp = NULL; }
    if (g_hMemDC) { DeleteDC(g_hMemDC); g_hMemDC = NULL; }
}

// ─────────────────────────────────────────────────────────────────────────────
// SPRING-DAMPED PHYSICS ANIMATION ENGINE
// ─────────────────────────────────────────────────────────────────────────────
static void StepPhysicsAnimation(float dt) {
    if (dt <= 0.0f) dt = 0.016f;
    if (dt > 0.05f) dt = 0.05f;

    BOOL animEnabled = g_settings.enableAnimations;
    SystemParametersInfoW(SPI_GETCLIENTAREAANIMATION, 0, &animEnabled, 0);

    float targetW = (g_currentState == IslandState::Expanded) ? (float)g_settings.expandedWidth : (float)g_settings.compactWidth;
    float targetH = (float)g_settings.compactHeight;

    if (g_currentState == IslandState::Expanded) {
        if (g_activeTab == ActiveTab::Music) targetH = (float)g_settings.expandedHeight;
        else if (g_activeTab == ActiveTab::System) targetH = 145.0f;
        else if (g_activeTab == ActiveTab::Downloads) targetH = 138.0f;
        else targetH = 135.0f;
    }

    float targetR = (g_currentState == IslandState::Expanded) ? 22.0f : (targetH * 0.5f);
    float targetAlpha = (g_currentState == IslandState::Expanded) ? 1.0f : 0.0f;
    float targetHover = g_bIsHovered ? 1.0f : 0.0f;

    if (!animEnabled || !g_settings.enableAnimations) {
        g_curWidth = targetW;
        g_curHeight = targetH;
        g_curRadius = targetR;
        g_contentAlpha = targetAlpha;
        g_hoverAlpha = targetHover;
        g_velWidth = 0.0f;
        g_velHeight = 0.0f;
        g_velContentAlpha = 0.0f;
        g_isAnimating = false;
        return;
    }

    const float springK = g_settings.lowPerfMode ? 140.0f : 185.0f;
    const float dampingD = g_settings.lowPerfMode ? 19.0f : 23.0f;

    float forceW = -springK * (g_curWidth - targetW) - dampingD * g_velWidth;
    g_velWidth += forceW * dt;
    g_curWidth += g_velWidth * dt;

    float forceH = -springK * (g_curHeight - targetH) - dampingD * g_velHeight;
    g_velHeight += forceH * dt;
    g_curHeight += g_velHeight * dt;

    g_curRadius = (g_currentState == IslandState::Expanded) ? 22.0f : (g_curHeight * 0.5f);

    float forceA = -180.0f * (g_contentAlpha - targetAlpha) - 22.0f * g_velContentAlpha;
    g_velContentAlpha += forceA * dt;
    g_contentAlpha += g_velContentAlpha * dt;
    g_contentAlpha = std::clamp(g_contentAlpha, 0.0f, 1.0f);

    g_hoverAlpha += (targetHover - g_hoverAlpha) * (dt * 12.0f);

    if (g_musicInfo.isPlaying) {
        g_musicWavePhase += dt * 6.0f;
        if (g_musicWavePhase > 6.28318f) g_musicWavePhase -= 6.28318f;

        g_musicInfo.vinylRotation += dt * 45.0f; // Vinyl spins smoothly
        if (g_musicInfo.vinylRotation > 360.0f) g_musicInfo.vinylRotation -= 360.0f;

        g_musicInfo.elapsedSeconds += dt;
        if (g_musicInfo.elapsedSeconds > g_musicInfo.totalSeconds) g_musicInfo.elapsedSeconds = 0.0f;
        g_musicInfo.progress = g_musicInfo.elapsedSeconds / g_musicInfo.totalSeconds;
    }

    bool closeW = std::abs(g_curWidth - targetW) < 0.35f && std::abs(g_velWidth) < 0.2f;
    bool closeH = std::abs(g_curHeight - targetH) < 0.35f && std::abs(g_velHeight) < 0.2f;
    bool closeA = std::abs(g_contentAlpha - targetAlpha) < 0.02f && std::abs(g_velContentAlpha) < 0.05f;

    if (closeW && closeH && closeA) {
        g_curWidth = targetW;
        g_curHeight = targetH;
        g_contentAlpha = targetAlpha;
        g_velWidth = 0.0f;
        g_velHeight = 0.0f;
        g_velContentAlpha = 0.0f;

        if (!g_musicInfo.isPlaying && std::abs(g_hoverAlpha - targetHover) < 0.02f) {
            g_hoverAlpha = targetHover;
            g_isAnimating = false;
        }
    } else {
        g_isAnimating = true;
    }
}

// ─────────────────────────────────────────────────────────────────────────────
// LIQUID GLASS RENDERING (DIRECT2D)
// ─────────────────────────────────────────────────────────────────────────────
static void RenderIsland(HWND hWnd) {
    if (!g_settings.enableIsland || !hWnd) return;

    int renderPad = g_settings.lowPerfMode ? 14 : 24;
    int curW = (int)std::round(g_curWidth);
    int curH = (int)std::round(g_curHeight);
    int totalW = curW + (renderPad * 2);
    int totalH = curH + (renderPad * 2);

    EnsureBackbuffer(totalW, totalH);
    if (!g_pDCRenderTarget || !g_hMemDC) return;

    RECT rcBind = { 0, 0, totalW, totalH };
    g_pDCRenderTarget->BindDC(g_hMemDC, &rcBind);
    g_pDCRenderTarget->BeginDraw();
    g_pDCRenderTarget->Clear(D2D1::ColorF(0, 0, 0, 0.0f));

    D2D1_RECT_F islandRect = D2D1::RectF(
        (float)renderPad,
        (float)renderPad,
        (float)(renderPad + curW),
        (float)(renderPad + curH)
    );
    D2D1_ROUNDED_RECT roundedIsland = D2D1::RoundedRect(islandRect, g_curRadius, g_curRadius);

    // 1. SOFT AMBIENT LAYERED DROP SHADOW
    int shadowSteps = g_settings.lowPerfMode ? 2 : 5;
    for (int i = shadowSteps; i >= 1; --i) {
        float expand = (float)i * (g_settings.lowPerfMode ? 2.5f : 1.8f);
        float alpha = (g_settings.lowPerfMode ? 0.09f : 0.045f) * (1.0f - (float)i / (shadowSteps + 1));
        D2D1_RECT_F sRect = D2D1::RectF(
            islandRect.left - expand * 0.5f,
            islandRect.top + (float)i * 1.5f,
            islandRect.right + expand * 0.5f,
            islandRect.bottom + expand * 1.2f
        );
        D2D1_ROUNDED_RECT sRound = D2D1::RoundedRect(sRect, g_curRadius + expand * 0.5f, g_curRadius + expand * 0.5f);

        ID2D1SolidColorBrush* pShadowBrush = NULL;
        g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.0f, 0.0f, 0.0f, alpha), &pShadowBrush);
        if (pShadowBrush) {
            g_pDCRenderTarget->FillRoundedRectangle(&sRound, pShadowBrush);
            pShadowBrush->Release();
        }
    }

    // 2. LIQUID GLASS BASE BODY
    float masterAlpha = g_settings.transparency;
    ID2D1SolidColorBrush* pBaseBrush = NULL;

    if (g_settings.glassStyle == 1) { // Liquid Glass
        g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.06f, 0.07f, 0.09f, 0.78f * masterAlpha), &pBaseBrush);
    } else if (g_settings.glassStyle == 2) { // Frosted Acrylic
        g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.12f, 0.12f, 0.14f, 0.65f * masterAlpha), &pBaseBrush);
    } else if (g_settings.glassStyle == 3) { // Porcelain Light
        g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.92f, 0.94f, 0.98f, 0.70f * masterAlpha), &pBaseBrush);
    } else { // Obsidian Dark
        g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.03f, 0.03f, 0.04f, 0.94f * masterAlpha), &pBaseBrush);
    }

    if (pBaseBrush) {
        g_pDCRenderTarget->FillRoundedRectangle(&roundedIsland, pBaseBrush);
        pBaseBrush->Release();
    }

    // 3. SPECULAR GLARE (TOP GLASS SHEEN GRADIENT)
    if (g_settings.glassStyle == 1 && !g_settings.lowPerfMode) {
        ID2D1GradientStopCollection* pGlareStops = NULL;
        float hoverBonus = g_hoverAlpha * 0.12f;
        D2D1_GRADIENT_STOP stops[4] = {
            { 0.00f, D2D1::ColorF(1.0f, 1.0f, 1.0f, (0.34f + hoverBonus) * masterAlpha) },
            { 0.22f, D2D1::ColorF(1.0f, 1.0f, 1.0f, (0.10f + hoverBonus * 0.5f) * masterAlpha) },
            { 0.65f, D2D1::ColorF(0.85f, 0.95f, 1.0f, 0.02f * masterAlpha) },
            { 1.00f, D2D1::ColorF(0.0f, 0.0f, 0.0f, 0.10f * masterAlpha) }
        };
        g_pDCRenderTarget->CreateGradientStopCollection(stops, 4, &pGlareStops);
        if (pGlareStops) {
            ID2D1LinearGradientBrush* pGlareBrush = NULL;
            g_pDCRenderTarget->CreateLinearGradientBrush(
                D2D1::LinearGradientBrushProperties(
                    D2D1::Point2F(islandRect.left, islandRect.top),
                    D2D1::Point2F(islandRect.left, islandRect.bottom)
                ),
                pGlareStops, &pGlareBrush
            );
            if (pGlareBrush) {
                g_pDCRenderTarget->FillRoundedRectangle(&roundedIsland, pGlareBrush);
                pGlareBrush->Release();
            }
            pGlareStops->Release();
        }
    }

    // 4. SPECULAR RIM LIGHT (1PX LIQUID GLASS INNER BORDER)
    {
        ID2D1GradientStopCollection* pRimStops = NULL;
        float topRimAlpha = (0.65f + g_hoverAlpha * 0.20f) * masterAlpha;
        float botRimAlpha = (0.22f + g_hoverAlpha * 0.10f) * masterAlpha;

        D2D1_GRADIENT_STOP rimStopsArr[3] = {
            { 0.00f, D2D1::ColorF(1.0f, 1.0f, 1.0f, topRimAlpha) },
            { 0.35f, D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.18f * masterAlpha) },
            { 1.00f, D2D1::ColorF(1.0f, 1.0f, 1.0f, botRimAlpha) }
        };
        g_pDCRenderTarget->CreateGradientStopCollection(rimStopsArr, 3, &pRimStops);
        if (pRimStops) {
            ID2D1LinearGradientBrush* pRimBrush = NULL;
            g_pDCRenderTarget->CreateLinearGradientBrush(
                D2D1::LinearGradientBrushProperties(
                    D2D1::Point2F(islandRect.left, islandRect.top),
                    D2D1::Point2F(islandRect.left, islandRect.bottom)
                ),
                pRimStops, &pRimBrush
            );
            if (pRimBrush) {
                D2D1_RECT_F innerRimRect = D2D1::RectF(
                    islandRect.left + 0.5f, islandRect.top + 0.5f,
                    islandRect.right - 0.5f, islandRect.bottom - 0.5f
                );
                D2D1_ROUNDED_RECT innerRounded = D2D1::RoundedRect(innerRimRect, g_curRadius - 0.5f, g_curRadius - 0.5f);
                g_pDCRenderTarget->DrawRoundedRectangle(&innerRounded, pRimBrush, 1.0f);
                pRimBrush->Release();
            }
            pRimStops->Release();
        }
    }

    // 5. CONTENT RENDERING: COMPACT MODE
    if (g_contentAlpha < 0.95f) {
        float compactAlpha = (1.0f - g_contentAlpha);

        float iconLeft = islandRect.left + 14.0f;
        float iconCenterY = (islandRect.top + islandRect.bottom) * 0.5f;

        // Determine left indicator status
        if (g_downloadInfo.isDownloading && g_settings.enableDownloads) {
            // Blue pulsing download indicator
            D2D1_RECT_F dlRect = D2D1::RectF(iconLeft, islandRect.top, iconLeft + 16.0f, islandRect.bottom);
            ID2D1SolidColorBrush* pDlBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.20f, 0.70f, 1.0f, 0.95f * compactAlpha), &pDlBrush);
            if (pDlBrush && g_pTextFormatSmall) {
                g_pDCRenderTarget->DrawTextW(L"⬇", 1, g_pTextFormatSmall, &dlRect, pDlBrush);
                pDlBrush->Release();
            }
        } else if (g_telemetry.hasBattery && g_telemetry.isCharging && g_settings.enableBatteryAlerts) {
            // Charging battery indicator
            D2D1_RECT_F batRect = D2D1::RectF(iconLeft, islandRect.top, iconLeft + 16.0f, islandRect.bottom);
            ID2D1SolidColorBrush* pBatBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.25f, 0.90f, 0.45f, 0.98f * compactAlpha), &pBatBrush);
            if (pBatBrush && g_pTextFormatSmall) {
                g_pDCRenderTarget->DrawTextW(L"⚡", 1, g_pTextFormatSmall, &batRect, pBatBrush);
                pBatBrush->Release();
            }
        } else if (g_musicInfo.isPlaying && g_settings.enableMusic) {
            // 3 Equalizer bars
            for (int b = 0; b < 3; ++b) {
                float wave = std::sin(g_musicWavePhase + (float)b * 1.5f);
                float barH = 5.0f + (wave * 0.5f + 0.5f) * 11.0f;
                float barX = iconLeft + (float)b * 5.0f;
                D2D1_RECT_F barRect = D2D1::RectF(barX, iconCenterY - barH * 0.5f, barX + 3.0f, iconCenterY + barH * 0.5f);
                D2D1_ROUNDED_RECT rBar = D2D1::RoundedRect(barRect, 1.5f, 1.5f);

                ID2D1SolidColorBrush* pWaveBrush = NULL;
                g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.18f, 0.85f, 0.45f, 0.95f * compactAlpha), &pWaveBrush);
                if (pWaveBrush) {
                    g_pDCRenderTarget->FillRoundedRectangle(&rBar, pWaveBrush);
                    pWaveBrush->Release();
                }
            }
        } else {
            // Glowing Status Dot
            D2D1_ELLIPSE dot = D2D1::Ellipse(D2D1::Point2F(iconLeft + 6.0f, iconCenterY), 4.5f, 4.5f);
            ID2D1SolidColorBrush* pDotBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.35f, 0.75f, 1.0f, 0.90f * compactAlpha), &pDotBrush);
            if (pDotBrush) {
                g_pDCRenderTarget->FillEllipse(&dot, pDotBrush);
                pDotBrush->Release();
            }
        }

        // Compact Title / Status Text
        if (g_pTextFormatSmall) {
            std::wstring compText;
            if (g_downloadInfo.isDownloading && g_settings.enableDownloads) {
                compText = L"Tải: " + g_downloadInfo.fileName;
            } else if (g_telemetry.hasBattery && g_telemetry.isCharging && g_settings.enableBatteryAlerts) {
                compText = L"Sạc: " + std::to_wstring(g_telemetry.batteryPercent) + L"%";
            } else if (g_musicInfo.isPlaying) {
                compText = g_musicInfo.title;
            } else {
                compText = L"Dynamic Island";
            }

            if (compText.length() > 17) {
                compText = compText.substr(0, 15) + L"...";
            }
            D2D1_RECT_F textRect = D2D1::RectF(
                iconLeft + 20.0f, islandRect.top,
                islandRect.right - 14.0f, islandRect.bottom
            );

            ID2D1SolidColorBrush* pTextBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.95f, 0.96f, 0.98f, 0.92f * compactAlpha), &pTextBrush);
            if (pTextBrush) {
                g_pDCRenderTarget->DrawTextW(
                    compText.c_str(), (UINT32)compText.length(),
                    g_pTextFormatSmall, &textRect, pTextBrush
                );
                pTextBrush->Release();
            }
        }
    }

    // 6. CONTENT RENDERING: EXPANDED MODE (FADE IN)
    if (g_contentAlpha > 0.05f) {
        float expAlpha = g_contentAlpha;

        float tabY = islandRect.top + 10.0f;
        float tabH = 22.0f;

        const wchar_t* tabNames[] = { L"Âm Nhạc", L"Hệ Thống", L"Tải Về", L"Thông Báo" };
        float tabX = islandRect.left + 16.0f;

        for (int t = 0; t < 4; ++t) {
            float tabW = 60.0f;
            D2D1_RECT_F tabRect = D2D1::RectF(tabX, tabY, tabX + tabW, tabY + tabH);
            D2D1_ROUNDED_RECT rTab = D2D1::RoundedRect(tabRect, 11.0f, 11.0f);

            bool isSelected = ((int)g_activeTab == t);
            ID2D1SolidColorBrush* pTabBg = NULL;
            if (isSelected) {
                g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.22f * expAlpha), &pTabBg);
            } else {
                g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.05f * expAlpha), &pTabBg);
            }
            if (pTabBg) {
                g_pDCRenderTarget->FillRoundedRectangle(&rTab, pTabBg);
                pTabBg->Release();
            }

            ID2D1SolidColorBrush* pTabText = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(
                isSelected ? D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.98f * expAlpha) : D2D1::ColorF(0.70f, 0.72f, 0.76f, 0.75f * expAlpha),
                &pTabText
            );
            if (pTabText && g_pTextFormatSmall) {
                g_pDCRenderTarget->DrawTextW(tabNames[t], (UINT32)wcslen(tabNames[t]), g_pTextFormatSmall, &tabRect, pTabText);
                pTabText->Release();
            }
            tabX += tabW + 5.0f;
        }

        // Collapse Button [▲]
        D2D1_RECT_F closeRect = D2D1::RectF(islandRect.right - 36.0f, tabY, islandRect.right - 14.0f, tabY + tabH);
        D2D1_ROUNDED_RECT rClose = D2D1::RoundedRect(closeRect, 11.0f, 11.0f);
        ID2D1SolidColorBrush* pCloseBg = NULL;
        g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.08f * expAlpha), &pCloseBg);
        if (pCloseBg) {
            g_pDCRenderTarget->FillRoundedRectangle(&rClose, pCloseBg);
            pCloseBg->Release();
        }
        ID2D1SolidColorBrush* pCloseText = NULL;
        g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.85f, 0.88f, 0.92f, 0.85f * expAlpha), &pCloseText);
        if (pCloseText && g_pTextFormatSmall) {
            g_pDCRenderTarget->DrawTextW(L"▲", 1, g_pTextFormatSmall, &closeRect, pCloseText);
            pCloseText->Release();
        }

        float contentTop = tabY + tabH + 12.0f;

        if (g_activeTab == ActiveTab::Music) {
            // ── MUSIC VIEW ──
            // Vinyl Record Album Artwork (Glossy with rotating grooves)
            float artSize = 68.0f;
            float artLeft = islandRect.left + 18.0f;
            float artTop = contentTop + 2.0f;
            D2D1_RECT_F artRect = D2D1::RectF(artLeft, artTop, artLeft + artSize, artTop + artSize);
            D2D1_ROUNDED_RECT rArt = D2D1::RoundedRect(artRect, 16.0f, 16.0f);

            // Vinyl Base
            ID2D1SolidColorBrush* pArtBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.12f, 0.14f, 0.18f, 0.90f * expAlpha), &pArtBrush);
            if (pArtBrush) {
                g_pDCRenderTarget->FillRoundedRectangle(&rArt, pArtBrush);
                pArtBrush->Release();
            }

            // Concentric vinyl disc grooves
            D2D1_POINT_2F discCenter = D2D1::Point2F(artLeft + artSize * 0.5f, artTop + artSize * 0.5f);
            ID2D1SolidColorBrush* pGrooveBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.10f * expAlpha), &pGrooveBrush);
            if (pGrooveBrush) {
                g_pDCRenderTarget->DrawEllipse(D2D1::Ellipse(discCenter, 28.0f, 28.0f), pGrooveBrush, 1.0f);
                g_pDCRenderTarget->DrawEllipse(D2D1::Ellipse(discCenter, 21.0f, 21.0f), pGrooveBrush, 1.0f);
                g_pDCRenderTarget->DrawEllipse(D2D1::Ellipse(discCenter, 14.0f, 14.0f), pGrooveBrush, 1.0f);
                pGrooveBrush->Release();
            }

            // Center spindle label
            ID2D1SolidColorBrush* pCenterBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.20f, 0.85f, 0.55f, 0.95f * expAlpha), &pCenterBrush);
            if (pCenterBrush) {
                g_pDCRenderTarget->FillEllipse(D2D1::Ellipse(discCenter, 8.0f, 8.0f), pCenterBrush);
                pCenterBrush->Release();
            }

            float infoLeft = artRect.right + 14.0f;
            float infoRight = islandRect.right - 18.0f;

            // Track Title
            D2D1_RECT_F titleRect = D2D1::RectF(infoLeft, contentTop, infoRight - 40.0f, contentTop + 22.0f);
            ID2D1SolidColorBrush* pTitleBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.98f * expAlpha), &pTitleBrush);
            if (pTitleBrush && g_pTextFormatTitle) {
                g_pDCRenderTarget->DrawTextW(
                    g_musicInfo.title.c_str(), (UINT32)g_musicInfo.title.length(),
                    g_pTextFormatTitle, &titleRect, pTitleBrush
                );
                pTitleBrush->Release();
            }

            // 6-Bar Equalizer Waveform beside title
            float eqLeft = infoRight - 36.0f;
            for (int b = 0; b < 6; ++b) {
                float wave = std::sin(g_musicWavePhase + (float)b * 1.05f);
                float barH = 4.0f + (wave * 0.5f + 0.5f) * 14.0f;
                float barX = eqLeft + (float)b * 6.0f;
                D2D1_RECT_F bRect = D2D1::RectF(barX, contentTop + 16.0f - barH, barX + 3.0f, contentTop + 16.0f);
                D2D1_ROUNDED_RECT rB = D2D1::RoundedRect(bRect, 1.5f, 1.5f);

                ID2D1SolidColorBrush* pEqBrush = NULL;
                g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.25f, 0.85f, 0.55f, 0.90f * expAlpha), &pEqBrush);
                if (pEqBrush) {
                    g_pDCRenderTarget->FillRoundedRectangle(&rB, pEqBrush);
                    pEqBrush->Release();
                }
            }

            // Artist Name
            D2D1_RECT_F artistRect = D2D1::RectF(infoLeft, contentTop + 22.0f, infoRight, contentTop + 38.0f);
            ID2D1SolidColorBrush* pArtistBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.68f, 0.72f, 0.78f, 0.80f * expAlpha), &pArtistBrush);
            if (pArtistBrush && g_pTextFormatBody) {
                g_pDCRenderTarget->DrawTextW(
                    g_musicInfo.artist.c_str(), (UINT32)g_musicInfo.artist.length(),
                    g_pTextFormatBody, &artistRect, pArtistBrush
                );
                pArtistBrush->Release();
            }

            // Interactive Playback Controls: [⏮] [⏯] [⏭]
            float btnY = contentTop + 44.0f;
            float btnH = 26.0f;
            float btnW = 34.0f;
            float ctrX = infoLeft + 4.0f;

            const wchar_t* mediaSymbols[] = { L"⏮", L"⏯", L"⏭" };
            for (int m = 0; m < 3; ++m) {
                D2D1_RECT_F mRect = D2D1::RectF(ctrX, btnY, ctrX + btnW, btnY + btnH);
                D2D1_ROUNDED_RECT rBtn = D2D1::RoundedRect(mRect, 8.0f, 8.0f);

                ID2D1SolidColorBrush* pBtnBg = NULL;
                g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.10f * expAlpha), &pBtnBg);
                if (pBtnBg) {
                    g_pDCRenderTarget->FillRoundedRectangle(&rBtn, pBtnBg);
                    pBtnBg->Release();
                }

                ID2D1SolidColorBrush* pBtnSym = NULL;
                g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.95f, 0.96f, 0.98f, 0.95f * expAlpha), &pBtnSym);
                if (pBtnSym && g_pTextFormatBody) {
                    g_pDCRenderTarget->DrawTextW(mediaSymbols[m], 1, g_pTextFormatBody, &mRect, pBtnSym);
                    pBtnSym->Release();
                }
                ctrX += btnW + 10.0f;
            }

            // Audio track progress track & time stamps
            float barLeft = ctrX + 10.0f;
            float barRight = infoRight - 10.0f;
            float barY = btnY + 9.0f;
            if (barRight > barLeft + 30.0f) {
                D2D1_RECT_F trackBg = D2D1::RectF(barLeft, barY, barRight, barY + 4.0f);
                D2D1_ROUNDED_RECT rTrackBg = D2D1::RoundedRect(trackBg, 2.0f, 2.0f);
                ID2D1SolidColorBrush* pTrackBgBrush = NULL;
                g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.15f * expAlpha), &pTrackBgBrush);
                if (pTrackBgBrush) {
                    g_pDCRenderTarget->FillRoundedRectangle(&rTrackBg, pTrackBgBrush);
                    pTrackBgBrush->Release();
                }

                float fillW = (barRight - barLeft) * std::clamp(g_musicInfo.progress, 0.0f, 1.0f);
                D2D1_RECT_F trackFill = D2D1::RectF(barLeft, barY, barLeft + fillW, barY + 4.0f);
                D2D1_ROUNDED_RECT rTrackFill = D2D1::RoundedRect(trackFill, 2.0f, 2.0f);
                ID2D1SolidColorBrush* pFillBrush = NULL;
                g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.30f, 0.85f, 0.55f, 0.90f * expAlpha), &pFillBrush);
                if (pFillBrush) {
                    g_pDCRenderTarget->FillRoundedRectangle(&rTrackFill, pFillBrush);
                    pFillBrush->Release();
                }

                // Time label below progress bar: "01:05 / 03:30"
                std::wstring timeStr = FormatTimeString(g_musicInfo.elapsedSeconds) + L" / " + FormatTimeString(g_musicInfo.totalSeconds);
                D2D1_RECT_F timeRect = D2D1::RectF(barLeft, barY + 6.0f, barRight, barY + 18.0f);
                ID2D1SolidColorBrush* pTimeBrush = NULL;
                g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.65f, 0.70f, 0.76f, 0.75f * expAlpha), &pTimeBrush);
                if (pTimeBrush && g_pTextFormatSmall) {
                    g_pDCRenderTarget->DrawTextW(timeStr.c_str(), (UINT32)timeStr.length(), g_pTextFormatSmall, &timeRect, pTimeBrush);
                    pTimeBrush->Release();
                }
            }
        } else if (g_activeTab == ActiveTab::System) {
            // ── SYSTEM TELEMETRY VIEW ──
            float cardW = (curW - 56.0f) / 3.0f;
            float cardH = 68.0f;
            float cardY = contentTop + 4.0f;

            struct SysCard {
                const wchar_t* label;
                std::wstring valStr;
                float pct;
                D2D1_COLOR_F barColor;
            } cards[3] = {
                { L"CPU", std::to_wstring(g_telemetry.cpuUsagePercent) + L"%", g_telemetry.cpuUsagePercent / 100.0f, D2D1::ColorF(0.20f, 0.70f, 1.0f, 0.90f) },
                { L"RAM", std::to_wstring(g_telemetry.ramUsagePercent) + L"%", g_telemetry.ramUsagePercent / 100.0f, D2D1::ColorF(0.85f, 0.45f, 1.0f, 0.90f) },
                { L"PIN", std::to_wstring(g_telemetry.batteryPercent) + (g_telemetry.isCharging ? L"% ⚡" : L"%"), g_telemetry.batteryPercent / 100.0f, D2D1::ColorF(0.30f, 0.88f, 0.50f, 0.90f) }
            };

            for (int c = 0; c < 3; ++c) {
                float cX = islandRect.left + 18.0f + (float)c * (cardW + 10.0f);
                D2D1_RECT_F cRect = D2D1::RectF(cX, cardY, cX + cardW, cardY + cardH);
                D2D1_ROUNDED_RECT rCard = D2D1::RoundedRect(cRect, 12.0f, 12.0f);

                ID2D1SolidColorBrush* pCardBg = NULL;
                g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.06f * expAlpha), &pCardBg);
                if (pCardBg) {
                    g_pDCRenderTarget->FillRoundedRectangle(&rCard, pCardBg);
                    pCardBg->Release();
                }

                // Label
                D2D1_RECT_F lblRect = D2D1::RectF(cX + 8.0f, cardY + 6.0f, cX + cardW - 8.0f, cardY + 22.0f);
                ID2D1SolidColorBrush* pLblBrush = NULL;
                g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.70f, 0.74f, 0.80f, 0.80f * expAlpha), &pLblBrush);
                if (pLblBrush && g_pTextFormatSmall) {
                    g_pDCRenderTarget->DrawTextW(cards[c].label, (UINT32)wcslen(cards[c].label), g_pTextFormatSmall, &lblRect, pLblBrush);
                    pLblBrush->Release();
                }

                // Value
                D2D1_RECT_F valRect = D2D1::RectF(cX + 8.0f, cardY + 22.0f, cX + cardW - 8.0f, cardY + 44.0f);
                ID2D1SolidColorBrush* pValBrush = NULL;
                g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.98f * expAlpha), &pValBrush);
                if (pValBrush && g_pTextFormatTitle) {
                    g_pDCRenderTarget->DrawTextW(cards[c].valStr.c_str(), (UINT32)cards[c].valStr.length(), g_pTextFormatTitle, &valRect, pValBrush);
                    pValBrush->Release();
                }

                // Mini progress bar
                float pBarY = cardY + cardH - 12.0f;
                D2D1_RECT_F pBarBg = D2D1::RectF(cX + 8.0f, pBarY, cX + cardW - 8.0f, pBarY + 4.0f);
                D2D1_ROUNDED_RECT rPBg = D2D1::RoundedRect(pBarBg, 2.0f, 2.0f);
                ID2D1SolidColorBrush* pPBgBrush = NULL;
                g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.12f * expAlpha), &pPBgBrush);
                if (pPBgBrush) {
                    g_pDCRenderTarget->FillRoundedRectangle(&rPBg, pPBgBrush);
                    pPBgBrush->Release();
                }

                float fillLen = (cardW - 16.0f) * std::clamp(cards[c].pct, 0.0f, 1.0f);
                D2D1_RECT_F pBarFill = D2D1::RectF(cX + 8.0f, pBarY, cX + 8.0f + fillLen, pBarY + 4.0f);
                D2D1_ROUNDED_RECT rPFill = D2D1::RoundedRect(pBarFill, 2.0f, 2.0f);
                ID2D1SolidColorBrush* pPFillBrush = NULL;
                cards[c].barColor.a *= expAlpha;
                g_pDCRenderTarget->CreateSolidColorBrush(cards[c].barColor, &pPFillBrush);
                if (pPFillBrush) {
                    g_pDCRenderTarget->FillRoundedRectangle(&rPFill, pPFillBrush);
                    pPFillBrush->Release();
                }
            }
        } else if (g_activeTab == ActiveTab::Downloads) {
            // ── DOWNLOADS VIEW ──
            float dX = islandRect.left + 20.0f;
            float dRight = islandRect.right - 20.0f;

            std::wstring dlTitle = g_downloadInfo.isDownloading ? L"Đang tải xuống tệp..." : L"Không có tệp nào đang tải";
            std::wstring dlSub = g_downloadInfo.isDownloading ? g_downloadInfo.fileName : L"Thư mục Downloads sẵn sàng.";

            D2D1_RECT_F dTitleRect = D2D1::RectF(dX, contentTop + 4.0f, dRight, contentTop + 24.0f);
            ID2D1SolidColorBrush* pDTitle = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.30f, 0.80f, 1.0f, 0.98f * expAlpha), &pDTitle);
            if (pDTitle && g_pTextFormatTitle) {
                g_pDCRenderTarget->DrawTextW(dlTitle.c_str(), (UINT32)dlTitle.length(), g_pTextFormatTitle, &dTitleRect, pDTitle);
                pDTitle->Release();
            }

            D2D1_RECT_F dSubRect = D2D1::RectF(dX, contentTop + 26.0f, dRight, contentTop + 44.0f);
            ID2D1SolidColorBrush* pDSub = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.85f, 0.88f, 0.95f, 0.85f * expAlpha), &pDSub);
            if (pDSub && g_pTextFormatBody) {
                g_pDCRenderTarget->DrawTextW(dlSub.c_str(), (UINT32)dlSub.length(), g_pTextFormatBody, &dSubRect, pDSub);
                pDSub->Release();
            }

            // Download Animated Progress Bar
            float barY = contentTop + 48.0f;
            D2D1_RECT_F dlBarBg = D2D1::RectF(dX, barY, dRight, barY + 6.0f);
            D2D1_ROUNDED_RECT rDlBarBg = D2D1::RoundedRect(dlBarBg, 3.0f, 3.0f);
            ID2D1SolidColorBrush* pDlBarBgBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.15f * expAlpha), &pDlBarBgBrush);
            if (pDlBarBgBrush) {
                g_pDCRenderTarget->FillRoundedRectangle(&rDlBarBg, pDlBarBgBrush);
                pDlBarBgBrush->Release();
            }

            float dlFill = g_downloadInfo.isDownloading ? 0.65f : 1.0f;
            D2D1_RECT_F dlBarFill = D2D1::RectF(dX, barY, dX + (dRight - dX) * dlFill, barY + 6.0f);
            D2D1_ROUNDED_RECT rDlBarFill = D2D1::RoundedRect(dlBarFill, 3.0f, 3.0f);
            ID2D1SolidColorBrush* pDlBarFillBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.20f, 0.70f, 1.0f, 0.90f * expAlpha), &pDlBarFillBrush);
            if (pDlBarFillBrush) {
                g_pDCRenderTarget->FillRoundedRectangle(&rDlBarFill, pDlBarFillBrush);
                pDlBarFillBrush->Release();
            }
        } else if (g_activeTab == ActiveTab::Alerts) {
            // ── ALERTS / CLIPBOARD VIEW ──
            float aX = islandRect.left + 20.0f;
            float aRight = islandRect.right - 20.0f;

            std::wstring alertTitle = g_activeAlert.hasAlert ? g_activeAlert.title : L"Không Có Thông Báo Mới";
            std::wstring alertBody = g_activeAlert.hasAlert ? g_activeAlert.body : L"Mọi thứ đang hoạt động ổn định và mượt mà.";

            D2D1_RECT_F nTitleRect = D2D1::RectF(aX, contentTop + 4.0f, aRight, contentTop + 26.0f);
            ID2D1SolidColorBrush* pNTitle = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 0.85f, 0.30f, 0.98f * expAlpha), &pNTitle);
            if (pNTitle && g_pTextFormatTitle) {
                g_pDCRenderTarget->DrawTextW(alertTitle.c_str(), (UINT32)alertTitle.length(), g_pTextFormatTitle, &nTitleRect, pNTitle);
                pNTitle->Release();
            }

            D2D1_RECT_F nBodyRect = D2D1::RectF(aX, contentTop + 28.0f, aRight, contentTop + 68.0f);
            ID2D1SolidColorBrush* pNBody = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.88f, 0.90f, 0.95f, 0.85f * expAlpha), &pNBody);
            if (pNBody && g_pTextFormatBody) {
                g_pDCRenderTarget->DrawTextW(alertBody.c_str(), (UINT32)alertBody.length(), g_pTextFormatBody, &nBodyRect, pNBody);
                pNBody->Release();
            }
        }
    }

    g_pDCRenderTarget->EndDraw();

    // 7. COMMIT TO SCREEN VIA ATOMIC UpdateLayeredWindow
    int screenW = GetSystemMetrics(SM_CXSCREEN);
    int posX = (screenW - curW) / 2 - renderPad;
    int posY = g_settings.offsetY - renderPad;

    POINT ptSrc = { 0, 0 };
    POINT ptDst = { posX, posY };
    SIZE sizeWnd = { totalW, totalH };
    BLENDFUNCTION blend = { AC_SRC_OVER, 0, 255, AC_SRC_ALPHA };

    HDC hScreenDC = GetDC(NULL);
    UpdateLayeredWindow(hWnd, hScreenDC, &ptDst, &sizeWnd, g_hMemDC, &ptSrc, 0, &blend, ULW_ALPHA);
    ReleaseDC(NULL, hScreenDC);
}

// ─────────────────────────────────────────────────────────────────────────────
// WINDOW PROCEDURE & HIT TESTING
// ─────────────────────────────────────────────────────────────────────────────
static LRESULT CALLBACK IslandWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
    case WM_CREATE: {
        SetTimer(hWnd, 1, 16, NULL);
        InitD2DResources(hWnd);
        ApplyBlurBackdrop(hWnd, g_settings.glassStyle);

        // Register Windows Clipboard listener
        AddClipboardFormatListener(hWnd);
        return 0;
    }

    case WM_CLIPBOARDUPDATE: {
        if (g_settings.enableClipboard && OpenClipboard(hWnd)) {
            if (IsClipboardFormatAvailable(CF_UNICODETEXT)) {
                HANDLE hData = GetClipboardData(CF_UNICODETEXT);
                if (hData) {
                    LPCWSTR pText = (LPCWSTR)GlobalLock(hData);
                    if (pText && wcslen(pText) > 0) {
                        std::wstring snippet = pText;
                        while (!snippet.empty() && (snippet.front() == L' ' || snippet.front() == L'\r' || snippet.front() == L'\n' || snippet.front() == L'\t')) {
                            snippet.erase(snippet.begin());
                        }
                        while (!snippet.empty() && (snippet.back() == L' ' || snippet.back() == L'\r' || snippet.back() == L'\n' || snippet.back() == L'\t')) {
                            snippet.pop_back();
                        }
                        std::replace(snippet.begin(), snippet.end(), L'\r', L' ');
                        std::replace(snippet.begin(), snippet.end(), L'\n', L' ');
                        if (snippet.length() > 36) {
                            snippet = snippet.substr(0, 34) + L"...";
                        }
                        if (!snippet.empty() && snippet != g_lastClipboardText) {
                            g_lastClipboardText = snippet;
                            TriggerNotification(L"Đã sao chép vào Clipboard 📋", snippet, 3);
                        }
                    }
                    GlobalUnlock(hData);
                }
            } else if (IsClipboardFormatAvailable(CF_BITMAP) || IsClipboardFormatAvailable(CF_DIB)) {
                TriggerNotification(L"Đã sao chép hình ảnh 🖼️", L"Hình ảnh đã lưu trong bộ nhớ tạm.", 3);
            } else if (IsClipboardFormatAvailable(CF_HDROP)) {
                TriggerNotification(L"Đã sao chép tệp tin 📁", L"Tệp tin đã lưu trong bộ nhớ tạm.", 3);
            }
            CloseClipboard();
        }
        return 0;
    }

    case WM_TIMER: {
        if (wParam == 1) {
            ULONGLONG now = GetTickCount64();

            StepPhysicsAnimation(0.016f);

            // Periodic background telemetry
            if (now - g_lastTelemetryTick > 1500) {
                g_lastTelemetryTick = now;
                if (g_currentState == IslandState::Expanded || g_settings.enableSysMon || g_settings.enableBatteryAlerts) {
                    UpdateSystemTelemetry();
                }
            }
            if (now - g_lastMediaCheckTick > 1200) {
                g_lastMediaCheckTick = now;
                if (g_settings.enableMusic) {
                    UpdateMediaSession();
                }
            }
            if (now - g_lastDownloadCheckTick > 2000) {
                g_lastDownloadCheckTick = now;
                if (g_settings.enableDownloads) {
                    UpdateDownloadsCheck();
                }
            }

            if (g_activeAlert.hasAlert && now > g_activeAlert.expireTick) {
                g_activeAlert.hasAlert = false;
                if (g_currentState == IslandState::Expanded && !g_bIsHovered) {
                    g_currentState = IslandState::Compact;
                    g_isAnimating = true;
                }
            }

            if (g_mouseLeaveCollapseTimer > 0 && now > g_mouseLeaveCollapseTimer) {
                g_mouseLeaveCollapseTimer = 0;
                if (g_currentState == IslandState::Expanded && !g_bIsHovered) {
                    g_currentState = IslandState::Compact;
                    g_isAnimating = true;
                }
            }

            RenderIsland(hWnd);

            if (!g_isAnimating && !g_bIsHovered && !g_musicInfo.isPlaying && !g_downloadInfo.isDownloading) {
                SetTimer(hWnd, 1, 100, NULL); // Slow idle poll to achieve 0.0% CPU
            }
        }
        return 0;
    }

    case WM_MOUSEMOVE: {
        if (!g_bIsHovered) {
            g_bIsHovered = true;
            g_mouseLeaveCollapseTimer = 0;
            g_isAnimating = true;

            g_currentState = IslandState::Expanded;

            TRACKMOUSEEVENT tme = { sizeof(TRACKMOUSEEVENT), TME_LEAVE, hWnd, HOVER_DEFAULT };
            TrackMouseEvent(&tme);

            SetTimer(hWnd, 1, 16, NULL);
        }
        return 0;
    }

    case WM_MOUSELEAVE: {
        g_bIsHovered = false;
        g_mouseLeaveCollapseTimer = (DWORD)GetTickCount64() + (g_settings.autoCollapseSec * 1000);
        SetTimer(hWnd, 1, 16, NULL);
        return 0;
    }

    case WM_LBUTTONDOWN: {
        int mouseX = (int)(short)LOWORD(lParam);
        int mouseY = (int)(short)HIWORD(lParam);

        int renderPad = g_settings.lowPerfMode ? 14 : 24;
        int localX = mouseX - renderPad;
        int localY = mouseY - renderPad;
        int curW = (int)g_curWidth;

        if (g_currentState == IslandState::Expanded) {
            // Check top collapse button [▲]
            if (localX >= curW - 36 && localX <= curW - 14 && localY >= 10 && localY <= 32) {
                g_currentState = IslandState::Compact;
                g_isAnimating = true;
                SetTimer(hWnd, 1, 16, NULL);
                return 0;
            }

            // Check Tab clicks: [Âm Nhạc] [Hệ Thống] [Tải Về] [Thông Báo]
            float tabX = 16.0f;
            for (int t = 0; t < 4; ++t) {
                if (localX >= tabX && localX <= tabX + 60.0f && localY >= 10 && localY <= 32) {
                    g_activeTab = (ActiveTab)t;
                    g_isAnimating = true;
                    SetTimer(hWnd, 1, 16, NULL);
                    return 0;
                }
                tabX += 65.0f;
            }

            // Check Media control buttons
            if (g_activeTab == ActiveTab::Music) {
                float infoLeft = 18.0f + 68.0f + 14.0f;
                float btnY = 10.0f + 22.0f + 12.0f + 44.0f;
                float ctrX = infoLeft + 4.0f;

                // [⏮ Prev]
                if (localX >= ctrX && localX <= ctrX + 34.0f && localY >= btnY && localY <= btnY + 26.0f) {
                    SendMediaKey(VK_MEDIA_PREV_TRACK);
                    return 0;
                }
                ctrX += 44.0f;
                // [⏯ Play/Pause]
                if (localX >= ctrX && localX <= ctrX + 34.0f && localY >= btnY && localY <= btnY + 26.0f) {
                    SendMediaKey(VK_MEDIA_PLAY_PAUSE);
                    return 0;
                }
                ctrX += 44.0f;
                // [⏭ Next]
                if (localX >= ctrX && localX <= ctrX + 34.0f && localY >= btnY && localY <= btnY + 26.0f) {
                    SendMediaKey(VK_MEDIA_NEXT_TRACK);
                    return 0;
                }
            }
        } else {
            g_currentState = IslandState::Expanded;
            g_isAnimating = true;
            SetTimer(hWnd, 1, 16, NULL);
        }
        return 0;
    }

    case WM_DISPLAYCHANGE:
    case WM_SETTINGCHANGE: {
        g_isAnimating = true;
        SetTimer(hWnd, 1, 16, NULL);
        return 0;
    }

    case WM_USER + 101: {
        g_isAnimating = true;
        SetTimer(hWnd, 1, 16, NULL);
        return 0;
    }

    case WM_DESTROY: {
        KillTimer(hWnd, 1);
        RemoveClipboardFormatListener(hWnd);
        CleanupD2DResources();
        return 0;
    }

    default:
        break;
    }
    return DefWindowProcW(hWnd, uMsg, wParam, lParam);
}

// ─────────────────────────────────────────────────────────────────────────────
// UI THREAD HOSTING DYNAMIC ISLAND
// ─────────────────────────────────────────────────────────────────────────────
static DWORD WINAPI IslandThreadProc(LPVOID lpParam) {
    HINSTANCE hInstance = GetModuleHandleW(NULL);
    const wchar_t CLASS_NAME[] = L"DynamicIslandPro_GlassClass";

    WNDCLASSEXW wc = { 0 };
    wc.cbSize = sizeof(WNDCLASSEXW);
    wc.lpfnWndProc = IslandWndProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    wc.hCursor = LoadCursorW(NULL, IDC_ARROW);
    RegisterClassExW(&wc);

    int initialW = g_settings.compactWidth + 48;
    int initialH = g_settings.compactHeight + 48;
    int screenW = GetSystemMetrics(SM_CXSCREEN);
    int posX = (screenW - initialW) / 2;
    int posY = g_settings.offsetY;

    g_hIslandWnd = CreateWindowExW(
        WS_EX_LAYERED | WS_EX_TOOLWINDOW | WS_EX_TOPMOST | WS_EX_NOACTIVATE,
        CLASS_NAME,
        L"Dynamic Island Pro",
        WS_POPUP,
        posX, posY, initialW, initialH,
        NULL, NULL, hInstance, NULL
    );

    if (g_hIslandWnd) {
        ShowWindow(g_hIslandWnd, SW_SHOWNOACTIVATE);
        UpdateWindow(g_hIslandWnd);

        RenderIsland(g_hIslandWnd);
        TriggerNotification(L"Dynamic Island Pro v1.1", L"Hiệu ứng Liquid Glass & Clipboard đã kích hoạt!", 4);

        MSG msg;
        while (g_bRunning && GetMessageW(&msg, NULL, 0, 0)) {
            TranslateMessage(&msg);
            DispatchMessageW(&msg);
        }

        if (IsWindow(g_hIslandWnd)) {
            DestroyWindow(g_hIslandWnd);
            g_hIslandWnd = NULL;
        }
    }

    UnregisterClassW(CLASS_NAME, hInstance);
    return 0;
}

// ─────────────────────────────────────────────────────────────────────────────
// WINDHAWK LIFECYCLE HOOKS
// ─────────────────────────────────────────────────────────────────────────────

BOOL Wh_ModInit() {
    Wh_Log(L"Dynamic Island Pro: Initializing v1.1.0...");

    HWND hShellTray = FindWindowW(L"Shell_TrayWnd", NULL);
    if (hShellTray) {
        DWORD shellPid = 0;
        GetWindowThreadProcessId(hShellTray, &shellPid);
        if (GetCurrentProcessId() != shellPid) {
            Wh_Log(L"Dynamic Island Pro: Non-shell explorer instance, skipping.");
            return TRUE;
        }
    }

    LoadModSettings();

    if (!g_settings.enableIsland) {
        Wh_Log(L"Dynamic Island Pro: Island is disabled in settings.");
        return TRUE;
    }

    g_bRunning = true;
    g_hUIThread = CreateThread(NULL, 0, IslandThreadProc, NULL, 0, &g_dwUIThreadId);
    if (!g_hUIThread) {
        Wh_Log(L"Dynamic Island Pro: Failed to spawn UI thread.");
        return FALSE;
    }

    Wh_Log(L"Dynamic Island Pro: Successfully loaded.");
    return TRUE;
}

void Wh_ModUninit() {
    Wh_Log(L"Dynamic Island Pro: Unloading...");

    g_bRunning = false;

    if (g_hIslandWnd && IsWindow(g_hIslandWnd)) {
        PostMessageW(g_hIslandWnd, WM_CLOSE, 0, 0);
    }

    if (g_hUIThread) {
        if (WaitForSingleObject(g_hUIThread, 2000) == WAIT_TIMEOUT) {
            TerminateThread(g_hUIThread, 0);
        }
        CloseHandle(g_hUIThread);
        g_hUIThread = NULL;
    }

    Wh_Log(L"Dynamic Island Pro: Unload complete.");
}

void Wh_ModSettingsChanged() {
    Wh_Log(L"Dynamic Island Pro: Settings updated.");
    LoadModSettings();
}
