#include <mbed.h>

BufferedSerial pc(USBTX, USBRX, 115200); //シリアル通信の設定

DigitalOut led(LED1);//LEDの設定
int main()
{
     char receivedChar;
    while(1)
    {
        if (pc.readable())// シリアルデータが受信可能か確認
         {  
            pc.read(&receivedChar, 1); // 1バイトのデータを受信
            
            if(receivedChar == '0')
            {
              led=1;//LEDを点灯
            } 
            else if(receivedChar == '1')
            {
              led=0;//LEDを消灯
            }
         }
         //else led=0;//何も届かないときは消灯
    }

}