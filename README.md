## Khái niệm  

Đệ quy là một kỹ thuật lập trình mà trong đó một hàm gọi lại chính nó để giải quyết bài toán.  

Kỹ thuật này dùng để giải quyết những bài toán mà có thể được phân ra thành nhiều bài toán tương tự nhưng với kích thước nhỏ hơn.  

Ưu điểm của kỹ thuật đệ quy là có thể giải quyết bài toán một cách ngắn ngọn và *tao nhã*. Hạn chế của nó là sử dụng nhiều bộ nhớ và khi xử lý, cần cẩn thận để tránh vòng lặp vô tận.  

Cấu trúc của hàm đệ quy có thể được mô tả như sau:

**Trường hợp cơ sở**: Hàm đệ quy phải có ít nhất một trường hợp cơ sở, là trường hợp đơn giản nhất của bài toán mà có thể được giải quyết trực tiếp, không cần đệ quy thêm nữa. Đây có thể xem là điểm dừng của đệ quy để tránh đi vào vòng lặp vô tận.  

**Các bước đệ quy**: Trong các bước này, hàm đệ quy gọi lại chính nó với tham số *nhỏ hơn*, hoặc đôi khi *lớn hơn*, nói chung là *đơn giản hơn*, để dần dần đạt đến trường hơp cơ sở.  

```
void recursive_function(tham_số_n)
{
    // Trường hợp cơ sở
    if (điều_kiện_trường_hợp_cơ_sở)
        return giá_trị_của_trường_hợp_cơ_sở;
    
    // Đệ quy
    result = recursive_function(n - 1) // hoặc n nào đó nhỏ hơn
    các_lệnh_xử_lý_nếu_có;      
    return result;
}
```

## Bài tập  

Dưới đây là một số bài tập *luyện ngón* với đệ quy:  

## Giai thừa  

**Yêu cầu**  
Viết hàm tính n!  

**Input**  
n = 6  

**Output**  
6! = 720  


## Fibonacci

Viết hàm tính giá trị của số Fibonacci thứ *n*.  
$$F_n = F_{n - 1} + F_{n - 2}$$  

**Input**  
n = 10  

**Ouput**  
Số Fibonacci thứ 10 là 55  


## Dân số  

Viết hàm cho nhập vào một năm và tính dân số của Việt Nam trong năm đó. Giả sử tỉ lệ tăng dân hằng năm là 1.00%.    

**Input**
Năm 2050  

**Output**
Dân số năm 2050 dự kiến là 131,315,181  

### Ackermann

**Yêu cầu**  
Viết chương trình biểu diễn hàm Ackermann theo kỹ thuật đệ quy và cho biết số lần gọi hàm đệ quy.  
  
A(m, n) =  
= n + 1 if m = 0  
= A(m - 1, 1) if m > 0, n = 0  
= A(m - 1, A(m, n - 1)) if m > 0, n > 0  

**Input**  
m = 3  
n = 6  

**Output**  
509, số lần gọi hàm đệ quy là 172233    


### Tháp Hà Nội

**Yêu cầu**  
Đây là trò chơi gồm 3 cột (trụ) và các đĩa có đường kính khác nhau. Trò chơi còn có một số tên gọi khác là Benares Temple, Tower of Brahma, Lucas' Tower).  

Ban đầu, tất cả đĩa được xếp chồng tại cùng một cột, theo thứ tự đường kính nhỏ nhất nằm trên cùng và lớn nhất nằm dưới cùng.  
  
Yêu cầu của trò chơi là di chuyển toàn bộ các đĩa từ cột ban đầu sang cột đích theo các quy luật sau:   

1. Mỗi lần chỉ di chuyển một đĩa.  
2. Trong mỗi lần di chuyển đĩa, chỉ được di chuyển đĩa nằm trên cùng của một cột và đặt sang cột khác hoặc cột trống.  
3. Không được đặt đĩa lớn lên trên đĩa nhỏ hơn.

Viết chương trình hướng dẫn cách di chuyển các đĩa từ cột đầu sang cột đích.  

**Input**  
n: là số lượng đĩa  
s: cột ban đầu  
t: cột đích  

**Output**  
Các dòng hướng dẫn di chuyển đĩa theo dạng:  
Di chuyển đĩa x từ cột a sang cột b.  
Trong đó: x là số thứ tự của đĩa 1..n  
            a, b = 1..3 là số thứ tự của cột.  

### Tìm kiếm nhị phân  

**Yêu cầu**  
Viết hàm tìm kiếm giá trị k trong mảng a cho trước theo thuật toán tìm kiếm nhị phân và kỹ thuật đệ quy.  





