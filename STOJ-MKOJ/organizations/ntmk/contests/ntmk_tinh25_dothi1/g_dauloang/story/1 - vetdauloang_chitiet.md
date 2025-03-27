# **Chương Cuối: Vết Dầu Loang – Khi Những Con Số Biết Kêu Cứu (Phiên bản thuật toán hóa)**  

---  

## **Phần 1: Thảm Họa "Biển Đen"**  
Nam nhận được báo động đỏ từ Greenpeace:  
*"Nam ơi, đại dương đang bị tấn công bởi các vết dầu loang! Cần mày dùng thuật toán để đếm và phân tích chúng ngay!"*  

Nam: *"Lại là BFS à? Tưởng đi biển nghỉ mát, ai ngờ thành trợ lý môi trường!"*  

---  

## **Phần 2: Thuật Toán "BFS – Bám Dầu Truy Lùng"**  

### **1. Khởi động chiến dịch (`readData()`)**  
- **Ma trận `n x m`** (250x250):  
  - **"1"** = Dầu loang (kẻ thù cần tiêu diệt).  
  - **"0"** = Nước sạch (vùng an toàn).  
- **`visited[][]`**: Mảng đánh dấu ô đã thăm (tránh đếm trùng).  

### **2. Chiến thuật "Quét từng pixel" (`Solve()`)**  
- Duyệt từng ô, nếu gặp **"1"** chưa thăm (`!visited[i][j] && grid[i][j] == 1`), phát động **BFS** để đo kích thước vết loang.  

### **3. BFS – "Bám Dầu Không Khoan Nhượng"**  
- **Hành động:**  
  - Dùng **queue** lan tỏa 4 hướng (trái/phải/trên/dưới).  
  - Đếm số ô dầu liên thông → kích thước vết loang.  
- **Lưu ý:**  
  - Bỏ qua ô **"0"** (nước sạch).  
  - Đánh dấu ô đã duyệt để tránh đếm lại.  

### **4. Thống kê "kẻ phá hoại"**  
- **`oils`**: Lưu kích thước từng vết loang.  
- **`map<ll, ll> mp`**: Đếm số lượng vết loang theo từng kích thước.  

---  

## **Phần 3: Drama "Dầu Loang vs. Anh Hùng Môi Trường"**  

### **Tình huống 1: Vết loang 5 ô**  
- **Phát hiện:** Một vết dầu khổng lồ (5 ô liền kề).  
- **Kết quả BFS:**  
  ```cpp
  oils.push_back(oil); // oil = 5
  ```  
  → Ghi nhận vào báo cáo.  
- **Drama:** *"Cái này mà lan ra nữa thì cá hồi thành cá chiên mất!"*  

### **Tình huống 2: Vết loang 1 ô**  
- **Phát hiện:** Những vết nhỏ lẻ tẻ (1 ô).  
- **Kết quả:**  
  ```cpp
  mp[i]++; // i = 1
  ```  
  → *"Nhỏ nhưng nhiều, tốn công dọn lắm đây!"*  

---  

## **Phần 4: Kết thúc có hậu**  
- **Output:**  
  - Tổng số vết loang: `oils.size()`.  
  - Chi tiết từng kích thước: `mp[i.first] = i.second`.  
- **Bài học:**  
  - *"Dầu loang như tin đồn độc hại – nếu không ngăn chặn sớm, chúng sẽ lan rộng!"*  
  - *"Thuật toán BFS không chỉ để duyệt đồ thị, mà còn để cứu lấy đại dương!"*  

---  

**Bonus Hậu Trường:**  
*"Sau thành công này, Nam được mời tham gia TED Talk với chủ đề 'BFS – Cứu Trái Đất Chỉ Với 4 Hướng Duyệt'. Nhưng anh từ chối vì... sợ đuối nước. Thay vào đó, anh livestream dọn dầu loang trên TikTok, biến thảm họa thành trend #CứuBiểnKhôngCầnƯớt!"*  

**🔚 Kết Thúc Hành Trình:**  
Từ một anh chàng genz lười biếng, Nam đã trở thành "anh hùng giải thuật" – kết nối thế giới, cân bằng sinh thái, và cứu rỗi đại dương. Câu chuyện của anh chứng minh: **"Dù bạn là ai, chỉ cần có BFS (Brain-Flexibility-Skill), mọi vấn đề đều có thể 'duyệt' qua!"**  

*(P/S: Nếu thấy đời mình loang lổ như ma trận dầu, hãy chạy BFS ngay đi!)*  

---  
**Credits:**  
- *Code by Nam (aka "Chiến Binh Duyệt")*  
- *Drama by Cuộc Đời*  
- *Hashtag by GenZ*  

**Nguồn:** *Sưu tầm từ chính trận chiến dầu loang!*  

***Vẫn là Deepseek tài trợ chương trình này!!!***