# **Chương 2: Cuộc Chiến Nông Trại – Gà Bay, Cáo Chạy!** *(Phiên bản thuật toán hóa)*  

---  

## **Phần 1: Tình Thế "Cấp Cứu Nông Trại"**  
John: *"Nam ơi, tụi cáo nó đang xâm lược nông trại tao! Mày giỏi thuật toán, giúp tao đếm xem còn bao nhiêu gà với cáo sau cuộc chiến này!"*  

Nam: *"Ôi giời, lại phải BFS nữa à? Thôi được, coi như tập thể dục não!"*  

---  

## **Phần 2: Thuật Toán "BFS – Bắt Fải Sống" (Bước-Fàm-Săn)**  

### **1. Khởi động chiến dịch**  
- **`readData()`**: Nam scan bản đồ nông trại (ma trận `n x m`), ghi nhận vị trí gà (`'c'`), cáo (`'f'`), hàng rào (`'#'`) và đất trống (`'.'`).  
- **`visited[][]`**: Mảng đánh dấu ô đã thăm để tránh "đếm trùng" (kiểu như check-in Facebook, check rồi thì thôi).  

### **2. Chiến thuật "Mỗi chuồng một vương quốc"**  
- **`Solve()`**: Nam duyệt từng ô, nếu gặp ô chưa thăm (`!visited[i][j]`) và không phải hàng rào (`vec[i][j] != '#'`), anh ta phát động **BFS** để "quét sạch" cả khu vực liên thông đó.  

### **3. BFS – "Bước Fàm Săn" (Breadth-First Search)**  
- **Hành động:**  
  - Dùng **queue** (hàng đợi) để lan tỏa từ ô hiện tại ra 4 hướng (lên/xuống/trái/phải).  
  - Nếu gặp **gà (`'c'`)** hoặc **cáo (`'f'`)**, tăng biến đếm tương ứng.  
- **Luật sinh tồn:**  
  - **Gà đông hơn (`ga > cao`):** Gà thắng, số gà còn lại = `ga - cao`.  
  - **Cáo đông hơn hoặc bằng (`cao >= ga`):** Cáo thắng, số cáo còn lại = `cao - ga`.  
  - *"Kiểu như vote á, bên nào nhiều phiếu hơn thì bên kia bay màu!"*  

### **4. Tổng kết chiến trường**  
- **`tong_ga` và `tong_cao`**: Lưu tổng số gà/cáo còn sống sau khi "dọn dẹp" từng chuồng.  

---  

## **Phần 3: Drama "Gà Quyền vs. Cáo Đơn Độc"**  

### **Tình huống 1: Chuồng số 7 (Toạ độ 7,4)**  
- **Phát hiện:** 3 cáo vs. 1 gà.  
- **Kết quả BFS:**  
  ```cpp
  if (ga > cao) tong_ga += ga - cao;  
  else tong_cao += cao - ga;  
  ```  
  → Cáo thắng, gà bay màu (`tong_cao += 2`).  
- **Drama:** Con gà lẻ loi gào thét: *"Tao bị team cáo vote out rồi!"*  

### **Tình huống 2: Chuồng số 2 (Toạ độ 2,3)**  
- **Phát hiện:** 5 gà vs. 2 cáo.  
- **Kết quả:** Gà hợp sức đuổi sạch cáo (`tong_ga += 3`).  
- **Hashtag:** *"#GàQuyền #ChúngTôiĐôngHơn"*  

---  

## **Phần 4: Kết thúc có hậu (hoặc không?)**  
- **Output:** `1 cáo 3 gà` → John vẫn còn đủ trứng ăn sáng!  
- **Bài học:**  
  - *"Muốn sống sót, phải biết đoàn kết (hoặc chạy nhanh như gà)."*  
  - *"Thuật toán BFS không chỉ để duyệt đồ thị, mà còn để cứu gà!"*  

---  

**Bonus:**  
*"Sau trận chiến, con cáo cuối cùng lập group 'Cáo Đơn Độc' kêu gọi bình đẳng động vật. Trong khi đó, bầy gà chiến thắng mở tiệc 'Gà Quyền' với hit mới 'Chúng tôi là số đông'. Liệu Nam có phải quay lại giải quyết hậu chiến? Hãy đón xem Chương 3: 'Vết Dầu Loang – Khi BFS gặp môi trường'!"*  

**🔜 Teaser Chương 3:**  
*"Dầu loang khắp đại dương! Nam dùng BFS đếm từng vết dầu, nhưng lần này không phải gà hay cáo, mà là những con số biết nói…"* 🛢️🔥  

*(P/S: Thuật toán vẫn là BFS, nhưng drama sẽ lên level mới!)*  

---  
**Credits:**  
- *Code by Nam (aka "Chiến Binh Duyệt")*  
- *Drama by Cuộc Đời*  
- *Hashtag by GenZ*  

**Nguồn:** *Sưu tầm từ chính trận chiến nông trại!*

***Deepseek hân hạnh tài trợ chương trình này!***