# Chapter 03 -- 基本資料型態 #

* [3.1 變數與常數](#31-變數與常數)
* [3.2 基本資料型態](#32-基本資料型態)
* [3.3 查詢常數、變數或資料型態所占位元組](#33-查詢常數變數或資料型態所占位元組)
* [3.4 資料型態的轉換](#34-資料型態的轉換)

## 3.1 變數與常數 ##

## 3.2 基本資料型態 ##

* C Primitive Data Types

| Data Types | 32-bits CPU | 64-bits CPU |
| --- | --- | --- |
|  | Size(bytes) | Size(bytes) |
| char | 1 | 1 |
| short | 2 | 2 |
| int | 4 | 4 |
| long | 4 | 8 |
| float | 4 | 4 |
| double | 8 | 8 |

* #include <stdint.h>

| Typedef | Data Types | 64-bits CPU |
| --- | --- | --- |
|  |  | Size(bytes) |
| uint8_t | usigned char | 1 |
| uint16_t | unsigned short | 2 |
| uint32_t | unsigned int | 4 |
| uint64_t | unsigned long | 8 |

* 溢位(overflow)

* 跳脫序列(Escape sequence) = 跳脫字元(Escape character) + 控制碼
  * \a : 警告音
  * \b : 倒退一格
  * \n : 換行
  * \r : 歸位
  * \0 : 字串結束字元
  * \t : 跳格
  * \\\ : 反斜線
  * \' : 單引號
  * \" : 雙引號

## 3.3 查詢常數、變數或資料型態所占位元組 ##

* sizeof(變數 or 常數 or 資料型態名稱)

## 3.4 資料型態的轉換 ##

* 將 float 轉成 int ，compiler 會直接將小數刪除。
