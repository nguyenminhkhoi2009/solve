# **Chương Cuối: Vết Dầu Loang – Khi Những Con Số Biết Kêu Cứu**  

---  

**Ngoại truyện:**  
*"Sau hai cuộc phiêu lưu 'nối liền thế giới' và 'cân não gà cáo', Nam tưởng mình được nghỉ ngơi. Nhưng số phận lại đẩy anh vào một thảm họa mang tên 'Dầu Loang' – khi đại dương bị bủa vây bởi những vết dầu đen ngòm. Lần này, không phải đếm gà hay cáo, mà là đếm từng mảng dầu độc hại trước khi chúng nuốt chửng sinh vật biển!"*  

---  

## **Mở Màn: Bức Tranh Tử Thần**  
Một bức ảnh vệ tinh hiện lên trước mặt Nam:  
- **Ma trận nhị phân** khổng lồ (250x250), nơi **"1"** là dầu loang, **"0"** là nước trong.  
- **Vết loang** là những mảng dầu liền kề nhau (ngang/dọc), như những lưỡi dao đen đang lan rộng.  

Nam nhăn mặt: *"Trời ơi, tưởng đi biển chơi, ai ngờ thành thám tử môi trường!"*  

---  

## **Chiến Thuật "BFS – Bám Dầu Truy Lùng"**  
Nam quyết định dùng chiến thuật BFS quen thuộc, nhưng lần này với quy mô **khủng khiếp** hơn:  

1. **Quét Từng Pixel:**  
   - Duyệt ma trận, phát hiện ô **"1"** chưa thăm (dầu chưa bị khai tử).  
   - Mỗi vết loang là một "vương quốc dầu" cần được đo đạc.  

2. **BFS – Bám Dầu Không Khoan Nhượng:**  
   - Từ ô dầu đầu tiên, lan ra 4 hướng (trái/phải/trên/dưới) để tính diện tích.  
   - Đánh dấu ô đã duyệt để tránh đếm trùng.  
   *"Kiểu như đổ màu trong Paint ấy, nhưng màu đen thì... đừng có đổ!"*  

3. **Thống Kê Tử Thần:**  
   - Ghi lại số lượng vết loang và kích thước từng vết.  
   - Sắp xếp theo thứ tự tăng dần để dễ báo cáo.  

---  

## **Kịch Tính Cao Trào: Trận Chiến Với Vết Loang Khổng Lồ**  
Khi Nam phát hiện một **vết dầu rộng 5 ô** (như trong dữ liệu mẫu), anh thốt lên:  
*"Ôi cái đống này mà lan ra nữa thì cá voi cũng thành cá chiên!"*  

Nhưng nguy hiểm hơn, có những **vết loang nhỏ 1 ô** lẻ loi – như những kẻ phá hoại âm thầm.  
*"Nhỏ nhưng mà nhiều, kiểu này tốn kém lắm đây!"*  

---  

## **Kết Thúc: Báo Cáo Cứu Rỗi**  
Sau khi "quét sạch" ma trận, Nam hoàn thành báo cáo:  
- **Tổng vết loang:** 4  
- **Chi tiết:**  
  - 1 vết **1 ô** (lẻ tẻ).  
  - 2 vết **3 ô** (đang bành trướng).  
  - 1 vết **5 ô** (đại dịch).  

*"May mà phát hiện sớm, không thì cả đại dương thành bể dầu thải!"* – Nam thở phào.  

---  

## **Bài Học Cuộc Sống:**  
*"Trong cuộc sống, những 'vết dầu loang' – từ tin đồn độc hại đến thói quen xấu – đều có thể lan rộng nếu không ngăn chặn kịp thời. Hãy là người 'duyệt' nhanh chóng, đừng để chúng trở thành thảm họa!"*  

---  

**Bonus Hậu Trường:**  
*"Sau thành công này, Nam được mời làm cố vấn cho tổ chức Greenpeace. Nhưng anh từ chối vì... sợ đuối nước. Thay vào đó, anh mở lớp dạy 'BFS cho người không biết bơi' trên TikTok, biến thảm họa thành trend #CứuBiểnKhôngCầnƯớt!"*  

**🔚 Kết Thúc Hành Trình:**  
Từ một anh chàng genz lười biếng, Nam đã trở thành "anh hùng giải thuật" – kết nối thế giới, cân bằng sinh thái, và cứu rỗi đại dương. Câu chuyện của anh chứng minh: **"Dù bạn là ai, chỉ cần có BFS (Brain-Flexibility-Skill), mọi vấn đề đều có thể 'duyệt' qua!"**  

*(P/S: Nếu bạn thấy đời mình đang loang lổ như ma trận dầu, hãy nhớ đến Nam và... chạy BFS ngay đi!)*

***Nguồn: Sưu tầm***