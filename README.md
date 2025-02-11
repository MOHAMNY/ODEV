# 🕒 Epoch Time Kullanarak Zaman Farkı Hesaplama Programı

## 📌 Genel Bakış  
Bu proje, kullanıcının girdiği iki tarih ve saat arasındaki farkı *epoch time* kullanarak hesaplayan bir *C programıdır*.  
Program, iki tarih arasındaki farkı *saniye* ve *dakika* cinsinden hesaplayarak ekrana yazdırır.

---

## 🛠 Kullanılan Teknolojiler  
- *Programlama Dili:* C  
- *Kütüphaneler:*  
  - stdio.h (Veri girişi ve çıkışı için)  
  - time.h (Zaman ve tarih işlemleri için)  

---

## 🚀 Kurulum ve Çalıştırma  

### 🔹 1️⃣ Projeyi İndirme  
Kodları manuel olarak indirebilir veya aşağıdaki *Git* komutu ile projeyi klonlayabilirsiniz:  

```bash
git clone https://github.com/kullaniciAdi/zaman-farki.git
cd zaman-farki

```
### 🔹 2️⃣ Derleme ve Çalıştırma

GCC Derleyicisi kullanarak kodu derleyip çalıştırabilirsiniz:
```
gcc zaman_farki.c -o zaman_farki
./zaman_farki
```
### 🔹 3️⃣ Veri Girişi

Program çalıştırıldığında aşağıdaki formatta tarih ve saat bilgisi girmeniz istenir:

Birinci tarihi giriniz (GG AA YYYY SS DD SS): 10 02 2024 12 30 00  
İkinci tarihi giriniz (GG AA YYYY SS DD SS): 12 02 2024 15 45 00

## 📸 Örnek Çıktı

Birinci tarih Epoch Zamanı: 1707564600  
İkinci tarih Epoch Zamanı: 1707743100  

Zaman Farkı: 17850 saniye (297.50 dakika)

## 🔍 Programın Çalışma Mantığı

1️⃣ Kullanıcıdan iki farklı tarih ve saat alınır.  
2️⃣ mktime() fonksiyonu kullanılarak epoch time değeri hesaplanır.  
3️⃣ İki zaman arasındaki fark saniye cinsinden bulunur.  
4️⃣ Fark ayrıca dakika cinsine çevrilerek ekrana yazdırılır.  

## 🎯 Programın Kullanım Alanları

✅ İki olay arasındaki geçen süreyi hesaplama (örneğin, bir görevin başlangıç ve bitiş süresi).  
✅ Farklı zaman dilimlerindeki tarihleri karşılaştırma.  
✅ Zaman bazlı analizler ve zaman yönetimi uygulamaları.  
