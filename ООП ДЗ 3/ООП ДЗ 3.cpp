
#include <iostream>
using namespace std;


//class Microphone {
 //  int weight;
 //  int energy;
 //   int state;
 //   int quality;
 //   int appearance;

//public:
  //  void SetWeight(int w) {
       //    if (w > 0 && w <= 100) {
      //          weight = w;
      //      }
      //     else {
      //          throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
      //      }
   // }
   // int GetWeight() const {
   //       return weight;
   // }
  //  void SetEnergy(int e) {
    //    if (e > 0 && e <= 100) {
    //        energy = e;
    //    }
    //    else {
     //       throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
     //   }
   // }
    //int GetEnergy() const {
    //    return energy;
   // }
   // void SetState(int s) {
       // if (s > 0 && s <= 100) {
      //      state = s;
      //  }
      //  else {
      //      throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
      //  }
   // }
   // int GetState() const {
   //     return state;
   // }
   // void SetQuality(int q) {
   //     if (q > 0 && q <= 100) {
    //        quality = q;
    //    }
    //   else {
     //       throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
     //   }
   // }
   // int GetQuality() const {
    //    return quality;
   // }
   // void SetAppearance(int a) {
   //     if (a > 0 && a <= 100) {
  //         appearance = a;
   //     }
   //     else {
    //        throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
   //     }
  // }
   // int GetAppearance() const {
   //     return appearance;
   // }



  //  void Sing() {
   //     energy -= 5;
   //     state --;
   //     quality--;
   //     appearance--;
  //  }
  //  void Fix() {
   //   state = 100;
  //    quality = 100;
   //   appearance = 100;
   // }
 //   void Charge() {
//       energy = 100;
//    }
 //  void Broke() {

  //     state = 0;
  //      quality = 0;
 //       appearance = 0;
 //   }
 //   void Disassemble() {
  //      weight --;
  //  }
 //  void PrintInfo() {
   //     cout << "Weight " << weight << "\n";
  //     cout << "State "  << state  << "\n";
   //    cout << "Quality " << quality << "\n";
   //    cout << "Appearance " << appearance << "\n";
 // }

//};


 //class  Peonies{
 // int number;
 // int water;
 // int smell;
 // int quality;
  //int week;

// public:
//  void PrintInfo() {
//      cout << "Number " << number << "\n";
//      cout << "Water " << water << "\n";
//      cout << "Smell  " << smell << "\n";
//      cout << "Quality " << quality << "\n";
//     cout << "Week  " << week << "\n";
//  }
//  void SetNumber(int n) {
//      if (n > 0 && n <= 5) {
 //         number = n;
 //     }
//      else {
//          throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
//      }
//  }
//  int GetNumber() const {
 //     return number;
//  }
//  void SetWater(int w) {
 //     if (w > 0 && w <= 5) {
 //         water = w;
 //     }
 //     else {
 //         throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
 //     }
//  }
 // int GetWater() const {
 //     return water;
  //}
 // void SetSmell(int s) {
  //    if (s > 0 && s <= 100) {
  //        smell = s;
  //    }
   //   else {
  //        throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
  //    }
 // }
 // int GetSmell() const {
 //     return smell;
 // }
 // void SetQuality(int q) {
 //     if (q > 0 && q <= 100) {
 //         quality = q;
//      }
 //     else {
 //         throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
 //     }
 // }
//  int GetQuality() const {
 //     return quality;
//  }
 // void SetWeek(int w) {
  //    if (w >= 1) {
  //        week = w;
 //     }
 //     else {
 //         throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
 //     }
//  }
//  void Smell() {
 //     smell--;
 // }
 // void Decorate() {
 //     week++;
 //     quality--;
//      smell--;
//      water--;
//  }
//  void Water(){
//      water = 5;
//  }
 // void Remove() {
 //     number--;
 // }
 // void Add() {
  //    number++;
 // }
// };
//

//class AcousticGuitar {
//  int quality = 100;
// int strings = 6;
//  int energy = 100;
//  int mood = 100;
//  int size = 135;
//public:
  //  void PrintInfo() {
   //     cout << "Quality " << quality << "\n";
    //    cout << "Strings " << strings << "\n";
     //   cout << "Energy  " << energy << "\n";
     //   cout << "Mood " << mood << "\n";
     //   cout << "Size  " << size << "\n";
   // }
  //  void SetQuality(int q) {
   //     if (q > 0 && q <= 100) {
   //         quality = q;
    //    }
    //    else {
   //         throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
    //    }
   // }
   // int GetQuality() const {
   //     return quality;
   // }
   // void SetStrings(int s) {
   //     if (s = 6) {
   //         strings = s;
   //     }
   //     else {
    //        throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
    //    }
  //  }
  //  int GetStrins() const {
  //      return strings;
  //  }
  //  void SetEnergy(int e) {
   //     if (e > 0 && e <= 100) {
   //         energy = e;
   //     }
    //    else {
   //         throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
    //    }
   // }
    //int GetEnergy() const {
   //     return energy;
   // }
  //  void SetMood(int m) {
  //      if (m > 0 && m <= 100) {
  //          mood = m;
    //    }
  //  }
 //   int GetMood() const {
  //      return mood;
 //   }
 //   void SetSize(int s) {
 //       if (s > 0 && s <= 1000) {
  //          size = s;
  //      }
  //  }
 //   int GetSize() const {
  //      return size;
  //  }
