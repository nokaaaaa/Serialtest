# シリアル通信テスト: LED制御

このプロジェクトは、`L`キーを押すと、NucleoボードのLEDが点灯するシリアル通信のテストです。以下の手順に従って、WindowsおよびUbuntuでテストを実行できます。

## 必要なソフトウェア
- PlatformIO (VSCode)
- Python 3.x
- `pyserial`ライブラリ
- (オプション) Tera Term (Windows用)

## 概要

1. **Windows環境でのセットアップ**
2. **Ubuntu (Linux) 環境でのセットアップ**

---

## 1. Windowsでのセットアップ

### 手順

1. **PlatformIOでプロジェクトをアップロード**

   PlatformIOを使って、`Serialtest`プロジェクトをNucleoボードにアップロードします。

2. **COMポート番号の確認**
   - VSCodeの下部に表示されるシリアルポートの情報、またはTera TermでCOMポート番号を確認します。

3. **`serialtest.py`の実行**
   Pythonスクリプト`serialtest.py`を実行し、COMポート番号を適切に設定します。

   ```python
   ser = serial.Serial('COM3', 115200)  # COM番号を適宜変更
