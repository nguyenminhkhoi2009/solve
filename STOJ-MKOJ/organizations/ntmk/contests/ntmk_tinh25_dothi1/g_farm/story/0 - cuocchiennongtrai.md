# **Chương 2: Cuộc Chiến Nông Trại – Gà Bay, Cáo Chạy!**  

---  

**Ngoại truyện:**  
*"Sau khi Nam giải cứu thành công thế giới Đồ Thị khỏi 'Đại Phân Tán', anh chàng nhận được tin nhắn khẩn từ một người bạn nông dân tên John: 'Cứu tao! Bọn cáo đang xâm chiếm nông trại, gà của tao sắp bị ăn hết!'. Thế là Nam, với danh hiệu 'Chiến Binh Duyệt', quyết định lên đường giúp đỡ. Nhưng lần này, không phải những con đường vô hình, mà là một trận chiến sinh tồn thực sự giữa GÀ và CÁO!"*  

---  

## **Mở Màn: Bình Minh Đẫm Máu**  
Nông trại của John rộng mênh mông, chia thành từng ô như bàn cờ. Mỗi ô chứa:  
- **"."**: Đất trống (chỉ có gió và nắng).  
- **"#"**: Hàng rào (chắn ngang như bức tường thành).  
- **"c"**: Gà (những chiến binh mỏ nhọn).  
- **"f"**: Cáo (lũ quỷ đói luôn rình rập).  

Nam đứng trước cổng trại, nhìn đống bản đồ rối tung mà John đưa, thở dài:  
*"Ôi giời ơi, lại phải đi từng chuồng, đếm từng con nữa à? Thôi được, coi như tập thể dục sáng!"*  

---  

## **Chiến Thuật "BFS – Bắt Fải Sống"**  
Nam quyết định áp dụng chiến thuật từng giúp anh thống nhất Đồ Thị:  

1. **Quét Từng Chuồng:**  
   - Dùng **BFS** (Bước-Fàm-Săn) để thăm từng ô liên thông (có thể đi ngang/dọc, không vướng hàng rào).  
   - Mỗi chuồng là một "vương quốc" riêng, nơi gà và cáo phải tự giải quyết nội bộ.  

2. **Luật Sinh Tồn:**  
   - **Gà > Cáo:** Gà dùng mỏ tiêu diệt hết cáo, số gà còn lại = gà - cáo.  
   - **Cáo ≥ Gà:** Cáo ăn sạch gà, số cáo còn lại = cáo - gà.  
   *"Kiểu như vote á, bên nào đông hơn thì bên kia bay màu!"* – Nam cười híp mắt.  

3. **Tổng Hợp Báo Cáo:**  
   - Sau khi "dọn dẹp" hết chuồng, thống kê tổng số gà và cáo còn sót lại.  

---  

## **Kịch Tính Cao Trào: Trận Chiến Trong Chuồng Số 7**  
Khi Nam đến chuồng nằm giữa trại (tọa độ 7,4), anh phát hiện một **ổ dịch hỗn loạn**:  
- **3 con cáo ("f")** đang gầm gừ.  
- **1 con gà ("c")** co ro trong góc.  

*"Chết cha, con gà này không thoát nổi rồi!"* – Nam lắc đầu, nhưng vẫn ghi vào sổ:  
- **Kết quả:** Cáo thắng, gà bay màu.  

Tuy nhiên, ở chuồng bên cạnh (tọa độ 2,3), **5 con gà** đã hợp sức đuổi sạch **2 con cáo**.  
*"Gà nhà người ta khác gì!"* – Nam gật gù.  

---  

## **Kết Thúc: Bình Minh Mới**  
Sau một đêm "làm việc cật lực", Nam hoàn thành báo cáo:  
- **Cáo còn sống:** 1 (lẻ loi như kẻ trộm).  
- **Gà sống sót:** 3 (đủ để John còn trứng ăn sáng).  

John ôm mặt khóc: *"Tưởng mất hết rồi, may có cậu!"*  
Nam phì cười: *"Lần sau nhớ xây hàng rào cao hơn, không lại thành 'Cáo Ăn Gà Mùa 2' đấy!"*  

---  

## **Bài Học Cuộc Sống:**  
*"Trong cuộc sống, đôi khi bạn phải đối mặt với những 'con cáo' – kẻ thù luôn rình rập. Nhưng nếu biết đoàn kết (và đông hơn), bạn sẽ sống sót. Còn nếu lẻ loi, hãy học cách chạy nhanh như gà!"*  

---  

**Bonus Drama:**  
*"Tin sốt: Sau trận chiến, một con cáo sống sót đã lập group 'Cáo Đơn Độc' để kêu gọi phản đối bạo lực gà. Trong khi đó, bầy gà chiến thắng mở tiệc 'Gà Quyền' với hashtag #ChúngTôiĐôngHơn. Liệu mâu thuẫn này có dẫn đến 'Đại Chiến Nông Trại Phần 2'? Hãy đón xem Chương 3: 'Vết Dầu Loang – Khi Những Con Số Biết Nói'!"*  

**🔜 Chương 3 sẽ là:**  
Một thảm họa môi trường khi dầu loang khắp đại dương! Nam phải dùng BFS để đếm từng vết dầu và cứu lấy sinh vật biển. Liệu anh có kịp ngăn "kẻ hủy diệt" trước khi quá muộn?  

*(P/S: Thuật toán BFS lần này sẽ phải đếm cả kích thước vết loang – chuẩn bị tinh thần đi, Nam ơi!)* 🛢️🔥

***Nguồn: Sưu tầm***