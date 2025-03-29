# **Hành Trình Phép Thuật Của Lily Và Phù Thủy Nhí** - **Giải Thuật Đường Đi Kỳ Diệu** 

**1. Bài Toán Thực Tế:**  
*"Làm sao tìm đường từ nhà đến trường, đi qua ít ngã rẽ nhất và không quay lại chỗ cũ?"*  

**2. Bí Quyết Của Phù Thủy:**  
- **Dùng "Bột Thần" (Mảng visited):** Đánh dấu những nơi đã đi qua  
- **"Chọn Lối Nhỏ Nhất Trước" (Sắp xếp đỉnh):** Luôn ưu tiên đường có số nhỏ hơn  
- **"Câu Thần Chú Lùi Bước" (Đệ quy quay lui):** Khi gặp ngõ cụt, quay lại điểm trước đó thử lối khác  

**3. Cách Thức Hoạt Động:**  
1. *Bắt đầu từ điểm xuất phát*  
2. *Đánh dấu điểm hiện tại đã thăm*  
3. *Xem xét các lối đi kế tiếp theo thứ tự từ nhỏ đến lớn*  
4. *Với mỗi lối đi:*  
   - Nếu chưa thăm → đi tiếp  
   - Nếu gặp đích → hoàn thành  
   - Nếu hết lối → "lùi bước thần kỳ"  

**4. Minh Họa Bằng Ví Dụ:**  
```  
Giả sử có các đường:  
1 → 2  
1 → 3  
2 → 4  
3 → 4  

Cách đi:  
1 → 2 (thử trước vì 2 < 3)  
   2 → 4 (tới đích)  
Nếu không được sẽ quay về 1 → 3 → 4  
```  

**5. Lợi Ích Thuật Toán:**  
⚡ *Nhanh chóng tìm được đường đi hợp lệ*  
✨ *Đảm bảo không bị lặp vòng vô hạn*  
🎯 *Luôn tìm được lời giải nếu đường đi tồn tại*  

**6. Ứng Dụng Thực Tế:**  
- Tìm đường trong bản đồ  
- Giải đố mê cung  
- Sắp xếp lịch trình tối ưu  

*"Thuật toán chính là phép thuật có hệ thống - Hiểu nguyên tắc, bạn sẽ làm chủ mọi mê cung!"* 