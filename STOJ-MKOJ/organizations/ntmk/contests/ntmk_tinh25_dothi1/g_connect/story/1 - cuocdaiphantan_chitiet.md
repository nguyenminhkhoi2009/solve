# **Chương 1: Cuộc Đại Phân Tán - Mảnh Ghép Thất Lạc (Chi Tiết)** 

---  

## **Ngoại truyện:**  
*"Trong thế giới Đồ Thị kỳ lạ, các thành phố (đỉnh) vốn được nối với nhau bằng những con đường (cạnh) tạo thành mạng lưới giao thông phức tạp. Nhưng sau 'Đại Phân Tán', các con đường bỗng biến mất, chia cắt thế giới thành những cụm thành phố cô lập. Nhiệm vụ của Nam - lập trình viên kiêm thám hiểm - là dùng thuật toán BFS (Bánh-Fở-Sữa) để khám phá tất cả các cụm thành phố này!"*  

---  

## **Mở đầu:**  
Nam vừa thức dậy đã thấy cả thành phố hỗn loạn.  

*"Clgt? Đường về nhà ông ngoại đâu rồi?"* - Nam nhìn chằm chằm vào tấm bản đồ, nơi chỉ còn những chấm nhỏ rời rạc.  

## **Vấn đề:**  
Sau "Đại Phân Tán", thế giới bị chia thành các **thành phần liên thông** - những nhóm thành phố vẫn còn kết nối với nhau. Nhiệm vụ của Nam là tìm tất cả các cụm này và liệt kê chúng theo thứ tự từ điển.  

*"Kiểu như phải đi từng ngõ, gõ từng nhà xem nhà nào còn đường đi lại được với nhau!"* - Nam tự nhủ.  

---  

## **Hành trình khám phá:**  

### **1. Chuẩn bị dữ liệu**  
Nam mở laptop và nhập dữ liệu:  
```cpp
ll n, m;  // n thành phố, m con đường
vector<vector<ll>> grid;  // ma trận kết nối
vector<bool> visited;     // đánh dấu thành phố đã thăm
vector<vector<ll>> results; // danh sách các cụm thành phố
```

*"n thành phố từ 1 đến 100.000? M con đường tới 1.000.000? Trời đất, đây là Big Data thật rồi!"*  

### **2. Xây dựng bản đồ**  
Nam đọc dữ liệu các con đường còn sót lại:  
```cpp
for (ll i = 0; i < m; i++) {
    cin >> u >> v;
    grid[u].push_back(v);
    grid[v].push_back(u); // Đường hai chiều
}
```

*"Kiểu như add friend trên Facebook ấy. A kết bạn với B thì B cũng phải kết bạn lại A!"*  

### **3. Thuật toán BFS - "Bánh-Fở-Sữa"**  
Nam triển khai BFS để thăm từng cụm thành phố:  

```cpp
void bfs(ll start) {
    queue<ll> q;           // Hàng đợi chứa các thành phố cần thăm
    vector<ll> result;     // Danh sách cụm thành phố hiện tại
    q.push(start);
    visited[start] = true; // Đánh dấu đã thăm
    result.push_back(start);

    while (!q.empty()) {
        ll u = q.front();  // Lấy thành phố đầu hàng đợi
        q.pop();
        for (auto v : grid[u]) {  // Duyệt tất cả thành phố kề
            if (!visited[v]) {    // Nếu chưa thăm thì add vào
                visited[v] = true;
                q.push(v);
                result.push_back(v);
            }
        }
    }
    results.push_back(result); // Lưu lại cụm thành phố này
}
```

*"Giống như mở group chat, rủ từng đứa bạn vào nhóm. Đứa nào chưa tham gia thì mời vào, đứa nào rồi thì bỏ qua!"*  

### **4. Sắp xếp và in kết quả**  
Sau khi tìm được tất cả các cụm, Nam sắp xếp chúng theo thứ tự từ điển:  

```cpp
for (auto &group : results) {
    sort(group.begin(), group.end()); // Sắp xếp từ bé đến lớn
}

for (auto group : results) {
    for (auto city : group) cout << city << " ";
    cout << endl;
}
```

*"Phải sắp xếp cho đẹp, không là bị trừ điểm style!"*  

---  

## **Kết thúc**  
Sau khi chạy chương trình, Nam thu được kết quả:  

```
1 4 5  
2 3 6 7  
8 9 10 11 12  
```

*"Phew! Xong xuôi. Giờ thì thế giới lại có thể kết nối, và tao cũng kiếm được vài chiến hữu mới!"*  

## **Bài học lập trình:**  
- **BFS** giúp duyệt đồ thị theo chiều rộng, phù hợp tìm thành phần liên thông.  
- **visited[]** cực kỳ quan trọng để tránh lặp vô hạn.  
- **Sắp xếp** kết quả giúp code trông chuyên nghiệp hơn.  

**Hẹn gặp lại ở:  
Chương 2 - "Cuộc Chiến Nông Trại: Gà Bay, Cáo Chạy!"** 🐔🦊🔥  