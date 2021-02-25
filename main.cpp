#include <iostream>

using namespace std;

void header();
void main_menu(int opt);
bool login(string u, string p);
void librarian_menu();
void books_view();
void add_book();
void footer();

// index 0 for username
// index 1 for password
string librarian[] = {"librarian", "lib123"};
int used[2];

// books data stored in array multi dimention
// n.0 for title
// n.1 for author
// n.2 for status (borrowed or not)
string books[100][3] = {
                        {"Belajar C++", "Limidev", "0"},
                        {"Algoritma Pemrograman", "Nusantara", "1"},
                      };

int main(){

    int option;

    header();
    cout << "Pilih menu: ";
    cin >> option;
    main_menu(option);

}

void header(){
    cout << "===== Librarian App =====" << endl;
    cout << "1. Login" << endl;
    cout << "2. Search" << endl;
}

void main_menu(int opt){
    // TODO menu utama untuk memilih menu, jika yang dipilih login panggil fungsi login()
    // Jika login memberikan return true, beri pesan Selamat datang + username
    // Setelah itu panggil fungsi librarian_menu()
    // Jika menu yang dipilih tidak tersedia beri pesan "Menu tidak tersedia" serta panggil fungsi header() untuk menampilkan menu utama

    // Jefri
}

bool login(string u, string p){
    // TODO fungsi login dengan return value bool
    // Jika username dan password benar return true
    // Jika username dan password salah return false, dan beri pesan username dan password tidak sesuai
    // Suryadi
    if (u  != librarian[0] && p != librarian[1]){
        cout << "Maaf, username dan password tidak sesuai" << endl;
        return false;
    }else{
        return true;
    }
}

void librarian_menu(){
    // TODO fungsi librarian_menu() merupakan fungsi yang mempilkan menu khusus librarian
    // Menu: 1. Books, 2. Add Book, 3. Edit Book, 4. Book History, 5. Delete Book, 6. Logut
    // Jika Menu 1 yang dipilih panggil fungsi books_view()
    // Jika menu 2 yang dipilih panggil fungsi add_book()
    // Jika menu tidak ada tampilkan pesan "menu tidak tersedia" dan tampilkan kembali menu khusus librarian

    // Mira
}

void books_view(){
    // TODO fungsi books_view() untuk menampilkan data buku yang tersimpan pada Array Books di atas
    // Tampilkan buku yang tersedia saja.

    // Atika
}

void add_book(){
    // TODO fungsi add_book() untuk menambahkan buku baru pada array Books tepat pada index yang kosong
    // librarian bisa menambahkan lebih dari satu buku pada saat bersamaan
    // setelah berhasil menambahkan buku, beri pesan banyak buku yang ditambahkan
    // jika gagal beri pesan buku gagal ditambahkan. 

    // Fira
}
