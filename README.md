シリアル通信のテスト lを押すとLEDが光る 
1.Windowsのとき
Serialtestをplatform.ioでアップロード　serialtest.pyを実行させる COM番号を適宜変える(vscodeのシリアルポートのとことかtera termで確認)
2.Ubuntuのとき(Linux)
Serialtestをplatform.ioでアップロード serialtest.pyの6行目を
'''cpp
ser = serial.Serial('/dev/ttyACM0', 115200)  
'''
に変更
ターミナルで
'''
sudo chmod 666 /dev/ttyACM0
'''
を行い、権限を付与(なんか一時的なやつで再接続で切れたり、セキュリティ上で問題ありそう...良い方法を先輩から教えてもらう てかrogilinkflexの使い方知る)

