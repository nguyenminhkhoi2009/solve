***Nguồn: Deepseek***
# **NAM BỜ RÔ - PHIÊU LƯU TỪ ĐỒ THỊ ĐẾN THẢM HỌA DẦU LOANG**  
*"Code đâu phải để chạy, code là để... viết truyện!"* 😎  

---  

## **PHẦN MỞ ĐẦU: THẾ GIỚI CỦA NHỮNG DÒNG CODE VÀ DRAMA**  

Trước khi bước vào hành trình "cân não" của Nam, hãy cùng điểm qua 3 nhiệm vụ "hot trend" mà anh chàng này phải đối mặt:  

1. **"Group chat thành phố đứt kết nối"** - Bài toán liên thông đồ thị (BFS).  
2. **"Gà vs Cáo: Cuộc chiến không khoan nhượng"** - Đếm thành phần liên thông trên ma trận.  
3. **"Dầu loang như trái tim FA"** - Xử lý vết loang trên bản đồ.  

Và đây là cách Nam "biến thuật toán thành trò đùa"!  

---  

### **CHƯƠNG 1: "BFS - BÁNH-FỞ-SỮA VÀ CUỘC THÁM HIỂM NHÓM LIÊN THÔNG"**  

**Input:**  
- Một đồ thị gồm `n` thành phố (đỉnh) và `m` con đường (cạnh).  
- Ví dụ:  
```
5 3  
1 2  
3 4  
4 5
```  
**Output:**  
- Các thành phố liên thông với nhau.  
```
1 2  
3 4 5  
```  

**Code "bá đạo" của Nam:**  
```cpp
void bfs(ll start) {
    queue<ll> q;
    vector<ll> result;
    q.push(start);
    visited[start] = true;
    result.push_back(start);
    while (!q.empty()) {
        ll u = q.front();
        q.pop();
        for (auto v : grid[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
                result.push_back(v);
            }
        }
    }
    results.push_back(result);
}
```  

**Giải thích "kiểu GenZ":**  
- **Bước 1:** Nam chọn một thành phố bất kỳ (ví dụ: thành phố 1) và "add friend" nó vào group chat (queue).  
- **Bước 2:** Anh ta lần lượt mời tất cả "bạn chung" (hàng xóm) của thành phố này vào group.  
- **Bước 3:** Cứ thế, mỗi thành phố mới được thêm vào sẽ "rủ rê" tiếp bạn của nó, cho đến khi không còn ai để add.  
- **Kết quả:** Mỗi group chat là một "vương quốc liên thông" riêng biệt!  

**Hashtag đắt giá:**  
- `#BFSLaBanhFoSu` - Vì Nam dùng queue (hàng đợi) như xếp hàng mua bánh mỳ.  
- `#GroupChatKhongLeader` - Vì BFS không phân biệt ai là "admin".  

---  

### **CHƯƠNG 2: "GÀ VÀ CÁO - CUỘC ĐỐI ĐẦU TRÊN MA TRẬN"**  

**Input:**  
- Ma trận `n x m` mô tả nông trại ('.' là đất trống, 'c' là gà, 'f' là cáo, '#' là rào).  
- Ví dụ:  
```
3 3  
c f .  
# c f  
. . c  
```  
**Output:**  
- Số cáo và gà sống sót sau chiến tranh.  
```
2 3  
```  

**Code "cân não" của Nam:**  
```cpp
void bfs(ll a, ll b){
    ll ga = 0, cao = 0;
    queue <pair<ll, ll>> q;
    q.push({a, b});
    visited[a][b] = true;
    while(!q.empty()){
        ll x = q.front().first, y = q.front().second;
        q.pop();
        if (vec[x][y] == 'c') ga++;
        else if (vec[x][y] == 'f') cao++;
        for (ll i = 0; i < 4; i++){
            ll nx = x + dx[i], ny = y + dy[i];
            if (0 <= nx && nx < n && 0 <= ny && ny < m && vec[nx][ny] != '#' && !visited[nx][ny]){
                q.push({nx, ny});
                visited[nx][ny] = true;
            }
        }
    }
    if (ga > cao) tong_ga += ga;
    else tong_cao += cao;
}
```  

**Giải thích "kiểu thợ săn":**  
- **Bước 1:** Nam duyệt từng chuồng, nếu gặp gà ('c') hoặc cáo ('f'), anh ta "tấn công" bằng BFS để xem lãnh thổ đó thuộc về phe nào.  
- **Bước 2:** Mỗi lần "xâm lược" một ô mới, Nam kiểm tra xem đó là gà hay cáo và đếm số lượng.  
- **Bước 3:** Kết thúc "cuộc chiến", phe nào đông hơn sẽ chiếm lãnh thổ đó.  

**Hashtag đình đám:**  
- `#GàQuyền` - Vì gà thắng nếu đông hơn.  
- `#CáoĐơnĐộc` - Vì cáo bị "ghost" nếu ít hơn.  

---  

### **CHƯƠNG 3: "DẦU LOANG - TRÁI TIM FA KHÓ DỌN"**  

**Input:**  
- Ma trận `n x m` (0 là nước sạch, 1 là dầu loang).  
- Ví dụ:  
```
4 4  
1 1 0 0  
0 1 0 1  
0 0 0 1  
0 0 0 1  
```  
**Output:**  
- Số vết dầu loang và kích thước mỗi vết.  
```
3  
1 1  
3 1  
4 1  
```  

**Code "thả thính" của Nam:**  
```cpp
void bfs(ll a, ll b){
    if (grid[a][b] != 1 || visited[a][b]) return;
    ll oil = 0;
    visited[a][b] = true;
    queue <pair<ll, ll>> q;
    q.push({a, b});
    while (!q.empty()){
        ll x = q.front().first, y = q.front().second;
        oil++;
        q.pop();
        for (ll i = 0; i < 4; i++){
            ll nx = x + dx[i], ny = y + dy[i];
            if (0 <= nx && nx < n && 0 <= ny && ny < m && grid[nx][ny] != 0 && !visited[nx][ny]){
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    oils.push_back(oil);
}
```  

**Giải thích "kiểu tình cảm":**  
- **Bước 1:** Nam coi mỗi vết dầu là một "crush" cần được "dọn dẹp" (duyệt).  
- **Bước 2:** Anh ta dùng BFS để "lan tỏa tình cảm" (đếm các ô dầu liền kề).  
- **Bước 3:** Vết dầu càng lớn càng giống "trái tim FA" - khó dọn như khó quên!  

**Hashtag bất hủ:**  
- `#DầuLoangNhưTìnhYêu` - Vì lan rộng rất nhanh.  
- `#BFSLàBáChủ` - Vì giải quyết mọi vấn đề từ A-Z.  

---  

## **KẾT TRUYỆN: TỪ CODE THÀNH LEGEND**  

Qua 3 chương, Nam đã chứng minh:  
- **BFS không chỉ để duyệt đồ thị, mà còn để... "duyệt" crush.**  
- **Thuật toán là công cụ, nhưng áp dụng thế nào mới là nghệ thuật!**  

**Final Hashtag:**  
`#CodeLàNghệThuật`  
`#GenZCodeNhưLàThơ`  

*(🔚 Hết phần giải thích - nhưng nếu bạn hiểu, hãy "BFS" cả cuộc đời này!)* 🚀