//    void Play() {
//        energy--;
//        mood--;
//        quality--;
 //   }
//    void Broke() {
//        energy = 0;
//        mood = 0;
 //       size = 135;
//    }
 //   void ChangeMood() {
//        mood = 100;
//    }
//    void ChangeSizeBelt() {
 //       size++;
 //   }
//};

//class Sansevieria {
   // int *weight = nullptr;
   // int *height = nullptr;
   // int *week = nullptr;
   // int *water = nullptr;
    //int *number= nullptr;
//public:
  //  void PrintInfo() {
  //      cout << "Weight " << *weight << "\n";
  //      cout << "Height " << *height << "\n";
  //      cout << "Week " << *week << "\n";
   //     cout << "Water  " << *water << "\n";
   //     cout << "Number   " << *number << "\n";
  //  }
  //  Sansevieria() {

   //     cout << "C-TOR without parameters\n";
   //     weight = new int(2);
   //     height = new int(2);
   //     week = new int(2);
    //    water = new int(5);
    //    number = new int(1);

   // }
   // Sansevieria(const Sansevieria& other) {
   //     cout << "Copy constructor\n";
   //     weight = new int(*other.weight);
   //     height = new int(*other.height);
  //      week = new int(*other.week);
   //     water = new int(*other.water);
   //     number = new int(*other.number);
 //   }
  //  Sansevieria(int* w, int* h) : Sansevieria() {
   //     cout << "C-TOR with 2 parameters\n";
  //      SetWeight(*w);
  //      SetHeight(*h);
  //  }
  //    Sansevieria(int* w, int* h, int* wk, int* wt, int* n) {
    //      cout << "C-TOR with 5 parameters\n";
     //     weight = new int(*w);
    //      height = new int(*h);
     //     week = new int(*wk);
     //     water = new int(*wt);
      //    number = new int(*n);
     // }
  //  void SetWeight(int w) {
   //     if (w > 0 && w <= 2) {
    //        *(this->weight) = w;
    //    }
    //    else {
    //        throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
    //    }
   // }
   // int GetWeight() const {
  //      return *weight;
   // }

  //  void SetHeight(int h) {
   //     if (h > 0 && h <= 2) {
  //          *(this->height) = h;
  //      }
  //      else {
   //         throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
  //      }
  //  }
 //   int GetHeight() const {
  //      return *height;
//    }
  //  void SetWeek(int w) {
  //      if (w > 1 && w <= 10) {
  //          *(this->week) = w;
  //      }
  //      else {
  //          throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
 //       }
 //   }
 //   int GetWeek() const {
 //       return *week;
  //  }
  //  void SetWater(int w) {
  //      if (w > 0 && w <= 5) {
  //          *(this->water) = w;
   //     }
  //      else {
   //         throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
   //     }
  //  }
  //  int GetWater() const {
   //     return *water;
  //  }
 //   void SetNumber(int n) {
//        if (n > 0 && n <= 5) {
 //           *(this->number) = n;
 //       }
 //       else {
  //          throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
  //     }
  //  }
 //   int GetNumber() const {
   //     return *number;
  //  }
 //   ~Sansevieria() {
 //       delete weight;
 //       delete height;
 //       delete week;
 //       delete water;
 //       delete number;
        
 //   }
    //  void Water() {
    //      water = 5;
   //   }
   //   void Cut() {
    //      height--;
   //   }
   //   void Look() {
    //      week++;
   //   }
   //   void Add() {
   //       number++;
    //      weight++;
    //      water++;
    //  }
    //  void Removed() {
     //     weight = 0;
  //height = 0;
     //     week = 0;
     //     water = 0;
      //    number = 0;
  //    }

//};


class Book{
    int *weight = nullptr;
    int *pages = nullptr;
    int *quality = nullptr;
    int *price = nullptr;
   int *year = nullptr;
public:
    Book() {
        cout << "C-TOR without parameters\n";
        weight = new int(50);
        pages = new int(100);
        quality = new int(100);
        price = new int(400);
        year = new int(1960);
    }
    Book(const Book& origin) {
        cout << "Copy constructor\n";
        weight = new int (*origin.weight);
        pages = new int(*origin.pages);
        quality = new int(*origin.quality);
        price = new int(*origin.price);
        year = new int(*origin.year);
    }
    Book(int* w, int* p) : Book() {
        cout << "C-TOR with 2 parameters\n";
        SetWeight(*w);
        SetPages(*p);
    }
    Book(int* w, int* p, int* q, int* pr, int* y) {
        cout << "C-TOR with 5 parameters\n";
        weight = new int(*w);
        pages = new int(*p);
        quality = new int(*q);
        price = new int(*pr);
        year = new int(*y);
    }
    void SetWeight(int w) {
        if (w > 0 && w <= 1) {
           *(this->weight) = w;
        }
        else {
            throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
        }
 }
    int GetWeight() const {
       return *weight;
    }

