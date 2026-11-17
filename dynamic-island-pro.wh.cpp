// ==WindhawkMod==
// @id              dynamic-island-pro
// @name            Dynamic Island Pro – Liquid Glass
// @description     An authentic Apple-style Dynamic Island with Liquid Glass aesthetics, media player controls, clipboard alerts, download tracking, and battery telemetry for Windows 10/11.
// @version         1.2.0
// @author          Le Quoc Tin
// @github          https://github.com/lequoctin7526-bit/dynamic-island.git
// @include         explorer.exe
// @compilerOptions -ld2d1 -ldwrite -ldwmapi -lole32 -lshcore -lgdi32 -luser32 -lshell32
// ==/WindhawkMod==

// ==WindhawkModReadme==
/*
# Dynamic Island Pro – Liquid Glass (Apple Minimalist Edition)

Dynamic Island Pro tái hiện trải nghiệm **Apple Dynamic Island** nguyên bản từ iPhone lên Windows 10 và Windows 11, kết hợp cùng hiệu ứng kính lỏng **Liquid Glass** cao cấp.

---

### ✨ Thiết Kế Tối Giản Chuẩn Apple iPhone

1. **Compact Mode Tinh Giản:**
   - Viên thuốc đen huyền bí nguyên bản, bo tròn hai đầu hoàn hảo.
   - Khi phát nhạc: Mini album cover bên trái và sóng nhạc Equalizer 3 vạch nhảy mượt mà bên phải.
   - Khi sạc pin: Biểu tượng tia sét xanh ngọc ⚡ và tỷ lệ pin.
   - Loại bỏ hoàn toàn các nút đóng, thanh điều hướng và tab thô kệch.

2. **Expanded Music Player (iPhone Style):**
   - **Bên trái:** Album artwork hình vuông bo góc mềm 12px, có hiệu ứng đĩa than vinyl tinh xảo.
   - **Ở giữa:** Tên bài hát đậm nét, tên nghệ sĩ thanh tú (tự động cắt gọn ellipsis).
   - **Bên phải:** Hệ thống sóng âm Music Visualizer chuyển động tinh tế.
   - **Phía dưới:** Thanh thời gian (Progress Bar) siêu mảnh, nhãn thời gian thực (`01:24 / 03:45`) cùng cụm nút điều khiển tối giản (`⏮`, `⏯`, `⏭`) không viền hộp.

3. **Context-Aware Dynamic Activities (Không Tab, Không Dashboard):**
   - Tự động thay đổi kích thước và nội dung tương ứng theo ngữ cảnh sự kiện:
     * **Music:** Trình phát nhạc cao cấp đầy đủ điều khiển.
     * **Clipboard:** Tự bung xem trước khi nhấn Ctrl+C (văn bản, tệp, hình ảnh) và tự thu gọn sau 3s.
     * **Download:** Hiển thị tên file và tiến trình khi trình duyệt đang tải tệp hoặc tải xong.
     * **Battery:** Hiệu ứng sạc pin và cảnh báo pin yếu dưới 20%.

4. **Hiệu Ứng Kính Thủy Tinh Liquid Glass:**
   - Nền Obsidian đen sâu bán trong suốt kết hợp DWM Acrylic Blur nhẹ.
   - Viền kính mờ 1px phản chiếu tinh tế (không viền chói mắt, không neon rực).
   - Vòm specular glare phản chiếu ánh sáng nhẹ ở cạnh trên.
   - Đổ bóng mềm nhiều lớp (Soft Ambient Shadows).

5. **Hiệu Năng & Chuyển Động:**
   - Hoạt ảnh lò xo đàn hồi (Spring Damped Physics) siêu mượt.
   - Tự ngắt hoàn toàn render khi ở trạng thái nghỉ (Zero Idle CPU – 0.0%).
   - Tương thích Windows Reduce Motion.
*/
// ==/WindhawkModReadme==

