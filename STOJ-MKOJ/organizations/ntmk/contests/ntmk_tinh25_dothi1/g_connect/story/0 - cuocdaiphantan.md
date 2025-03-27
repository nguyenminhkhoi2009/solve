# **Chương 1: Cuộc Đại Phân Tán - Mảnh Ghép Thất Lạc**  

---

## **Ngoại truyện:**  
*"Trong một vũ trụ song song nơi mọi thứ đều được kết nối bằng những sợi dây vô hình, có một thế giới tên là Đồ Thị. Ở đó, các thành phố (đỉnh) được liên kết bởi những con đường (cạnh), tạo thành những vùng đất riêng biệt gọi là 'Thành Phần Liên Thông'. Nhưng một ngày, một thế lực bí ẩn khiến các con đường biến mất, chia cắt thế giới thành những mảnh ghép rời rạc. Nhiệm vụ của các chiến binh 'Duyệt' là khám phá và tái thiết lại những vùng đất này!"*  

---  

## **Mở đầu:**  
Thành phố **Số 1** vốn là một nơi nhộn nhịp, nằm giữa mạng lưới giao thông chằng chịt. Nhưng sáng nay, khi **Nam** - một chàng trai genz lười biếng nhưng thông minh - thức dậy, anh ta phát hiện ra mọi thứ đã đảo lộn.  

*"Clgt? Sao đường về nhà ông ngoại lại biến mất rồi?"* - Nam nhìn chằm chằm vào tấm bản đồ cũ kỹ, nơi chỉ còn lại những dấu chấm rời rạc.  

## **Vấn đề:**  
Một trận **"Đại Phân Tán"** đã xảy ra, chia cắt toàn bộ Đồ Thị thành những vùng đất cô lập. Nhiệm vụ của Nam là tìm ra tất cả các **"thành phần liên thông"** - những nhóm thành phố vẫn còn kết nối với nhau - và liệt kê chúng theo thứ tự từ điển.  

*"Kiểu như phải đi từng ngõ, gõ từng nhà xem ai còn sống sót sau trận chia cắt này á?"* - Nam tự nhủ, mặt lộ vẻ bối rối.  

---  

## **Hành trình khám phá:**  

1. **Chuẩn bị:**  
   Nam lôi từ trong balo ra một cuốn sổ tay ghi chép:  
   - **n**: Tổng số thành phố (từ 1 đến 100.000).  
   - **m**: Tổng số con đường (lên tới 1.000.000).  
   *"Chời ơi, nhiều vãi! Nhưng không sao, tao có bí kíp 'BFS' - 'Bánh-Fở-Sữa' để xử lý!"*  

2. **Chiến thuật "Bánh-Fở-Sữa":**  
   - **Bước 1:** Chọn một thành phố chưa được thăm (ví dụ: thành phố 1).  
   - **Bước 2:** Từ đó, phát sóng "tín hiệu bạn bè" (queue) để mời các thành phố kết nối cùng tham gia nhóm.  
   - **Bước 3:** Đánh dấu những thành phố đã ghé thăm để tránh bị trùng lặp.  

   *"Kiểu như đi rủ rê từng đứa bạn trong group chat ấy mà. Đứa nào chưa seen thì add vô danh sách!"*  

3. **Chiến dịch "Dọn dẹp":**  
   Nam lần lượt áp dụng chiến thuật trên cho tất cả các thành phố. Sau mỗi nhóm được tìm thấy, anh ta sắp xếp tên thành phố theo thứ tự từ điển (từ nhỏ đến lớn) để đảm bảo tính thẩm mỹ.  

---  

## **Kịch tính cao trào:**  
Khi Nam đang duyệt đến thành phố **8**, anh ta phát hiện ra một **ổ dịch liên thông khổng lồ** gồm các thành phố 8, 9, 10, 11, 12.  

*"Úi giời ơi, bọn này sống quây quần như hội đồng hương ấy nhỉ?"* - Nam cười khẩy, ghi chép lại vào sổ.  

---  

## **Kết thúc**  
Sau một ngày dài "điều tra", Nam đã liệt kê thành công tất cả các thành phần liên thông:  

- **Nhóm 1:** 1, 4, 5 *(trio thân thiết)*  
- **Nhóm 2:** 2, 3, 6, 7 *(hội anh em cùng mê game)*  
- **Nhóm 3:** 8, 9, 10, 11, 12 *(đại gia đình multigenerational)*  

*"Phew! Xong xuôi rồi. Giờ thì thế giới lại có thể kết nối, và tao cũng kiếm được vài chiến hữu mới!"* - Nam tự hào nhìn vào danh sách, mỉm cười.  

## **Bài học cuộc sống:**  
*"Trong cuộc sống, đôi khi mọi thứ bị chia cắt, nhưng chỉ cần kiên trì 'duyệt' từng người, bạn sẽ tìm lại được những mối liên kết đã mất. Và nhớ, hãy sắp xếp chúng theo thứ tự để đỡ rối não!"*  

---  

## **Bonus:**  
*"Tin sốt: Sau khi Nam hoàn thành nhiệm vụ, dân tình đồn rằng anh chàng này đã bí mật tạo một group chat 'Liên Thông Vũ Trụ' để kết nối mọi người. Nhưng khi admin group là thành phố 11 add cả cáo (fox) vào, mọi thứ đã thành drama 'gà vs cáo' - chuẩn bị cho cuộc chiến ở Chương 2!"*  

**Hẹn gặp lại ở:  
Chương 2 - "Cuộc Chiến Nông Trại: Gà Bay, Cáo Chạy!"** 🐔🦊🔥

***Nguồn: Sưu tầm***