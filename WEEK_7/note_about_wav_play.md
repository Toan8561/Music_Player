##Note about wav player

Hiện tại thư chỉ có một thư viện C mà tui tìm thấy có thể chơi được nhạc đó là "Winmm.lib". Chỉ chạy được wav thôi.

Thư viện trên đã không được microsoft hỗ trợ nữa nên hiện tại chỉ có 2 giải pháp:

 + Thực hiện makefile với thư mục lib để cho compiler liên kết lại rồi thực hiện cái này về sau trong nhánh main sẽ làm.

 + Hiện tại thì có thể thực hiện lên gcc/g++ {file}.c/c++ -o {file ngõ ra} -lWinmm 

   Giải pháp này là để cho window tự kiếm các thư viện thay thế rồi compil luôn.