# Chapter 04 -- 格式化的輸入與輸出 #

* [4.1 輸出函數 printf()](#41-輸出函數-printf)
* [4.2 輸入函數 scanf()](#42-輸入函數-scanf)
* [4.3 使用 scanf() 函數應注意的事項](#43-使用-scanf-函數應注意的事項)
* [4.4 輸出、輸入字元的函數](#44-輸出輸入字元的函數)

## 4.1 輸出函數 printf() ##

* printf type

| Data Types | format specifier |
| --- | --- |
| char | %c |
| string | %s |
| dec | %d |
| unsigned oct | %o |
| unsigned dec | %u |
| unsigned hex | %x |
| long | %ld |
| float | %f |

* printf with modifiers

| modifiers | func | example |
| --- | --- | --- |
| 數字 | 3個欄位寬度 | %3d |
| 數字 | 6個欄位寬度，小數點佔2個 | %6.2f |
| - | 靠左對齊 | %-3d |
| + | 將數值的正負號顯示出來 | %+3d |
| 空白 | 數值為正時，留一格空白；為負時，顯示負號 | % 6f |
| 0 | 將固定欄位長度的數值前空白處填上0。(與負號同時使用時，此功能無效) | % 6f |

## 4.2 輸入函數 scanf() ##

* scanf("%d", &num);

  * scanf 函數根據變數 num 的位址，將輸入的整數寫道 num 裡。

* scanf("%d %d", &num1, &num2);

  * 格式字串以空白建來分隔，在輸入資料時，可以用 enter 鍵、tab 鍵、空白鍵做為區隔。

* scanf("%d,%d", &num1, &num2);

  * 格式字串以逗號來分隔，在輸入資料時必須以逗號分開資料內容。

* scanf(" %c", &ch);

  * 在 %c 格式碼之前加上一個空白，此時 scanf() 函數會跳過不可列印字元。

* C 語言的字串必須以跳脫序列 \0 做結尾，用以識別字串到此結束。

* 亦可使用 gets() 函數來輸入字串，因為它允許字串裡有空白字元，而且語法比 scanf() 更簡潔。

## 4.3 使用 scanf() 函數應注意的事項 ##

* 輸入緩衝區(buffer)

* 在 Dos 和 Windows 中，按下 enter 後，將被解釋為歸位(carriage return)與換行(line feed)。

* 輸入結束後，按下 enter ，scanf() 將接收到歸位字元，便會判定輸入完畢，換行字元將留在 buffer 中，下一次 scanf() 讀取字元時，跳過不可列印字元即可，亦即在 %c 前面加一個空白。
  * scanf(" %c", &ch);

* 清除 buffer 的資料

  * fflush(stdin) ，在 gcc 下無效。

## 4.4 輸出、輸入字元的函數 ##

* get

  * getchar() 需要按下 enter。

  * gets() 需要按下 enter。

  * getch() 不須按下 enter ，字元便會被接收。字元不會回應在螢幕上。

  * getche() 不須按下 enter ，字元便會被接收。e 代表 echo ，字元被接收後，將立刻回應到螢幕上。

* put

  * putchar();

  * puts();