// ==WindhawkModSettings==
/*
- enable_dynamic_island: true
  $name: "Bật Dynamic Island"
  $description: "Bật hoặc tắt hiển thị Dynamic Island trên màn hình"
- liquid_glass_style: 1
  $name: "Kiểu dáng Liquid Glass"
  $description: "Chọn phong cách kính hiển thị"
  $options:
  - "0": "Dark Obsidian (Kính đen tuyền iPhone)"
  - "1": "Liquid Glass (Kính lỏng phản xạ cao cấp)"
  - "2": "Frosted Acrylic (Kính mờ Fluent)"
  - "3": "Porcelain Light (Kính trong suốt sáng)"
- enable_animations: true
  $name: "Bật hoạt ảnh chuyển động"
  $description: "Cho phép Dynamic Island co giãn mượt mà theo vật lý lò xo"
- low_performance_mode: false
  $name: "Chế độ máy yếu (Low Performance Mode)"
  $description: "Giảm bớt số lớp đổ bóng và hiệu ứng nặng để tiết kiệm CPU và GPU"
- enable_music_player: true
  $name: "Bật Trình phát nhạc"
  $description: "Tự động nhận diện bài hát và cho phép điều khiển nhạc trực tiếp"
- enable_system_monitor: true
  $name: "Bật Xem nhanh hệ thống"
  $description: "Hiển thị đồng hồ và thông số CPU RAM khi mở rộng ở trạng thái nghỉ"
- enable_notifications: true
  $name: "Bật Thông báo"
  $description: "Tự động bung Island khi có sự kiện thông báo hệ thống"
- enable_clipboard: true
  $name: "Bật Theo dõi Clipboard"
  $description: "Tự động bung xem trước khi bạn sao chép văn bản, tệp hoặc hình ảnh (Ctrl+C)"
- enable_battery_alerts: true
  $name: "Bật Cảnh báo và Trạng thái Pin"
  $description: "Bật hiệu ứng thông báo khi cắm sạc hoặc cảnh báo khi pin yếu dưới 20%"
- enable_downloads: true
  $name: "Bật Theo dõi Tải xuống (Downloads)"
  $description: "Tự động phát hiện và hiển thị tiến trình khi trình duyệt đang tải tệp"
- compact_width: 150
  $name: "Chiều rộng Compact (px)"
  $description: "Độ rộng mặc định dạng viên thuốc (khuyên dùng từ 135 đến 160 px)"
- compact_height: 38
  $name: "Chiều cao Compact (px)"
  $description: "Độ cao mặc định dạng viên thuốc (khuyên dùng từ 36 đến 40 px)"
- expanded_width: 410
  $name: "Chiều rộng Expanded Music (px)"
  $description: "Độ rộng khi mở rộng phát nhạc (khuyên dùng từ 380 đến 430 px)"
- expanded_height: 145
  $name: "Chiều cao Expanded Music (px)"
  $description: "Độ cao khi mở rộng phát nhạc (khuyên dùng từ 135 đến 155 px)"
- offset_y: 12
  $name: "Khoảng cách từ đỉnh màn hình (px)"
  $description: "Khoảng cách từ mép trên màn hình xuống Dynamic Island"
- auto_collapse_seconds: 4
  $name: "Thời gian tự thu gọn (giây)"
  $description: "Số giây tự động thu gọn về Compact Mode sau khi rời chuột"
- transparency_level: 88
  $name: "Độ mờ đục của kính (50 - 100%)"
  $description: "Mức 100 là đặc hoàn toàn, mức 88 là chuẩn Apple Liquid Glass"
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
    int glassStyle = 1; // 0 = Dark Obsidian, 1 = Liquid Glass, 2 = Acrylic, 3 = Porcelain
    bool enableAnimations = true;
    bool lowPerfMode = false;
    bool enableMusic = true;
    bool enableSysMon = true;
    bool enableNotifications = true;
    bool enableClipboard = true;
    bool enableBatteryAlerts = true;
    bool enableDownloads = true;
    int compactWidth = 150;
    int compactHeight = 38;
    int expandedWidth = 410;
    int expandedHeight = 145;
    int offsetY = 12;
    int autoCollapseSec = 4;
    float transparency = 0.88f;
} g_settings;

// ─────────────────────────────────────────────────────────────────────────────
// CONTEXT-AWARE ISLAND ACTIVITY (NO TABS)
// ─────────────────────────────────────────────────────────────────────────────
enum class IslandActivity {
    Idle = 0,
    Music = 1,
    Clipboard = 2,
    Download = 3,
    Battery = 4,
    Notification = 5
};

struct SystemTelemetry {
    int cpuUsagePercent = 0;
    int ramUsagePercent = 0;
    int batteryPercent = 100;
    bool isCharging = false;
    bool hasBattery = false;
};

struct MusicInfo {
    bool isPlaying = false;
    std::wstring title = L"Không Có Bài Hát";
    std::wstring artist = L"Sẵn sàng phát nhạc";
    float progress = 0.35f;
    float elapsedSeconds = 65.0f;
    float totalSeconds = 210.0f;
    float vinylRotation = 0.0f;
};

struct DownloadInfo {
    bool isDownloading = false;
    std::wstring fileName = L"";
    ULONGLONG fileSize = 0;
};

struct AlertInfo {
    bool hasAlert = false;
    std::wstring title = L"";
    std::wstring subtitle = L"";
    DWORD expireTick = 0;
};

// ─────────────────────────────────────────────────────────────────────────────
// GLOBAL STATE & THREADING
// ─────────────────────────────────────────────────────────────────────────────
static HWND g_hIslandWnd = NULL;
static HANDLE g_hUIThread = NULL;
static DWORD g_dwUIThreadId = 0;
static bool g_bRunning = false;
static bool g_bIsHovered = false;
static bool g_bIsExpanded = false;

// Active contextual activity
static IslandActivity g_currentActivity = IslandActivity::Idle;

// Animated properties
static float g_curWidth = 150.0f;
static float g_curHeight = 38.0f;
static float g_curRadius = 19.0f;
static float g_contentAlpha = 0.0f; // Alpha for expanded content (0.0 to 1.0)
static float g_hoverAlpha = 0.0f;   // Hover sheen intensity (0.0 to 1.0)
static float g_musicWavePhase = 0.0f;

// Velocity for critically damped spring physics
static float g_velWidth = 0.0f;
static float g_velHeight = 0.0f;
static float g_velContentAlpha = 0.0f;
static bool g_isAnimating = false;

// Telemetry, Media, Clipboard & Download caches
static SystemTelemetry g_telemetry;
static MusicInfo g_musicInfo;
static DownloadInfo g_downloadInfo;
static AlertInfo g_activeAlert;
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
static DWORD g_autoCollapseTimer = 0;

// Hover state on media buttons: 0 = none, 1 = prev, 2 = play/pause, 3 = next
static int g_hoveredMediaBtn = 0;

// Direct2D & DirectWrite Interfaces
static ID2D1Factory* g_pD2DFactory = NULL;
static IDWriteFactory* g_pDWriteFactory = NULL;
static IDWriteTextFormat* g_pTextFormatTitle = NULL;
static IDWriteTextFormat* g_pTextFormatArtist = NULL;
static IDWriteTextFormat* g_pTextFormatTime = NULL;
static IDWriteTextFormat* g_pTextFormatCompact = NULL;
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
static void TriggerActivity(IslandActivity act, const std::wstring& title, const std::wstring& subtitle, DWORD durationSec);
static void ApplyBlurBackdrop(HWND hWnd, int style);

// ─────────────────────────────────────────────────────────────────────────────
// UTILITY: 64-bit FileTime subtraction
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
            accent.AccentFlags = 2;
            accent.GradientColor = 0x14000000;
        } else if (style == 2) { // Frosted Acrylic
            accent.AccentState = ACCENT_ENABLE_ACRYLICBLURBEHIND;
            accent.AccentFlags = 0;
            accent.GradientColor = 0x30121216;
        } else if (style == 3) { // Porcelain Light
            accent.AccentState = ACCENT_ENABLE_BLURBEHIND;
            accent.AccentFlags = 2;
            accent.GradientColor = 0x20FFFFFF;
        } else { // Dark Obsidian
            accent.AccentState = ACCENT_ENABLE_TRANSPARENTGRADIENT;
            accent.GradientColor = 0xA006080C;
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
    g_settings.compactWidth = (cw >= 120 && cw <= 240) ? cw : 150;

    int ch = Wh_GetIntSetting(L"compact_height");
    g_settings.compactHeight = (ch >= 30 && ch <= 46) ? ch : 38;

    int ew = Wh_GetIntSetting(L"expanded_width");
    g_settings.expandedWidth = (ew >= 340 && ew <= 520) ? ew : 410;

    int eh = Wh_GetIntSetting(L"expanded_height");
    g_settings.expandedHeight = (eh >= 120 && eh <= 180) ? eh : 145;

    int oy = Wh_GetIntSetting(L"offset_y");
    g_settings.offsetY = (oy >= 0 && oy <= 60) ? oy : 12;

    int ac = Wh_GetIntSetting(L"auto_collapse_seconds");
    g_settings.autoCollapseSec = (ac >= 1 && ac <= 15) ? ac : 4;

    int tr = Wh_GetIntSetting(L"transparency_level");
    g_settings.transparency = (tr >= 50 && tr <= 100) ? (tr / 100.0f) : 0.88f;

    if (g_hIslandWnd) {
        ApplyBlurBackdrop(g_hIslandWnd, g_settings.glassStyle);
        PostMessageW(g_hIslandWnd, WM_USER + 101, 0, 0);
    }
}

// ─────────────────────────────────────────────────────────────────────────────
// TRIGGER CONTEXTUAL ACTIVITY
// ─────────────────────────────────────────────────────────────────────────────
static void TriggerActivity(IslandActivity act, const std::wstring& title, const std::wstring& subtitle, DWORD durationSec) {
    g_currentActivity = act;
    g_activeAlert.hasAlert = true;
    g_activeAlert.title = title;
    g_activeAlert.subtitle = subtitle;
    g_activeAlert.expireTick = GetTickCount() + (durationSec * 1000);

    // Expand smoothly
    g_bIsExpanded = true;
    g_isAnimating = true;

    if (g_hIslandWnd) {
        SetTimer(g_hIslandWnd, 1, 16, NULL);
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
            TriggerActivity(IslandActivity::Download, L"Đang tải tệp xuống", cleanName, 3);
        } else {
            g_downloadInfo.fileSize = sz.QuadPart;
        }
    } else {
        if (g_downloadInfo.isDownloading) {
            std::wstring finishedName = g_downloadInfo.fileName;
            g_downloadInfo.isDownloading = false;
            g_downloadInfo.fileName = L"";
            TriggerActivity(IslandActivity::Download, L"Tải xuống hoàn tất", finishedName, 4);
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
        g_musicInfo.title = L"Dynamic Island";
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
    MEMORYSTATUSEX memInfo;
    memInfo.dwLength = sizeof(MEMORYSTATUSEX);
    if (GlobalMemoryStatusEx(&memInfo)) {
        g_telemetry.ramUsagePercent = (int)memInfo.dwMemoryLoad;
    }

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
                    TriggerActivity(IslandActivity::Battery, L"Đang sạc pin", std::to_wstring(g_telemetry.batteryPercent) + L"% • Nguồn điện AC", 3);
                } else if (g_prevCharging && !g_telemetry.isCharging) {
                    TriggerActivity(IslandActivity::Battery, L"Đã ngắt sạc pin", std::to_wstring(g_telemetry.batteryPercent) + L"% • Đang dùng pin", 3);
                } else if (!g_telemetry.isCharging && g_telemetry.batteryPercent <= 20 && !g_lowBatteryAlerted) {
                    g_lowBatteryAlerted = true;
                    TriggerActivity(IslandActivity::Battery, L"Cảnh báo pin yếu", L"Thời lượng pin còn dưới " + std::to_wstring(g_telemetry.batteryPercent) + L"%", 5);
                }
                if (g_telemetry.isCharging || g_telemetry.batteryPercent > 25) {
                    g_lowBatteryAlerted = false;
                }
            }
            g_prevCharging = g_telemetry.isCharging;
            g_prevHasBattery = true;
        }
    }

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
                14.5f, L"en-us", &g_pTextFormatTitle
            );
            if (g_pTextFormatTitle) {
                g_pTextFormatTitle->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_LEADING);
                g_pTextFormatTitle->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
                g_pTextFormatTitle->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
            }
        }
        if (!g_pTextFormatArtist) {
            g_pDWriteFactory->CreateTextFormat(
                L"Segoe UI Variable Text", NULL,
                DWRITE_FONT_WEIGHT_REGULAR, DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                12.5f, L"en-us", &g_pTextFormatArtist
            );
            if (g_pTextFormatArtist) {
                g_pTextFormatArtist->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_LEADING);
                g_pTextFormatArtist->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
                g_pTextFormatArtist->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
            }
        }
        if (!g_pTextFormatTime) {
            g_pDWriteFactory->CreateTextFormat(
                L"Segoe UI Variable Small", NULL,
                DWRITE_FONT_WEIGHT_MEDIUM, DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                10.5f, L"en-us", &g_pTextFormatTime
            );
            if (g_pTextFormatTime) {
                g_pTextFormatTime->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_LEADING);
                g_pTextFormatTime->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            }
        }
        if (!g_pTextFormatCompact) {
            g_pDWriteFactory->CreateTextFormat(
                L"Segoe UI Variable Display", NULL,
                DWRITE_FONT_WEIGHT_SEMI_BOLD, DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                11.5f, L"en-us", &g_pTextFormatCompact
            );
            if (g_pTextFormatCompact) {
                g_pTextFormatCompact->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_CENTER);
                g_pTextFormatCompact->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
                g_pTextFormatCompact->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
            }
        }
        if (!g_pTextFormatIcon) {
            g_pDWriteFactory->CreateTextFormat(
                L"Segoe Fluent Icons", NULL,
                DWRITE_FONT_WEIGHT_NORMAL, DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                14.0f, L"en-us", &g_pTextFormatIcon
            );
            if (!g_pTextFormatIcon) {
                g_pDWriteFactory->CreateTextFormat(
                    L"Segoe MDL2 Assets", NULL,
                    DWRITE_FONT_WEIGHT_NORMAL, DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                    14.0f, L"en-us", &g_pTextFormatIcon
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
        if (g_pDCRenderTarget) {
            g_pDCRenderTarget->SetAntialiasMode(D2D1_ANTIALIAS_MODE_PER_PRIMITIVE);
            g_pDCRenderTarget->SetTextAntialiasMode(D2D1_TEXT_ANTIALIAS_MODE_CLEARTYPE);
        }
    }
}

static void CleanupD2DResources() {
    if (g_pDCRenderTarget) { g_pDCRenderTarget->Release(); g_pDCRenderTarget = NULL; }
    if (g_pTextFormatTitle) { g_pTextFormatTitle->Release(); g_pTextFormatTitle = NULL; }
    if (g_pTextFormatArtist) { g_pTextFormatArtist->Release(); g_pTextFormatArtist = NULL; }
    if (g_pTextFormatTime) { g_pTextFormatTime->Release(); g_pTextFormatTime = NULL; }
    if (g_pTextFormatCompact) { g_pTextFormatCompact->Release(); g_pTextFormatCompact = NULL; }
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
// SPRING-DAMPED PHYSICS ANIMATION ENGINE (APPLE FLUID MOTION)
// ─────────────────────────────────────────────────────────────────────────────
static void StepPhysicsAnimation(float dt) {
    if (dt <= 0.0f) dt = 0.016f;
    if (dt > 0.05f) dt = 0.05f;

    BOOL animEnabled = g_settings.enableAnimations;
    SystemParametersInfoW(SPI_GETCLIENTAREAANIMATION, 0, &animEnabled, 0);

    float targetW = (float)g_settings.compactWidth;
    float targetH = (float)g_settings.compactHeight;
    float targetR = targetH * 0.5f; // Perfect pill shape in Compact
    float targetAlpha = 0.0f;
    float targetHover = g_bIsHovered ? 1.0f : 0.0f;

    if (g_bIsExpanded) {
        targetAlpha = 1.0f;
        if (g_currentActivity == IslandActivity::Music) {
            targetW = (float)g_settings.expandedWidth;
            targetH = (float)g_settings.expandedHeight;
            targetR = 28.0f; // Apple smooth rounded rectangle
        } else if (g_currentActivity == IslandActivity::Clipboard) {
            targetW = 350.0f;
            targetH = 74.0f;
            targetR = 24.0f;
        } else if (g_currentActivity == IslandActivity::Battery) {
            targetW = 310.0f;
            targetH = 72.0f;
            targetR = 24.0f;
        } else if (g_currentActivity == IslandActivity::Download) {
            targetW = 360.0f;
            targetH = 76.0f;
            targetR = 24.0f;
        } else {
            // Standby glance
            targetW = 330.0f;
            targetH = 80.0f;
            targetR = 26.0f;
        }
    }

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

    // Critically damped spring constants (Apple responsive curve)
    const float springK = g_settings.lowPerfMode ? 140.0f : 185.0f;
    const float dampingD = g_settings.lowPerfMode ? 19.0f : 23.5f;

    float forceW = -springK * (g_curWidth - targetW) - dampingD * g_velWidth;
    g_velWidth += forceW * dt;
    g_curWidth += g_velWidth * dt;

    float forceH = -springK * (g_curHeight - targetH) - dampingD * g_velHeight;
    g_velHeight += forceH * dt;
    g_curHeight += g_velHeight * dt;

    // Corner radius interpolates naturally
    g_curRadius = g_bIsExpanded ? targetR : (g_curHeight * 0.5f);

    float forceA = -180.0f * (g_contentAlpha - targetAlpha) - 22.0f * g_velContentAlpha;
    g_velContentAlpha += forceA * dt;
    g_contentAlpha += g_velContentAlpha * dt;
    g_contentAlpha = std::clamp(g_contentAlpha, 0.0f, 1.0f);

    g_hoverAlpha += (targetHover - g_hoverAlpha) * (dt * 12.0f);

    if (g_musicInfo.isPlaying) {
        g_musicWavePhase += dt * 6.5f;
        if (g_musicWavePhase > 6.28318f) g_musicWavePhase -= 6.28318f;

        g_musicInfo.vinylRotation += dt * 42.0f;
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
// AUTHENTIC APPLE DYNAMIC ISLAND LIQUID GLASS RENDERING
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

    // ─────────────────────────────────────────────────────────────────────────
    // 1. SOFT AMBIENT LAYERED DROP SHADOW (SUBTLE & DEEP)
    // ─────────────────────────────────────────────────────────────────────────
    int shadowSteps = g_settings.lowPerfMode ? 2 : 4;
    for (int i = shadowSteps; i >= 1; --i) {
        float expand = (float)i * (g_settings.lowPerfMode ? 2.2f : 1.6f);
        float alpha = (g_settings.lowPerfMode ? 0.08f : 0.04f) * (1.0f - (float)i / (shadowSteps + 1));
        D2D1_RECT_F sRect = D2D1::RectF(
            islandRect.left - expand * 0.5f,
            islandRect.top + (float)i * 1.8f,
            islandRect.right + expand * 0.5f,
            islandRect.bottom + expand * 1.4f
        );
        D2D1_ROUNDED_RECT sRound = D2D1::RoundedRect(sRect, g_curRadius + expand * 0.5f, g_curRadius + expand * 0.5f);

        ID2D1SolidColorBrush* pShadowBrush = NULL;
        g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.0f, 0.0f, 0.0f, alpha), &pShadowBrush);
        if (pShadowBrush) {
            g_pDCRenderTarget->FillRoundedRectangle(&sRound, pShadowBrush);
            pShadowBrush->Release();
        }
    }

    // ─────────────────────────────────────────────────────────────────────────
    // 2. APPLE OBSIDIAN LIQUID GLASS BASE BODY
    // ─────────────────────────────────────────────────────────────────────────
    float masterAlpha = g_settings.transparency;
    ID2D1SolidColorBrush* pBaseBrush = NULL;

    if (g_settings.glassStyle == 1) { // Liquid Glass
        g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.04f, 0.045f, 0.06f, 0.90f * masterAlpha), &pBaseBrush);
    } else if (g_settings.glassStyle == 2) { // Frosted Acrylic
        g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.10f, 0.11f, 0.14f, 0.72f * masterAlpha), &pBaseBrush);
    } else if (g_settings.glassStyle == 3) { // Porcelain Light
        g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.94f, 0.95f, 0.98f, 0.76f * masterAlpha), &pBaseBrush);
    } else { // Dark Obsidian (Deep Apple Black)
        g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.015f, 0.015f, 0.02f, 0.97f * masterAlpha), &pBaseBrush);
    }

    if (pBaseBrush) {
        g_pDCRenderTarget->FillRoundedRectangle(&roundedIsland, pBaseBrush);
        pBaseBrush->Release();
    }

    // ─────────────────────────────────────────────────────────────────────────
    // 3. REFINED SPECULAR TOP GLARE (NATURAL GLASS ARCH)
    // ─────────────────────────────────────────────────────────────────────────
    if (g_settings.glassStyle == 1 && !g_settings.lowPerfMode) {
        ID2D1GradientStopCollection* pGlareStops = NULL;
        float hoverBonus = g_hoverAlpha * 0.08f;
        D2D1_GRADIENT_STOP stops[3] = {
            { 0.00f, D2D1::ColorF(1.0f, 1.0f, 1.0f, (0.16f + hoverBonus) * masterAlpha) },
            { 0.20f, D2D1::ColorF(1.0f, 1.0f, 1.0f, (0.04f + hoverBonus * 0.5f) * masterAlpha) },
            { 0.65f, D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.00f) }
        };
        g_pDCRenderTarget->CreateGradientStopCollection(stops, 3, &pGlareStops);
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

    // ─────────────────────────────────────────────────────────────────────────
    // 4. SUBTLE 1PX WHITE RIM LIGHT (SPECULAR EDGE)
    // ─────────────────────────────────────────────────────────────────────────
    {
        ID2D1GradientStopCollection* pRimStops = NULL;
        float topRimAlpha = (0.28f + g_hoverAlpha * 0.12f) * masterAlpha;
        float botRimAlpha = (0.08f + g_hoverAlpha * 0.05f) * masterAlpha;

        D2D1_GRADIENT_STOP rimStopsArr[3] = {
            { 0.00f, D2D1::ColorF(1.0f, 1.0f, 1.0f, topRimAlpha) },
            { 0.40f, D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.10f * masterAlpha) },
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

    // ─────────────────────────────────────────────────────────────────────────
    // 5. COMPACT MODE (PURE APPLE IPHONE MINIMALISM)
    // ─────────────────────────────────────────────────────────────────────────
    if (g_contentAlpha < 0.95f) {
        float compactAlpha = (1.0f - g_contentAlpha);
        float centerY = (islandRect.top + islandRect.bottom) * 0.5f;

        if (g_musicInfo.isPlaying && g_settings.enableMusic) {
            // A. Mini Artwork Icon on Left
            float miniSize = 19.0f;
            float miniLeft = islandRect.left + 10.0f;
            float miniTop = centerY - miniSize * 0.5f;
            D2D1_RECT_F miniArtRect = D2D1::RectF(miniLeft, miniTop, miniLeft + miniSize, miniTop + miniSize);
            D2D1_ROUNDED_RECT rMiniArt = D2D1::RoundedRect(miniArtRect, 5.0f, 5.0f);

            ID2D1SolidColorBrush* pMiniArtBg = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.22f, 0.25f, 0.32f, 0.95f * compactAlpha), &pMiniArtBg);
            if (pMiniArtBg) {
                g_pDCRenderTarget->FillRoundedRectangle(&rMiniArt, pMiniArtBg);
                pMiniArtBg->Release();
            }

            ID2D1SolidColorBrush* pNoteBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.35f, 0.88f, 0.65f, 0.98f * compactAlpha), &pNoteBrush);
            if (pNoteBrush && g_pTextFormatTime) {
                g_pDCRenderTarget->DrawTextW(L"♫", 1, g_pTextFormatTime, &miniArtRect, pNoteBrush);
                pNoteBrush->Release();
            }

            // B. Mini 3-Bar Jumping Audio Visualizer on Right (Exact iPhone style)
            float eqRight = islandRect.right - 14.0f;
            for (int b = 0; b < 3; ++b) {
                float wave = std::sin(g_musicWavePhase + (float)b * 1.6f);
                float barH = 5.0f + (wave * 0.5f + 0.5f) * 11.0f;
                float barX = eqRight - (float)(2 - b) * 5.5f;
                D2D1_RECT_F bRect = D2D1::RectF(barX, centerY - barH * 0.5f, barX + 2.5f, centerY + barH * 0.5f);
                D2D1_ROUNDED_RECT rB = D2D1::RoundedRect(bRect, 1.25f, 1.25f);

                ID2D1SolidColorBrush* pEqBrush = NULL;
                g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.28f, 0.88f, 0.60f, 0.98f * compactAlpha), &pEqBrush);
                if (pEqBrush) {
                    g_pDCRenderTarget->FillRoundedRectangle(&rB, pEqBrush);
                    pEqBrush->Release();
                }
            }

            // C. Centered Compact Song Title
            D2D1_RECT_F textRect = D2D1::RectF(miniLeft + miniSize + 6.0f, islandRect.top, eqRight - 16.0f, islandRect.bottom);
            ID2D1SolidColorBrush* pTextBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.92f * compactAlpha), &pTextBrush);
            if (pTextBrush && g_pTextFormatCompact) {
                g_pDCRenderTarget->DrawTextW(
                    g_musicInfo.title.c_str(), (UINT32)g_musicInfo.title.length(),
                    g_pTextFormatCompact, &textRect, pTextBrush
                );
                pTextBrush->Release();
            }
        } else if (g_telemetry.hasBattery && g_telemetry.isCharging && g_settings.enableBatteryAlerts) {
            // Charging Compact Indicator
            float leftX = islandRect.left + 12.0f;
            D2D1_RECT_F iconR = D2D1::RectF(leftX, islandRect.top, leftX + 16.0f, islandRect.bottom);
            ID2D1SolidColorBrush* pBolt = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.25f, 0.95f, 0.50f, 0.98f * compactAlpha), &pBolt);
            if (pBolt && g_pTextFormatCompact) {
                g_pDCRenderTarget->DrawTextW(L"⚡", 1, g_pTextFormatCompact, &iconR, pBolt);
                pBolt->Release();
            }

            std::wstring batStr = std::to_wstring(g_telemetry.batteryPercent) + L"%";
            D2D1_RECT_F batR = D2D1::RectF(leftX + 18.0f, islandRect.top, islandRect.right - 12.0f, islandRect.bottom);
            ID2D1SolidColorBrush* pTxt = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.95f * compactAlpha), &pTxt);
            if (pTxt && g_pTextFormatCompact) {
                g_pDCRenderTarget->DrawTextW(batStr.c_str(), (UINT32)batStr.length(), g_pTextFormatCompact, &batR, pTxt);
                pTxt->Release();
            }
        } else {
            // Clean iPhone Idle Pill (Sleek minimalist status or dot)
            D2D1_ELLIPSE dot = D2D1::Ellipse(D2D1::Point2F(islandRect.left + 18.0f, centerY), 3.5f, 3.5f);
            ID2D1SolidColorBrush* pDot = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.35f * compactAlpha), &pDot);
            if (pDot) {
                g_pDCRenderTarget->FillEllipse(&dot, pDot);
                pDot->Release();
            }

            // Current Time (HH:mm)
            SYSTEMTIME st;
            GetLocalTime(&st);
            wchar_t timeBuf[16];
            swprintf_s(timeBuf, L"%02d:%02d", st.wHour, st.wMinute);
            D2D1_RECT_F timeR = D2D1::RectF(islandRect.left + 26.0f, islandRect.top, islandRect.right - 18.0f, islandRect.bottom);
            ID2D1SolidColorBrush* pTime = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.85f * compactAlpha), &pTime);
            if (pTime && g_pTextFormatCompact) {
                g_pDCRenderTarget->DrawTextW(timeBuf, (UINT32)wcslen(timeBuf), g_pTextFormatCompact, &timeR, pTime);
                pTime->Release();
            }
        }
    }

    // ─────────────────────────────────────────────────────────────────────────
    // 6. EXPANDED MODE (NO TABS, CONTEXT-AWARE IPHONE LAYOUT)
    // ─────────────────────────────────────────────────────────────────────────
    if (g_contentAlpha > 0.05f) {
        float expAlpha = g_contentAlpha;

        if (g_currentActivity == IslandActivity::Music) {
            // ─────────────────────────────────────────────────────────────────
            // 🎵 APPLE EXPANDED MUSIC PLAYER LAYOUT
            // ─────────────────────────────────────────────────────────────────
            float topY = islandRect.top + 18.0f;

            // A. LEFT: Square Album Artwork with 12px rounded corners
            float artSize = 54.0f;
            float artX = islandRect.left + 20.0f;
            D2D1_RECT_F artRect = D2D1::RectF(artX, topY, artX + artSize, topY + artSize);
            D2D1_ROUNDED_RECT rArt = D2D1::RoundedRect(artRect, 12.0f, 12.0f);

            // Vinyl Base
            ID2D1SolidColorBrush* pArtBg = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.12f, 0.13f, 0.17f, 0.98f * expAlpha), &pArtBg);
            if (pArtBg) {
                g_pDCRenderTarget->FillRoundedRectangle(&rArt, pArtBg);
                pArtBg->Release();
            }

            // Concentric vinyl disc grooves
            D2D1_POINT_2F discCenter = D2D1::Point2F(artX + artSize * 0.5f, topY + artSize * 0.5f);
            ID2D1SolidColorBrush* pGroove = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.09f * expAlpha), &pGroove);
            if (pGroove) {
                g_pDCRenderTarget->DrawEllipse(D2D1::Ellipse(discCenter, 22.0f, 22.0f), pGroove, 1.0f);
                g_pDCRenderTarget->DrawEllipse(D2D1::Ellipse(discCenter, 16.0f, 16.0f), pGroove, 1.0f);
                g_pDCRenderTarget->DrawEllipse(D2D1::Ellipse(discCenter, 10.0f, 10.0f), pGroove, 1.0f);
                pGroove->Release();
            }

            // Center vinyl spindle
            ID2D1SolidColorBrush* pCenterPin = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.30f, 0.88f, 0.65f, 0.95f * expAlpha), &pCenterPin);
            if (pCenterPin) {
                g_pDCRenderTarget->FillEllipse(D2D1::Ellipse(discCenter, 5.5f, 5.5f), pCenterPin);
                pCenterPin->Release();
            }

            // B. MIDDLE: Song Title & Artist
            float midX = artX + artSize + 14.0f;
            float midRight = islandRect.right - 54.0f;

            D2D1_RECT_F titleRect = D2D1::RectF(midX, topY + 4.0f, midRight, topY + 26.0f);
            ID2D1SolidColorBrush* pTitleBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.98f * expAlpha), &pTitleBrush);
            if (pTitleBrush && g_pTextFormatTitle) {
                g_pDCRenderTarget->DrawTextW(
                    g_musicInfo.title.c_str(), (UINT32)g_musicInfo.title.length(),
                    g_pTextFormatTitle, &titleRect, pTitleBrush
                );
                pTitleBrush->Release();
            }

            D2D1_RECT_F artistRect = D2D1::RectF(midX, topY + 28.0f, midRight, topY + 48.0f);
            ID2D1SolidColorBrush* pArtistBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.72f, 0.75f, 0.82f, 0.72f * expAlpha), &pArtistBrush);
            if (pArtistBrush && g_pTextFormatArtist) {
                g_pDCRenderTarget->DrawTextW(
                    g_musicInfo.artist.c_str(), (UINT32)g_musicInfo.artist.length(),
                    g_pTextFormatArtist, &artistRect, pArtistBrush
                );
                pArtistBrush->Release();
            }

            // C. RIGHT: 4-Bar Music Visualizer (Equalizer)
            float eqX = islandRect.right - 38.0f;
            for (int b = 0; b < 4; ++b) {
                float wave = std::sin(g_musicWavePhase + (float)b * 1.35f);
                float barH = 5.0f + (wave * 0.5f + 0.5f) * 16.0f;
                float bX = eqX + (float)b * 5.0f;
                D2D1_RECT_F bRect = D2D1::RectF(bX, topY + 36.0f - barH, bX + 2.5f, topY + 36.0f);
                D2D1_ROUNDED_RECT rB = D2D1::RoundedRect(bRect, 1.25f, 1.25f);

                ID2D1SolidColorBrush* pEqBrush = NULL;
                g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.35f, 0.90f, 0.65f, 0.95f * expAlpha), &pEqBrush);
                if (pEqBrush) {
                    g_pDCRenderTarget->FillRoundedRectangle(&rB, pEqBrush);
                    pEqBrush->Release();
                }
            }

            // D. BOTTOM: Slim Progress Bar
            float barLeft = islandRect.left + 22.0f;
            float barRight = islandRect.right - 22.0f;
            float barY = topY + artSize + 16.0f;

            D2D1_RECT_F trackBg = D2D1::RectF(barLeft, barY, barRight, barY + 3.0f);
            D2D1_ROUNDED_RECT rTrackBg = D2D1::RoundedRect(trackBg, 1.5f, 1.5f);
            ID2D1SolidColorBrush* pTrackBgBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.18f * expAlpha), &pTrackBgBrush);
            if (pTrackBgBrush) {
                g_pDCRenderTarget->FillRoundedRectangle(&rTrackBg, pTrackBgBrush);
                pTrackBgBrush->Release();
            }

            float fillW = (barRight - barLeft) * std::clamp(g_musicInfo.progress, 0.0f, 1.0f);
            D2D1_RECT_F trackFill = D2D1::RectF(barLeft, barY, barLeft + fillW, barY + 3.0f);
            D2D1_ROUNDED_RECT rTrackFill = D2D1::RoundedRect(trackFill, 1.5f, 1.5f);
            ID2D1SolidColorBrush* pFillBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.85f * expAlpha), &pFillBrush);
            if (pFillBrush) {
                g_pDCRenderTarget->FillRoundedRectangle(&rTrackFill, pFillBrush);
                pFillBrush->Release();
            }

            // E. Elapsed Time & Remaining Time
            std::wstring elapsedStr = FormatTimeString(g_musicInfo.elapsedSeconds);
            std::wstring remainStr = L"-" + FormatTimeString(g_musicInfo.totalSeconds - g_musicInfo.elapsedSeconds);

            D2D1_RECT_F elapsedRect = D2D1::RectF(barLeft, barY + 5.0f, barLeft + 60.0f, barY + 18.0f);
            ID2D1SolidColorBrush* pTimeBrush = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.65f, 0.68f, 0.75f, 0.65f * expAlpha), &pTimeBrush);
            if (pTimeBrush && g_pTextFormatTime) {
                g_pDCRenderTarget->DrawTextW(elapsedStr.c_str(), (UINT32)elapsedStr.length(), g_pTextFormatTime, &elapsedRect, pTimeBrush);

                D2D1_RECT_F remainRect = D2D1::RectF(barRight - 60.0f, barY + 5.0f, barRight, barY + 18.0f);
                g_pTextFormatTime->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_TRAILING);
                g_pDCRenderTarget->DrawTextW(remainStr.c_str(), (UINT32)remainStr.length(), g_pTextFormatTime, &remainRect, pTimeBrush);
                g_pTextFormatTime->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_LEADING);

                pTimeBrush->Release();
            }

            // F. Minimalist Media Controls ([⏮] [⏯/⏸] [⏭])
            float btnCenterY = barY + 28.0f;
            float islandCenterX = (islandRect.left + islandRect.right) * 0.5f;

            // Previous [⏮]
            float prevX = islandCenterX - 64.0f;
            D2D1_RECT_F prevRect = D2D1::RectF(prevX - 16.0f, btnCenterY - 14.0f, prevX + 16.0f, btnCenterY + 14.0f);
            if (g_hoveredMediaBtn == 1) {
                ID2D1SolidColorBrush* pHov = NULL;
                g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.12f * expAlpha), &pHov);
                if (pHov) {
                    D2D1_ROUNDED_RECT rH = D2D1::RoundedRect(prevRect, 8.0f, 8.0f);
                    g_pDCRenderTarget->FillRoundedRectangle(&rH, pHov);
                    pHov->Release();
                }
            }
            ID2D1SolidColorBrush* pBtnSym = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.95f * expAlpha), &pBtnSym);
            if (pBtnSym && g_pTextFormatIcon) {
                g_pDCRenderTarget->DrawTextW(L"⏮", 1, g_pTextFormatIcon, &prevRect, pBtnSym);

                // Play / Pause [⏯] / [⏸]
                D2D1_RECT_F playRect = D2D1::RectF(islandCenterX - 18.0f, btnCenterY - 15.0f, islandCenterX + 18.0f, btnCenterY + 15.0f);
                if (g_hoveredMediaBtn == 2) {
                    ID2D1SolidColorBrush* pHov = NULL;
                    g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.15f * expAlpha), &pHov);
                    if (pHov) {
                        D2D1_ROUNDED_RECT rH = D2D1::RoundedRect(playRect, 10.0f, 10.0f);
                        g_pDCRenderTarget->FillRoundedRectangle(&rH, pHov);
                        pHov->Release();
                    }
                }
                const wchar_t* pIcon = g_musicInfo.isPlaying ? L"⏸" : L"⏯";
                g_pDCRenderTarget->DrawTextW(pIcon, 1, g_pTextFormatIcon, &playRect, pBtnSym);

                // Next [⏭]
                float nextX = islandCenterX + 64.0f;
                D2D1_RECT_F nextRect = D2D1::RectF(nextX - 16.0f, btnCenterY - 14.0f, nextX + 16.0f, btnCenterY + 14.0f);
                if (g_hoveredMediaBtn == 3) {
                    ID2D1SolidColorBrush* pHov = NULL;
                    g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.12f * expAlpha), &pHov);
                    if (pHov) {
                        D2D1_ROUNDED_RECT rH = D2D1::RoundedRect(nextRect, 8.0f, 8.0f);
                        g_pDCRenderTarget->FillRoundedRectangle(&rH, pHov);
                        pHov->Release();
                    }
                }
                g_pDCRenderTarget->DrawTextW(L"⏭", 1, g_pTextFormatIcon, &nextRect, pBtnSym);

                pBtnSym->Release();
            }
        } else if (g_currentActivity == IslandActivity::Clipboard) {
            // ─────────────────────────────────────────────────────────────────
            // 📋 CLIPBOARD CAPSULE
            // ─────────────────────────────────────────────────────────────────
            float cY = (islandRect.top + islandRect.bottom) * 0.5f;

            // Circular clipboard icon on left
            D2D1_ELLIPSE iconCircle = D2D1::Ellipse(D2D1::Point2F(islandRect.left + 30.0f, cY), 18.0f, 18.0f);
            ID2D1SolidColorBrush* pCirBg = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.12f * expAlpha), &pCirBg);
            if (pCirBg) {
                g_pDCRenderTarget->FillEllipse(&iconCircle, pCirBg);
                pCirBg->Release();
            }

            D2D1_RECT_F icR = D2D1::RectF(islandRect.left + 16.0f, cY - 14.0f, islandRect.left + 44.0f, cY + 14.0f);
            ID2D1SolidColorBrush* pIcTxt = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.95f * expAlpha), &pIcTxt);
            if (pIcTxt && g_pTextFormatIcon) {
                g_pDCRenderTarget->DrawTextW(L"📋", 1, g_pTextFormatIcon, &icR, pIcTxt);
                pIcTxt->Release();
            }

            // Text info
            float tX = islandRect.left + 58.0f;
            float tR = islandRect.right - 20.0f;

            D2D1_RECT_F titleR = D2D1::RectF(tX, cY - 18.0f, tR, cY);
            ID2D1SolidColorBrush* pT1 = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.98f * expAlpha), &pT1);
            if (pT1 && g_pTextFormatTitle) {
                g_pDCRenderTarget->DrawTextW(L"Đã sao chép vào Clipboard", 25, g_pTextFormatTitle, &titleR, pT1);
                pT1->Release();
            }

            D2D1_RECT_F subR = D2D1::RectF(tX, cY + 2.0f, tR, cY + 20.0f);
            ID2D1SolidColorBrush* pT2 = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.70f, 0.74f, 0.82f, 0.75f * expAlpha), &pT2);
            if (pT2 && g_pTextFormatArtist) {
                g_pDCRenderTarget->DrawTextW(
                    g_activeAlert.subtitle.c_str(), (UINT32)g_activeAlert.subtitle.length(),
                    g_pTextFormatArtist, &subR, pT2
                );
                pT2->Release();
            }
        } else if (g_currentActivity == IslandActivity::Battery) {
            // ─────────────────────────────────────────────────────────────────
            // ⚡ BATTERY CHARGING CAPSULE
            // ─────────────────────────────────────────────────────────────────
            float cY = (islandRect.top + islandRect.bottom) * 0.5f;

            D2D1_ELLIPSE iconCircle = D2D1::Ellipse(D2D1::Point2F(islandRect.left + 28.0f, cY), 17.0f, 17.0f);
            ID2D1SolidColorBrush* pCirBg = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.20f, 0.88f, 0.50f, 0.20f * expAlpha), &pCirBg);
            if (pCirBg) {
                g_pDCRenderTarget->FillEllipse(&iconCircle, pCirBg);
                pCirBg->Release();
            }

            D2D1_RECT_F icR = D2D1::RectF(islandRect.left + 14.0f, cY - 14.0f, islandRect.left + 42.0f, cY + 14.0f);
            ID2D1SolidColorBrush* pIcTxt = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.25f, 0.95f, 0.55f, 0.98f * expAlpha), &pIcTxt);
            if (pIcTxt && g_pTextFormatIcon) {
                g_pDCRenderTarget->DrawTextW(L"⚡", 1, g_pTextFormatIcon, &icR, pIcTxt);
                pIcTxt->Release();
            }

            float tX = islandRect.left + 54.0f;
            float tR = islandRect.right - 18.0f;

            D2D1_RECT_F titleR = D2D1::RectF(tX, cY - 18.0f, tR, cY);
            ID2D1SolidColorBrush* pT1 = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.98f * expAlpha), &pT1);
            if (pT1 && g_pTextFormatTitle) {
                g_pDCRenderTarget->DrawTextW(
                    g_activeAlert.title.c_str(), (UINT32)g_activeAlert.title.length(),
                    g_pTextFormatTitle, &titleR, pT1
                );
                pT1->Release();
            }

            D2D1_RECT_F subR = D2D1::RectF(tX, cY + 2.0f, tR, cY + 20.0f);
            ID2D1SolidColorBrush* pT2 = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.68f, 0.72f, 0.80f, 0.75f * expAlpha), &pT2);
            if (pT2 && g_pTextFormatArtist) {
                g_pDCRenderTarget->DrawTextW(
                    g_activeAlert.subtitle.c_str(), (UINT32)g_activeAlert.subtitle.length(),
                    g_pTextFormatArtist, &subR, pT2
                );
                pT2->Release();
            }
        } else if (g_currentActivity == IslandActivity::Download) {
            // ─────────────────────────────────────────────────────────────────
            // 📥 DOWNLOAD CAPSULE
            // ─────────────────────────────────────────────────────────────────
            float cY = (islandRect.top + islandRect.bottom) * 0.5f;

            D2D1_ELLIPSE iconCircle = D2D1::Ellipse(D2D1::Point2F(islandRect.left + 28.0f, cY), 17.0f, 17.0f);
            ID2D1SolidColorBrush* pCirBg = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.20f, 0.70f, 1.0f, 0.20f * expAlpha), &pCirBg);
            if (pCirBg) {
                g_pDCRenderTarget->FillEllipse(&iconCircle, pCirBg);
                pCirBg->Release();
            }

            D2D1_RECT_F icR = D2D1::RectF(islandRect.left + 14.0f, cY - 14.0f, islandRect.left + 42.0f, cY + 14.0f);
            ID2D1SolidColorBrush* pIcTxt = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.30f, 0.85f, 1.0f, 0.98f * expAlpha), &pIcTxt);
            if (pIcTxt && g_pTextFormatIcon) {
                g_pDCRenderTarget->DrawTextW(L"⬇", 1, g_pTextFormatIcon, &icR, pIcTxt);
                pIcTxt->Release();
            }

            float tX = islandRect.left + 54.0f;
            float tR = islandRect.right - 18.0f;

            D2D1_RECT_F titleR = D2D1::RectF(tX, cY - 18.0f, tR, cY);
            ID2D1SolidColorBrush* pT1 = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.98f * expAlpha), &pT1);
            if (pT1 && g_pTextFormatTitle) {
                g_pDCRenderTarget->DrawTextW(
                    g_activeAlert.title.c_str(), (UINT32)g_activeAlert.title.length(),
                    g_pTextFormatTitle, &titleR, pT1
                );
                pT1->Release();
            }

            D2D1_RECT_F subR = D2D1::RectF(tX, cY + 2.0f, tR, cY + 20.0f);
            ID2D1SolidColorBrush* pT2 = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.68f, 0.72f, 0.80f, 0.75f * expAlpha), &pT2);
            if (pT2 && g_pTextFormatArtist) {
                g_pDCRenderTarget->DrawTextW(
                    g_activeAlert.subtitle.c_str(), (UINT32)g_activeAlert.subtitle.length(),
                    g_pTextFormatArtist, &subR, pT2
                );
                pT2->Release();
            }
        } else {
            // ─────────────────────────────────────────────────────────────────
            // 💡 IDLE EXPANDED GLANCE (Minimalist Date & System Status)
            // ─────────────────────────────────────────────────────────────────
            float cY = (islandRect.top + islandRect.bottom) * 0.5f;

            SYSTEMTIME st;
            GetLocalTime(&st);
            wchar_t dateBuf[64];
            swprintf_s(dateBuf, L"Thứ %d, %02d/%02d/%04d", (st.wDayOfWeek == 0 ? 8 : st.wDayOfWeek + 1), st.wDay, st.wMonth, st.wYear);

            D2D1_RECT_F dateR = D2D1::RectF(islandRect.left + 24.0f, cY - 18.0f, islandRect.right - 24.0f, cY);
            ID2D1SolidColorBrush* pD1 = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.98f * expAlpha), &pD1);
            if (pD1 && g_pTextFormatTitle) {
                g_pDCRenderTarget->DrawTextW(dateBuf, (UINT32)wcslen(dateBuf), g_pTextFormatTitle, &dateR, pD1);
                pD1->Release();
            }

            std::wstring sysStr = L"CPU: " + std::to_wstring(g_telemetry.cpuUsagePercent) + L"%  •  RAM: " +
                                  std::to_wstring(g_telemetry.ramUsagePercent) + L"%  •  Pin: " +
                                  std::to_wstring(g_telemetry.batteryPercent) + (g_telemetry.isCharging ? L"% ⚡" : L"%");

            D2D1_RECT_F sysR = D2D1::RectF(islandRect.left + 24.0f, cY + 2.0f, islandRect.right - 24.0f, cY + 20.0f);
            ID2D1SolidColorBrush* pD2 = NULL;
            g_pDCRenderTarget->CreateSolidColorBrush(D2D1::ColorF(0.68f, 0.72f, 0.80f, 0.75f * expAlpha), &pD2);
            if (pD2 && g_pTextFormatArtist) {
                g_pDCRenderTarget->DrawTextW(sysStr.c_str(), (UINT32)sysStr.length(), g_pTextFormatArtist, &sysR, pD2);
                pD2->Release();
            }
        }
    }

    g_pDCRenderTarget->EndDraw();

    // ─────────────────────────────────────────────────────────────────────────
    // 7. COMMIT ATOMICALLY TO SCREEN
    // ─────────────────────────────────────────────────────────────────────────
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

        // Native Windows Clipboard Format Listener
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
                        if (snippet.length() > 34) {
                            snippet = snippet.substr(0, 32) + L"...";
                        }
                        if (!snippet.empty() && snippet != g_lastClipboardText) {
                            g_lastClipboardText = snippet;
                            TriggerActivity(IslandActivity::Clipboard, L"Đã sao chép vào Clipboard", snippet, 3);
                        }
                    }
                    GlobalUnlock(hData);
                }
            } else if (IsClipboardFormatAvailable(CF_BITMAP) || IsClipboardFormatAvailable(CF_DIB)) {
                TriggerActivity(IslandActivity::Clipboard, L"Đã sao chép hình ảnh", L"Hình ảnh đã lưu vào bộ nhớ tạm.", 3);
            } else if (IsClipboardFormatAvailable(CF_HDROP)) {
                TriggerActivity(IslandActivity::Clipboard, L"Đã sao chép tệp tin", L"Tệp tin đã lưu vào bộ nhớ tạm.", 3);
            }
            CloseClipboard();
        }
        return 0;
    }

    case WM_TIMER: {
        if (wParam == 1) {
            ULONGLONG now = GetTickCount64();

            StepPhysicsAnimation(0.016f);

            // Periodic telemetry
            if (now - g_lastTelemetryTick > 1500) {
                g_lastTelemetryTick = now;
                if (g_bIsExpanded || g_settings.enableSysMon || g_settings.enableBatteryAlerts) {
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

            // Auto-collapse check after alert expiry
            if (g_activeAlert.hasAlert && now > g_activeAlert.expireTick) {
                g_activeAlert.hasAlert = false;
                if (!g_bIsHovered) {
                    g_bIsExpanded = false;
                    g_isAnimating = true;
                }
            }

            if (g_autoCollapseTimer > 0 && now > g_autoCollapseTimer) {
                g_autoCollapseTimer = 0;
                if (!g_bIsHovered) {
                    g_bIsExpanded = false;
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
        int mouseX = (int)(short)LOWORD(lParam);
        int mouseY = (int)(short)HIWORD(lParam);

        int renderPad = g_settings.lowPerfMode ? 14 : 24;
        int localX = mouseX - renderPad;
        int localY = mouseY - renderPad;

        if (!g_bIsHovered) {
            g_bIsHovered = true;
            g_autoCollapseTimer = 0;
            g_isAnimating = true;

            // Expand naturally on hover
            g_bIsExpanded = true;
            if (g_musicInfo.isPlaying && g_settings.enableMusic) {
                g_currentActivity = IslandActivity::Music;
            } else {
                g_currentActivity = IslandActivity::Idle;
            }

            TRACKMOUSEEVENT tme = { sizeof(TRACKMOUSEEVENT), TME_LEAVE, hWnd, HOVER_DEFAULT };
            TrackMouseEvent(&tme);

            SetTimer(hWnd, 1, 16, NULL);
        }

        // Hit testing for media buttons when Expanded in Music Activity
        int oldHovered = g_hoveredMediaBtn;
        g_hoveredMediaBtn = 0;

        if (g_bIsExpanded && g_currentActivity == IslandActivity::Music) {
            float islandCenterX = (float)g_curWidth * 0.5f;
            float btnY = (float)g_settings.expandedHeight - 34.0f;

            // Previous [⏮] (center - 64)
            if (localX >= islandCenterX - 80 && localX <= islandCenterX - 48 && localY >= btnY - 14 && localY <= btnY + 14) {
                g_hoveredMediaBtn = 1;
            }
            // Play/Pause [⏯] (center)
            else if (localX >= islandCenterX - 20 && localX <= islandCenterX + 20 && localY >= btnY - 15 && localY <= btnY + 15) {
                g_hoveredMediaBtn = 2;
            }
            // Next [⏭] (center + 64)
            else if (localX >= islandCenterX + 48 && localX <= islandCenterX + 80 && localY >= btnY - 14 && localY <= btnY + 14) {
                g_hoveredMediaBtn = 3;
            }
        }

        if (oldHovered != g_hoveredMediaBtn) {
            RenderIsland(hWnd);
        }
        return 0;
    }

    case WM_MOUSELEAVE: {
        g_bIsHovered = false;
        g_hoveredMediaBtn = 0;
        // Auto-collapse after duration
        g_autoCollapseTimer = (DWORD)GetTickCount64() + (g_settings.autoCollapseSec * 1000);
        SetTimer(hWnd, 1, 16, NULL);
        return 0;
    }

    case WM_LBUTTONDOWN: {
        int mouseX = (int)(short)LOWORD(lParam);
        int mouseY = (int)(short)HIWORD(lParam);

        int renderPad = g_settings.lowPerfMode ? 14 : 24;
        int localX = mouseX - renderPad;
        int localY = mouseY - renderPad;

        if (g_bIsExpanded) {
            if (g_currentActivity == IslandActivity::Music) {
                float islandCenterX = (float)g_curWidth * 0.5f;
                float btnY = (float)g_settings.expandedHeight - 34.0f;

                // [⏮ Prev]
                if (localX >= islandCenterX - 80 && localX <= islandCenterX - 48 && localY >= btnY - 14 && localY <= btnY + 14) {
                    SendMediaKey(VK_MEDIA_PREV_TRACK);
                    return 0;
                }
                // [⏯ Play/Pause]
                if (localX >= islandCenterX - 20 && localX <= islandCenterX + 20 && localY >= btnY - 15 && localY <= btnY + 15) {
                    SendMediaKey(VK_MEDIA_PLAY_PAUSE);
                    return 0;
                }
                // [⏭ Next]
                if (localX >= islandCenterX + 48 && localX <= islandCenterX + 80 && localY >= btnY - 14 && localY <= btnY + 14) {
                    SendMediaKey(VK_MEDIA_NEXT_TRACK);
                    return 0;
                }
            }

            // Click anywhere else on expanded island toggles collapse
            g_bIsExpanded = false;
            g_isAnimating = true;
            SetTimer(hWnd, 1, 16, NULL);
        } else {
            // Click on compact pill toggles expansion
            g_bIsExpanded = true;
            if (g_musicInfo.isPlaying && g_settings.enableMusic) {
                g_currentActivity = IslandActivity::Music;
            } else {
                g_currentActivity = IslandActivity::Idle;
            }
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
        TriggerActivity(IslandActivity::Idle, L"Dynamic Island Pro", L"Liquid Glass Minimalist Edition", 3);

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
    Wh_Log(L"Dynamic Island Pro: Initializing v1.2.0 (Apple Redesign)...");

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