  void SetPages(int p) {
        if (p > 0) {
            *(this->pages) = p;
       }
       else {
           throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
        }
  }
   int GetGpages() const {
       return *pages;
    }
   void SetQuality(int q) {
        if (q > 0 && q <= 100) {
           *(this->quality) = q;
       }
       else {
           throw "FATAL ERROR!!! INCORRECT  VALUE!\n";
        }
   }
   int GetQuality() const {
        return *quality;
    }
    int SetPrice(int p) {
        if (p > 0 && p <= 450) {
            *(this->price) = p;
        }
        else {
            throw "FATAL ERROR!!! INCORRECT VALUE!\n";
      }
    }
    int GetPrice() const {
       return *price;
    }
    int SetYear(int y) {
       if (y >= 1950 && y <= 2025) {
           *(this->year)= y;
        }
       else {
          throw "FATAL ERROR!!! INCORRECT VALUE!\n";
        }
   }
    int GetYear() const {
       return *year;
   }

   void PrintInfo() {
               cout << "Weight " << *weight << "\n";
                 cout << "pages " << *pages << "\n";
                 cout << "quality " << *quality << "\n";
                cout << "price " << *price << "\n";
                   cout << "year  " << *year << "\n";
     }
   ~Book() {
       delete weight;
       delete pages;
       delete quality;
       delete price;
       delete year;
   }
 //   void Read() {
  //      quality--;
  //  }
  //  void Learn() {
 //       quality--;
 //   }
  //  void Cut() {
//        weight--;
//        pages--;
//        quality--;
//    }
 //   void Sell() {
 //       price = 350;
 //   }

};


int main() {

   //  Book p;
    // p.PrintInfo();
   // cout << "========\n";
   //  p.Read();
   //  p.PrintInfo();
   //  cout << "========\n";
   //  p.Learn();
   //  p.PrintInfo();
    // cout << "========\n";
  //   p.Cut();
   //  p.PrintInfo();
   //  cout << "========\n";
   //  p.Sell();
  //   Book();

     //p.SetWeight(1);
    // p.SetPages(446);
    // p.SetQuality(100);
    // p.SetPrice(450);
    // p.SetYear(1994);
    // cout << "=======\n";
   //  p.PrintInfo();



   // Sansevieria p;
    //    p.PrintInfo();
    //    cout << "========\n";

    //    p.Water();
    //    p.PrintInfo();
    //    cout << "========\n";
    //    p.Cut();
    //    p.PrintInfo();
    //    cout << "========\n";
    //    p.Look();
     //   p.PrintInfo();
     //   cout << "========\n";
     //   p.Removed();
     //   p.PrintInfo();
     //   cout << "========\n";
     //   p.Add();
   // p.SetHeight(2);
   // p.SetWeight(2);
   // p.SetNumber(1);
   // p.SetWeek(1);
   // p.SetWater(5);
   // cout << "========\n";
   // p.PrintInfo();
    //Sansevieria();


    // AcousticGuitar p;
     //  p.PrintInfo();
     //  cout << "========\n";
     //  p.Play();
     //  p.PrintInfo();
    //   cout << "========\n";
     //  p.Broke();
     //  p.PrintInfo();
     //  cout << "========\n";
     //  p.ChangeMood();
     //  p.PrintInfo();
     //  cout << "========\n";
    //   p.ChangeSizeBelt();
    // p.SetEnergy(100);
   //  p.SetMood(100);
   //  p.SetQuality(100);
    // p.SetSize(120);
   //  p.SetStrings(6);
   //  cout << "========\n";
   //  p.PrintInfo();


      //     Microphone p;
          // p.PrintInfo();
           //cout << "========\n";
          // p.Fix();
          // p.PrintInfo();
          // cout << "========\n";
         //  p.Sing();
         //  p.PrintInfo();
         //  cout << "========\n";
        //   p.Charge();
         //  p.PrintInfo();
        //   cout << "========\n";
        //   p.Broke();
       //    p.PrintInfo();
       //    cout << "========\n";
        //   p.Disassemble();
       //    p.PrintInfo();
       //    p.SetWeight(100);
       //    p.SetEnergy(100);
       //    p.SetState(100);
       //    p.SetQuality(100);
       //    p.SetAppearance(100);
       //    cout << "========\n";
       //    p.PrintInfo();


    //  Peonies p;
       // p.PrintInfo();
      // cout << "=====\n";
    // p.Smell();
    // p.PrintInfo();
    // cout << "=====\n";
    // p.Decorate();
    // p.PrintInfo();
   //  cout << "=====\n";
   // p.Water();
    // p.PrintInfo();
    // cout << "=====\n";
    // p.Remove();
    // p.PrintInfo();
    // cout << "=====\n";
    // p.Add();
    //    p.SetNumber(5);
    //    p.SetQuality(100);
    //    p.SetWater(5);
    //    p.SetSmell(100);
    //    p.SetWeek(1);
    //    cout << "=====\n";

    // p.PrintInfo();







}