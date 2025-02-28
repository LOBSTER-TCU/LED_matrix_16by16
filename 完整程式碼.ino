#include <LedControl.h>

int DIN = 12;  
int CS = 11;   
int CLK = 10; 

// 初始化 LedControl 物件，指定 DIN, CLK, CS 和 MAX7219 的數量
LedControl lc = LedControl(DIN, CLK, CS, 2);

// 16行的字形
byte daCharacter[16] = {
  B00000000,  
  B01000010,  
  B00110011,  
  B00000010,  
  B01110010, 
  B10000011, 
  B10000110, 
  B10001000,  
  B10110010, 
  B10000011,  
  B11100010,  
  B00000010, 
  B00000011, 
  B00010110,  
  B01100000, 
  B00000000   
};

void setup() {
  // 啟動 LED 模組並設定亮度
  for (int i = 0; i < 2; i++) {  // 總共有 2 個 MAX
    lc.shutdown(i, false);  // 啟動 LED 模組，開啟
    lc.setIntensity(i, 8);   // 設定亮度
    lc.clearDisplay(i);      // 清空顯示
  }
}

void loop() {
  // 從右到左滾動字形，從 offset 15 到 -16
  for (int offset = 15; offset >= -15; offset--) {  // 讓字形一行一行地往左移動
    lc.clearDisplay(0);  // 清空第一個
    lc.clearDisplay(1);  // 清空第二個

    // 顯示兩個板子的字形，從右到左滾動
    for (int row = 0; row < 8; row++) {  // 逐行顯示8行
      // 第一個板子顯示 16x8 字形的左半部分
      if (offset + row < 16 && offset + row >= 0) {  // 確保偏移量在有效範圍內
        lc.setRow(0, row, daCharacter[offset + row]);  // 在第一個板子上顯示對應行
      }

      // 第二個板子顯示 16x8 字形的右半部分
      if (offset + row + 8 < 16 && offset + row + 8 >= 0) {  // 確保偏移量在有效範圍內
        lc.setRow(1, row, daCharacter[offset + row + 8]);  // 在第二個板子上顯示對應行
      }
    }

    delay(200);  // 控制滾動速度，這裡是 200 毫秒
  }

  // 完成滾動後，清空顯示，準備重新顯示字形
  lc.clearDisplay(0);  // 清空第一個板子的顯示
  lc.clearDisplay(1);  // 清空第二個板子的顯示

  // 讓顯示清空一段時間，然後重新開始滾動
  delay(1000);  // 等待 1 秒鐘，讓顯示停頓一下，然後重新開始滾動
}
