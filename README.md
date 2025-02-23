# Arduino-based 16×16 LED Matrix System for Large Character Display with Scrolling Effects
## 自製 16×16 大型 LED 矩陣 與中文跑馬燈效果

## 介紹 Introduction

這個專案目的是從零開始自製大型 LED 矩陣，包含了將 LED 燈泡串接為 LED 矩陣、使用 MAX7219 驅動晶片並自製擴展板連接至 LED 矩陣，以及將多個 MAX7219 模組串接至一個 Arduino Uno 板，並且透過程式驅動，顯示出跑馬燈的效果。

這個 repository 的內容包含了精簡版和完整版；
在 readme 中呈現的是精簡版，適合看到電路就能在萬能板上重製的朋友，直接下載電路圖及 Arduino 程式就可使用。  
完整版包含了四份分開的教材 pdf，適合完全沒有程式語言或電路學基礎的朋友，從零開始手把手帶你製作出成果；

This project aims to build a large LED matrix from scratch, including connecting LED bulbs into a matrix, using the MAX7219 driver chip, creating an expansion board, and connecting multiple MAX7219 modules to an Arduino Uno board to display scrolling effects through programming. 

This GitHub repository offers both a simplified version and a full version: the full version is for beginners with no prior programming or circuit knowledge, providing a step-by-step guide to achieve the results, while the quick version is for those familiar with circuits and Arduino, offering the circuit diagram and code for immediate use.

This is the final effect. The character scrolls from right to left.
![final effect](./img_readme/final_show.jpg)

## 系統概述 System Overview

![system module](./img_readme/system_modules.jpg)
這個 16x16 LED 矩陣系統由 4 個 8x8 LED 模組組成，
每個 LED 模組由 1 個 MAX7219 驅動晶片控制，
再將每 2 個 LED 模組串接為一個 8x16 的顯示模組，(共 2 個 8x16 的顯示模組)，作為跑馬燈顯示的基本單位。
透過 Arduino Uno 控制器來控制 2 個顯示模組，顯示出中文跑馬燈效果。

This 16x16 LED matrix system consists of four 8x8 LED modules, with each module controlled by a MAX7219 driver chip. 
Two LED modules are connected to form an 8x16 display module, and two 8x16 display modules are used as the basic unit for the scrolling display. 
The Arduino Uno controller is used to control two display modules to display Chinese scrolling effects.



## 材料 Materials

|     | 項目                   | 數量                |
| --- | ---------------------- | ------------------- |
| 1.  | 白膠、熱熔膠           |                     |
| 2.  | 烙鐵                   |                     |
| 3.  | 焊錫                   |                     |
| 4.  | 斜口鉗、剝線鉗、尖嘴鉗 |                     |
| 5.  | 木板                   | 1 片  (?? 大小?)              |
| 6.  | 單芯線                 | (建議至少 2 種顏色) |
| 7.  | LED燈泡 (我們用的是 10mm)         | 256個               |
| 8.  | 杜邦線                 |                     |
| 9.  | 三用電表               | 1                   |
| 10. | 萬用板                 | 4                   |
| 11. | MAX7219 驅動晶片       | 4                   |

## 製作流程 
### 1. LED 矩陣製作 LED Matrix Production
詳細的製作過程，可以看: [用 LED 燈泡自製 LED 顯示矩陣的手把手教學by楊禮安 Li-An Yang_Craft your 16x16 LED with MAX7219 driver](Li-An%20Yang_Craft%20your%2016x16%20LED%20with%20MAX7219%20driver.pdf)

(這裡要請禮安幫忙, 用一個螢幕的篇輻，講解 16x16 的 LED 矩陣如何製作, 並且附上 8x8 LED電路圖)

### 2. MAX7219 擴展板製作 MAX7219 Breakout Board Production
詳細的製作過程，可以看: [MAX7219
晶片與 LED 矩陣分線板電路實現by陳冠羽 Guan-Yu Chen_MAX7219_breakout_board](Guan-Yu%20Chen_MAX7219_breakout_board.pdf)

(這裡要請冠羽幫忙, 用一個螢幕的篇輻，講解 MAX7219 擴展板如何製作, 並且附上 MAX7219 PIN 腳圖)

### 3. LED 模組串接 LED Module Connection
詳細的製作過程，可以看: [用 LED 燈泡自製 LED 顯示矩陣的手把手教學by楊禮安 Li-An Yang_Craft your 16x16 LED with MAX7219 driver.pdf](Li-An%20Yang_Craft%20your%2016x16%20LED%20with%20MAX7219%20driver.pdf)
(這裡要請禮安幫忙, 用一個螢幕的篇輻，講解如何組裝 LED 矩陣)

### 4. 跑馬燈程式碼 Code
請在 Arduino IDE 中安裝程式庫 LedControl

詳細流程可參考：[米羅科技有限公司提供的教材](https://shop.mirotek.com.tw/tutorial/arduino-max7219)

針對 MAX7219 串連成的顯示模組如何用，可看: [使用MAX7219控制模組進行程式開發 by 王儷蓁 Li-Jen Wang_LED control by MAX7219](Li-Jen%20Wang_LED%20control%20by%20MAX7219.pdf)

詳細的 LED 跑馬燈原理，可以看: [從認識Arduino板基礎到用Max7219做出16＊16跑馬燈程式碼 by 彭歆惠 (Peng_Shin Huei 16x16 LED scrolling effect from scratch.pdf)](Peng_Shin%20Huei%2016x16%20LED%20scrolling%20effect%20from%20scratch.pdf)

(這裡要請歆惠幫忙, 用一個螢幕的篇輻，講解最終的那個程式碼大概的流程)

最後的程式碼，請見  [code/final_scrolling_Da.ino]
(這裡要請儷蓁幫忙把最後一版跑馬燈的大字程式碼 .ino 檔上傳)



## 作者 Credits
楊禮安 慈濟大學醫學工程系

陳冠羽 慈濟大學醫學工程系

彭歆惠 慈濟大學醫學工程系

王儷蓁 慈濟大學醫學工程系

楊惠雯 慈濟大學醫學工程系

## 相關參考連結


## 版權聲明 Copyright

本專案的程式碼與文件皆以 [MIT License](https://opensource.org/licenses/MIT) 授權發布，您可以自由使用、修改與分享，但請保留原始授權聲明。  

專案中的圖片、電路設計及其他非程式碼內容，除非另有標示，均屬作者所有，未經許可不得用於商業用途。  

若您使用本專案的內容，請適當標註來源，並歡迎提供改進意見或回饋！

This project’s code and documentation are released under the [MIT License](https://opensource.org/licenses/MIT), allowing free use, modification, and distribution, provided that the original license notice is retained.  

Unless otherwise stated, images, circuit designs, and other non-code content in this project are the property of the author and may not be used for commercial purposes without permission.  

If you use any part of this project, please give proper attribution. Feedback and contributions are always welcome!

