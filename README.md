# シリアル通信テスト: LED制御

このプロジェクトは、`L`キーを押すとNucleoボードのLEDが点灯するシリアル通信のテストです。以下の手順に従って、WindowsおよびUbuntuでテストを実行できます。

## 必要なソフトウェア
- PlatformIO (VSCode)
- Python 3.x
- `pyserial`ライブラリ
- (オプション) Tera Term (Windows用)

## 概要

1. **Windows環境でのセットアップ**
2. **Ubuntu (Linux)環境でのセットアップ**

---

## 1. Windowsでのセットアップ

### 手順

1. **PlatformIOでプロジェクトをアップロード**  
   PlatformIOを使って、`Serialtest`プロジェクトをNucleoボードにアップロードします。

2. **COMポート番号の確認**  
   - VSCodeの下部に表示されるシリアルポート情報、またはTera TermでCOMポート番号を確認します。

3. **`serialtest.py`の実行**  
   Pythonスクリプト`serialtest.py`を実行し、COMポート番号を適切に設定します。

   ```python
   ser = serial.Serial('COM3', 115200)  # COM番号を適宜変更

## 2. Linuxでのセットアップ

### 手順

1. **PlatformIOでプロジェクトをアップロード**

   PlatformIOを使って、SerialtestプロジェクトをNucleoボードにアップロードします。

2. **Pythonファイルの変更**
   - erialtest.pyの6行目を次のように変更
python
   ser = serial.Serial('/dev/ttyACM0', 115200)

3. **シリアポートの確認**
   nucleoを接続してるときとしてないときで変わるやつが多分/dev/ttyACM0になってると思います。
   
terminal
   ls /dev/tty*

4. **一時的なシリアルポートの権限を付与**
   これで一時的に権限を付与できます。ただし接続時毎回やんなきゃだめです
terminal
   sudo chmod 666 /dev/ttyACM0

4. **永続的なシリアルポートの権限を付与**
　　/lib/udev/rules.d/50-udev-default.rules　について次のように変更する
   
rules
  （WAS）
   KERNEL=="tty[A-Z]*[0-9]|pppox[0-9]*|ircomm[0-9]*|noz[0-9]*|rfcomm[0-9]*", GROUP="dialout"
  （IS） 
   KERNEL=="tty[A-Z]*[0-9]|pppox[0-9]*|ircomm[0-9]*|noz[0-9]*|rfcomm[0-9]*", GROUP="dialout", MODE="0666"　これを一つのREADME.mdとしてきれいにして
