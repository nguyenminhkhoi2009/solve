# **John và Lily: Cuộc Phiêu Lưu Toán Học Giữa Những Ngọn Đồi (Chi Tiết)**

## **Phần 1: Câu Chuyện**

John đứng trước hiên nhà nhìn ra cánh đồng bát ngát với những ngọn đồi nhấp nhô. Những vụ mất trộm gia súc gần đây khiến anh quyết định đặt lính canh trên các đỉnh đồi. Nhưng làm sao xác định được đâu là đỉnh đồi trong mê cung địa hình phức tạp này?

May mắn thay, cô bé Lily 10 tuổi - thiên tài toán học nhí - xuất hiện với tấm bản đồ kỳ lạ ghi các con số độ cao. "Chú John ơi, cháu sẽ giúp chú giải mã bí ẩn này bằng thuật toán thần kỳ!" - Lily hào hứng nói.

## **Phần 2: Giải Thuật Bằng Ngôn Ngữ Đời Thường**

1. **Chuẩn Bị Dụng Cụ**:
   - Tấm bản đồ (ma trận N x M)
   - Bút màu (đánh dấu visited)
   - La bàn 8 hướng (dx, dy)

2. **Cách Thức Hoạt Động**:
   - Đi từng ô một từ trái sang phải, từ trên xuống dưới
   - Khi gặp ô chưa thăm:
     * Tô màu đỏ cả vùng liên thông cùng độ cao
     * Kiểm tra xung quanh có ô nào cao hơn không
     * Nếu không, đây là đỉnh đồi (count++)

3. **Mẹo Nhớ Thuật Toán**:
   - "Đi thăm - Đánh dấu - Kiểm tra - Đếm"
   - Giống như trò chơi truy tìm kho báu

## **Phần 3: Triển Khai Code C++**

```cpp
#include <bits/stdc++.h>
using namespace std;

const int dx[8] = {-1,-1,-1,0,0,1,1,1};
const int dy[8] = {-1,0,1,-1,1,-1,0,1};

int N, M;
vector<vector<int>> height;
vector<vector<bool>> visited;

void dfs(int x, int y, bool &isPeak) {
    visited[x][y] = true;
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && ny >= 0 && nx < N && ny < M) {
            if (height[nx][ny] > height[x][y]) isPeak = false;
            if (height[nx][ny] == height[x][y] && !visited[nx][ny]) 
                dfs(nx, ny, isPeak);
        }
    }
}

int main() {
    cin >> N >> M;
    height.resize(N, vector<int>(M));
    visited.resize(N, vector<bool>(M, false));
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> height[i][j];
    
    int peakCount = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (!visited[i][j]) {
                bool isPeak = true;
                dfs(i, j, isPeak);
                if (isPeak) peakCount++;
            }
        }
    }
    
    cout << "So dinh doi can dat linh canh: " << peakCount;
    return 0;
}
```

## **Phần 4: Giải Thích Code Bằng Câu Chuyện**

1. **Hàm dfs()**:
   - Giống như Lily dẫn John đi thăm từng ô
   - Mỗi bước kiểm tra 8 hướng như dùng la bàn
   - Nếu gặp ô cao hơn: hạ cờ isPeak xuống

2. **Vòng lặp chính**:
   - John đi từng ô theo thứ tự từ trái sang, trên xuống
   - Khi gặp ô chưa thăm: gọi Lily (hàm dfs) đi khám phá cả vùng

3. **Biến peakCount**:
   - Như chiếc hộp đựng lá cờ đỏ
   - Mỗi lần phát hiện đỉnh đồi lại bỏ thêm 1 lá cờ

**Phần 5: Bài Học Lập Trình**

1. **DFS**:
   - Như trò chơi "dây nhảy lò cò" lan truyền
   - Đệ quy giống việc Lily gọi bạn bè cùng tham gia

2. **Đánh dấu visited**:
   - Những viên sỏi màu để không đi lạc
   - Quan trọng như mang theo bản đồ khi thám hiểm

3. **Kiểm tra biên**:
   - Luôn xác định nx, ny có hợp lệ không
   - Như John luôn dặn Lily "đừng đi ra khỏi bản đồ"

**Kết Thúc Có Hậu:**

Sau khi chạy chương trình, màn hình hiện lên: "So dinh doi can dat linh canh: 3". John vui mừng ôm Lily: "Cảm ơn cháu! Giờ thì nông trại sẽ an toàn rồi!"

Lily cười híp mắt: "Chú thấy không? Thuật toán cũng giống như trò chơi, chỉ cần kiên nhẫn và hệ thống là giải được mọi bài toán!"

Và thế là, từ một bài toán tưởng chừng phức tạp, họ đã tìm ra lời giải bằng sự kết hợp giữa tư duy thuật toán và trí tưởng tượng phong phú. Dưới ánh hoàng hôn, những dòng code và những ngọn đồi như hòa làm một...