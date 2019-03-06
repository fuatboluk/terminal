# Terminal

  Terminal, GTK-3.0 kullanılarak tasarlanmış bir pencere üzerine eklenen VTE sanal terminal emulatörüdür.

  Standart olarak sistemin kendi pencere teması kullanır. Terminal renk şeması, siyah(%90 opak) arkaplan üzerine beyaz metindir. Tasarlanırken oldukça hafif olması ve sistemi kasmadan terminal ihtiyacını karşılaması amaçlanmıştır.
  
  Aşağıda ekran görüntüsünü görebilirsiniz.
  
![Alt text](https://gitlab.com/fuxproject/terminal/raw/master/terminal.png "Terminal Ekran Görüntüsü")

# Terminal'in özellikleri:

*  Özel klavye kısayolları.
*  Oturum açan kullanıcıya göre değişken başlık.
*  Sürükle-Bırak ile dizin, dosya konumlarını terminale aktarma.
*  Fare ile seçilerek kopyalanan metni önbelleğe alır. Metni ister terminale isterseniz herhangi bir belgeye yapıştırabilirsiniz.
*  Standart bir terminaldir ve diğer tüm terminallerde olan özellikleri içerir.

# Klavye Kısayolları:

| Kombinasyon | Açıklama |
| --- | --- |
|  Ctrl + Shift + T | Terminal Aç |
|  Ctrl + Shift + C | Kopyala |
|  Ctrl + Shift + V | Yapıştır |
|  Ctrl + Shift + Q | Terminali Kapat |
|  Ctrl + Shift + R | Geçmiş Komutlardan Tamamla (Arama) |
|  Ctrl + Shift + Up | Çıktıyı Yukarı Kaydır (Satır) |
|  Ctrl + Shift + DOWN | Çıktıyı Aşağı Kaydır (Satır) |
|  Ctrl + Shift + PgUP | Çıktıyı Yukarı Kaydır (Sayfa) |
|  Ctrl + Shift + PgDn | Çıktıyı Aşağı Kaydır (Sayfa) |
|  Ctrl + Shift + HOME | En Başa Git |
|  Ctrl + Shift + End | En Sona Git |
  
# Detaylı açıklama:  

  Fux İşletim Sistemi'nin standart terminalidir.
  
  Terminal Genel Kamu Lisansı ile birlikte dağıtılan özgür bir yazılımdır.
  
 # Yazılım Gereksinimleri
 
 * gtk3-devel
 * vte291-devel
 * coreutils
 * bash
  
 # Derleme ve Çalıştırma
 
 * Kaynak dizin içerisinde `make` komutunu koşun.
 * Derleme tamamlanınca bulunduğunuz dizinde terminal adı ile bir ikili dosya oluşacaktır. Bu dosyayı `/usr/bin` dizini içine kopyalayın.
 * Uygulamalar menüsüne eklemek için `terminal.desktop` dosyasını `/usr/share/applications` dizinine kopyalayın.