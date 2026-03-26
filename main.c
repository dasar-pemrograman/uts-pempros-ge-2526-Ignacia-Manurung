//12S25034 - Ignacia Putri Manurung

#include <stdio.h>

int main(){
    char ID;
    char name;
    int quantity;
    float price;

    printf("WELCOME TO WAREHOUSE INCIDENT SYSTEM\n");
    printf("Masukkan inputan dengan perintah yang sesuai dengan format berikut ini yaa!:\n");
    printf("1. receive#id#nama#jumlah#harga (menambahkan barang baru ke sistem)\n");
    printf("2. ship#id#jumlah (mengurangi stok barang)\n");
    printf("3. restock#id#jumlah (menambahkan stok barang)\n");
    printf("4. report (menampilkan semua barang)\n");
    printf("5. audit#id (menampilkan data barang dan seluruh log terkait barang tersebut)\n");

    printf("Silahkan input ID Anda");
    scanf("%s", ID);

    printf("Silahkan input Nama Anda");
    scanf("%s", name);

    printf("Silahkan input Quantity Anda");
    scanf("%d", quantity);

    printf("Silahkan input Price Anda");
    scanf("%d", price);

    printf("receive#<("%s", ID)>#<("%s", name)>#<("%d",quantity)>#<("%d",price)");
    printf("("%s", ID)|("%s", name)|("%d",quantity)|("%d",price)");

    printf("B001|Keyboard|10|150000.0");
    printf("B002|Mouse|5|50000.0");
    printf("B001|Keyboard|12|150000.0");
    printf("B001|Keyboard|12|150000.0");
    printf("1|receive|10");
    printf("2|restock|5");
    printf("3|ship|3");

//pakai struc(?) kata bpk
    return 0;
}