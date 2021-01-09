#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

int glob=0;
int global=10;
class d_booking 
{
protected:
    int pnr;
    char f_d[10],toja[7],tojd[7]; 
    long int doj;
    int choice,src,dest;    
public:
    void d_pnr()
    {
        glob++; 
        pnr=glob;
    }
    int j_detail()
    {
        cout << "\nYolculuk Tarihini Girin(DDMMYY)." << "Lutfen gecerli bir tarih giriniz." <<  endl;
        cin >> doj;
        cout << "\1.Ankara \t\2.Sivas \t\3.Antalya \t\4.Mugla" << endl << endl;
        cout << "\tSehir Secin" << endl;
        cin >> src;
        cout << "\tHedef girin" << endl;
        cin >> dest;
        if((src==1 && dest==2) || (src==2 && dest==1))
        {
            cout << "\t \t \tBulunan Ucuslar" << endl << endl;
            cout << "Havayolu:\Kalkis:\Varis:\Fiyat:\t\Kategori:\n";
            cout << "\1.OnurAir\t08:00\t\t11:05\t\tTL.500\t\tGeri odenebilir\n";
            cout << "\2.THY\t14:00\t\t17:05\t\tTL.550\t\tGeri odenebilir\n";
            cout << "\3.Pegasus\t19:00\t\t22:05\t\tTL.600\t\tGeri odenebilir\n";
        }
        else if((src==1 && dest==3) || (src==3 && dest==1))
        {
            cout << "\t \t \tBulunan Ucuslar" << endl << endl;
            cout << "Havayolu:\Kalkis:\Varis:\Fiyat:\t\Kategori:\n";
            cout << "\1.OnurAir\t08:00\t\t11:05\t\tTL.500\t\tGeri odenebilir\n";
            cout << "\2.THY\t14:00\t\t17:05\t\tTL.550\t\tGeri odenebilir\n";
            cout << "\3.Pegasus\t19:00\t\t22:05\t\tTL.600\t\tGeri odenebilir\n";
        }
        else if((src==1 && dest==4) || (src==4 && dest==1))
        {
            cout << "\t \t \tBulunan Ucuslar" << endl << endl;
            cout << "Havayolu:\Kalkis:\Varis:\Fiyat:\t\Kategori:\n";
            cout << "\1.OnurAir\t08:00\t\t11:05\t\tTL.400\t\tGeri odenebilir\n";
            cout << "\2.THY\t14:00\t\t17:05\t\tTL.425\t\tGeri odenebilir\n";
            cout << "\3.Pegasus\t19:00\t\t22:05\t\tTL.610\t\tGeri odenebilir\n";
        }
        else if((src==2 && dest==3) || (src==3 && dest==2))
        {
            cout << "\t \t \tBulunan Ucuslar" << endl << endl;
            cout << "Havayolu:\Kalkis:\Varis:\Fiyat:\t\Kategori:\n";
            cout << "\1.OnurAir\t08:00\t\t11:05\t\tTL.540\t\tGeri odenebilir\n";
            cout << "\2.THY\t14:00\t\t17:05\t\tTL.250\t\tGeri odenebilir\n";
            cout << "\3.Pegasus\t19:00\t\t22:05\t\tTL.289\t\tGeri odenebilir\n";
        }
        else if((src==2 && dest==4) || (src==4 && dest==2))
        {
            cout << "\t \t \tBulunan Ucuslar" << endl << endl;
            cout << "Havayolu:\Kalkis:\Varis:\Fiyat:\t\Kategori:\n";
            cout << "\1.OnurAir\t08:00\t\t11:05\t\tTL.500\t\tGeri odenebilir\n";
            cout << "\2.THY\t14:00\t\t17:05\t\tTL.450\t\tGeri odenebilir\n";
            cout << "\3.Pegasus\t19:00\t\t22:05\t\tTL.600\t\tGeri odenebilir\n";
        }
        else if((src==3 && dest==4) || (src==4 && dest==3))
         {
            cout << "\t \t \tBulunan Ucuslar" << endl << endl;
            cout << "Havayolu:\Kalkis:\Varis:\Fiyat:\t\Kategori:\n";
            cout << "\1.OnurAir\t08:00\t\t11:05\t\tTL.580\t\tGeri odenebilir\n";
            cout << "\2.THY\t14:00\t\t17:05\t\tTL.550\t\tGeri odenebilir\n";
            cout << "\3.Pegasus\t19:00\t\t22:05\t\tTL.605\t\tGeri odenebilir\n";
        }
        else if(src==dest)
        {
            cout << "\nKaynak ve hedef ayni olamaz.\nTekrar deneyin\n\n\n" << endl;
            return j_detail();
        }
        else
        {
            cout <<"\nYanlis giris girildi\nTekrar deneyin\n\n\n" << endl;
            return j_detail();
        }
    }
    int  select_flight() 
    {   cout << "\nSecimini gir" << endl;
        cin >> choice;
        switch(choice) 
        {
          case 1:
                cout << "\nUcus secildi:"<<endl;
                cout << "OnurAir"<<endl;
                strcpy(f_d,"OnurAir");
                cout << "Hareket saati : 08:00"<<endl;
                cout<<"Varis zamani: 11:05"<<endl;
                strcpy(tojd,"8:00"); 
                strcpy(toja,"11:05");
                break;
          case 2:
                cout << "\nUcus secildi:"<<endl;
                cout << "THY"<<endl;
                strcpy(f_d,"THY");
                cout << "Hareket saati : 14:00"<<endl;
                cout<<"Varis zamani: 17:05"<<endl;
                strcpy(tojd,"14:00");
                strcpy(toja,"17:05");
                break;
          case 3:
                cout << "\nUcus secildi:" << endl;
                cout << "Pegasus" << endl;
                strcpy(f_d,"Pegasus");
                cout << "Hareket saati : 19:00" << endl;
                cout<<"Varis zamani: 22:05" << endl;
                strcpy(tojd,"19:00");
                strcpy(toja,"22:05");
                break;
          default:
                cout << "Yanlis giris girildi.\nTekrar deneyin" << endl;
                return select_flight();
        }
    }
};
class i_booking
{
protected:
    int pnri;
    char f_i[10],tojai[7],tojdi[7];
    long int doji;
    int srci,desti,choicei;
public:
    void i_pnr()
    {
        global++;
        pnri=global;
    }
    int j_detaili()
    {
        cout << "\nYolculuk Tarihini Girin(DDMMYY)." << "Lütfen gecerli bir tarih giriniz." << endl;;
        cin >> doji;
        cout << "\1.Londra \2.Dubai \3.Paris \4.Los Angales \5.NewYork " << endl << endl;
        cout << "\tKaynak Girin" << endl;
        cin >> srci;
        cout << "\nHedef girin" ;
        cin >> desti;
        cout << "\t \t \tBulunan Ucuslar" << endl << endl;
        if((srci==1 && desti==3) || (srci==3 && desti==1))
        {
            cout << "Havayolu:\Kalkis:\Varis:\Fiyat:\t\Kategori:\n";
            cout << "\1.THY\t10:00\t\t14:05\t\tTL.2500\tGeri odenebilir\n";
            cout << "\2.Fly Dubai\t14:00\t\t18:05\t\tTL.2150\tGeri odenebilir\n";
            cout << "\3.Emirates\t18:00\t\t22:05\t\tTL.2400\tGeri odenebilir\n";
        }
        else if((srci==1 && desti==4) || (srci==4 && desti==1))
        {
            cout << "Havayolu:\Kalkis:\Varis:\Fiyat:\t\Kategori:\n";
            cout << "\1.THY\t10:00\t\t14:05\t\tTL.25500\tGeri odenebilir\n";
            cout << "\2.Fly Dubai\t14:00\t\t18:05\t\tTL.2130\tGeri odenebilir\n";
            cout << "\3.Emirates\t18:00\t\t22:05\t\tTL.2465\t\tGeri odenebilir\n";
        }
        else if((srci==1 && desti==5) || (srci==5 || desti==1))
        {
            cout << "Havayolu:\Kalkis:\Varis:\Fiyat:\t\Kategori:\n";
            cout << "\1.THY\t10:00\t\t14:05\t\tTL.52500\tGeri odenebilir\n";
            cout << "\2.Fly Dubai\t14:00\t\t18:05\t\tTL.5940\tGeri odenebilir\n";
            cout << "\3.Emirates\t18:00\t\t22:05\t\tTL.6489\tGeri odenebilir\n";
        }
        else if((srci==2 && desti==3) || (srci==3 && desti==2))
        {
            cout << "Havayolu:\Kalkis:\Varis:\Fiyat:\t\Kategori:\n";
            cout << "\1.THY\t10:00\t\t14:05\t\tTL.17800\tGeri odenebilir\n";
            cout << "\2.Fly Dubai\t14:00\t\t18:05\t\tTL.1400\tGeri odenebilir\n";
            cout << "\3.Emirates\t18:00\t\t22:05\t\tTL.1870\tGeri odenebilir\n";
        }
        else if((srci==2 && desti==4) || (srci==4 && desti==2))
        {
            cout << "Havayolu:\Kalkis:\Varis:\Fiyat:\t\Kategori:\n";
            cout << "\1.THY(1)\t10:00\t\t14:05\t\tTL.3200\tGeri odenebilir\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tTL.3850\tGeri odenebilir\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tTL.41259\tGeri odenebilir\n";        
		}
        else if(srci==2 && desti==5 || (srci==5 && desti==2))
        {
            cout << "Havayolu:\Kalkis:\Varis:\Fiyat:\t\Kategori:\n";
            cout << "\1.THY\t10:00\t\t14:05\t\tTL.82500\tGeri odenebilir\n";
            cout << "\2.Fly Dubai\t14:00\t\t18:05\t\tTL.8750\tGeri odenebilir\n";
            cout << "\3.Emirates\t18:00\t\t22:05\t\tTL.8178\tGeri odenebilir\n";
        }
        else if(srci==desti)
        {
            cout << "yanlis giris girildi.\nTekrar deneyin\n\n\n"<< endl;
            return j_detaili();
        }
        else
            {
            cout << "yanlis giris girildi.\nTekrar deneyin\n\n\n";
            return j_detaili();
        }
    }
    int select_flighti()
    {
        cout << "\nSecimini gir" << endl;
        cin >> choicei;
        
        switch(choicei)
        {
        case 1:
            cout << "\nUcus secildi:" <<endl;
            cout << "THY" << endl;
            strcpy(f_i,"THY");
            cout << "Hareket saati: 10:00" << endl;
            cout << "Varis zamani: 14:05" << endl;
            strcpy(tojdi,"10:00");
            strcpy(tojai,"14:05");
            break;
        case 2:
               cout << "\nUcus secildi:" << endl;
               cout << "Fly Dubai" << endl;
               strcpy(f_i,"Fly Dubai");
               cout << "Hareket saati: 14:00" << endl;
               cout << "Varis zamani: 18:05" << endl;
               strcpy(tojdi,"14:00");
                strcpy(tojai,"18:05");
                break;
        case 3:
            cout << "\nUcus secildi:" << endl;
            cout << "Emirates" << endl;
            strcpy(f_i,"Emirates");
            cout << "Hareket saati: 18:00" << endl;
            cout << "Varis zamani: 22:05" << endl;
            strcpy(tojdi,"18:00");
            strcpy(tojai,"22:05");
            break;
        default:
            cout << "Yanlis giris girildi" << endl;
            return select_flighti();
        }
    }
};
class passenger: public d_booking,public i_booking
{
protected:
    char f_name[20],l_name[20],email[50];
    int age,gender;
    long int c_no;
public:
    void p_detail(int x)
    {   if(x==1)
        { j_detail();
          select_flight();
        }
          else
          {  j_detaili();
             select_flighti();
          }
        cout << "\n\n\nYolcu ayrintilarini girin";
        cout << "\nAd:";
        cin >> f_name;
        cout << "Soyad:";
        cin >> l_name;
    }
    int gender_check()
    {
        cout << "\nCinsiyet:\nErkek(1):\nKadin(2):";
        cin >> gender;
        if(gender>2)
        {
            cout << "\n\nYanlis giris girildi.\nTekrar deneyin\n\n" << endl;
            return gender_check();
        }
    }
       void more_details()
       {
        cout << "Yas:";
        cin >> age;
        cout << "Email:";
        cin >> email;
        cout << "Telefon:";
        cin >> c_no;
        cout << "\n\nAyrintilar:\n";
        cout << "Isim:" << f_name << " " << l_name << endl;
        cout << "Cinsiyet:" << gender << endl;     
        cout << "Yas:" << age << endl;
        cout << "Email :" << email << endl;
        cout << "Telefon.:" << c_no << endl;
    }
     int getpnr()
        {
            return pnr;
        }
     int getpnri()
     {
         return pnri;
     }
     void disp()
     {
         cout<<"PNR:" << pnr << endl;
         cout<<"Ucus:" << f_d << endl;
         cout<<"Isim:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doj << endl;
         cout<<"Hareket saati:" << tojd << endl;
         cout<<"Varis zamani:" << toja;
     }
      void dispi()
     {
         cout<<"PNR:" << pnri << endl;
         cout<<"Ucus:" << f_i << endl;
         cout<<"Isim:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doji << endl;
         cout<<"Hareket saati:" << tojdi << endl;
         cout<<"Varis zamani:" << tojai;
     }
};
class payment
{
protected:
    long
    int choice1,bank,card,date,cvv,user_id;
    char password[10];
public:
    void pay_detail()
    {     cout << "\n\n\nNasil odemek istersin?:\n";
        cout << "\n\1.Banka karti(1) \n\2.Kredi karti(2)";
        cout << "\n\nSecimini gir";
        cin >> choice1;
        switch(choice1)
        {
        case 1:
            cout << "\nKart numarasini girin.:";
            cin >> card;
            cout << "\nSon kullanma tarihini girin:";
            cin >> date;
            cout << "\nCVV numarasini girin.:";
            cin >> cvv;
            cout << "\nIslem Basarili\n";
            break;
        case 2:
            cout << "\nKart numarasini girin.:";
            cin >> card;
            cout << "\nSon kullanma tarihini girin:";
            cin >> date;
            cout << "\nCVV numarasini girin:";
            cin >> password;
            cout << "\nIslem Basarili\n";
            break;
        default:
            cout << "\nYanlis giris girildi.\nTekrar deneyin\n\n";
            return pay_detail();
        }
    }
};
void createfile(passenger p)
{  ofstream fin("domestic.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}
void cancelticket(int x)
{  passenger p;
    int f=0;
   ifstream fout("domestic.txt",ios::binary|ios::app);
   ofstream fin("domestic1.txt",ios::binary|ios::app);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnr()!=x)
      fin.write((char *)&p,sizeof(p));
      else
     {
         p.disp();
         cout<<"\nYukaridaki biletiniz iptal ediliyor:\n" << "Geri Ödenecek Tutar: TL 1000\n";
         f++;
     }
     fout.read((char *)&p,sizeof(p));
   }
   if(f==0)
    cout<<"Bilet bulunamadi\n";
   fout.close();
   fin.close();
   remove("domestic.txt");
   rename("domestic1.txt","domestic.txt");
}
void checkticket(int x)
{  passenger p;
   int f=0;
   ifstream fout("domestic.txt",ios::binary);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnr()==x)
     {p.disp();
      cout<<"\nSizin biletiniz"<<endl;
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));
   }
   fout.close();
   if(f==0)
   cout<<"Bilet bulunamadi"<<endl;
}
void createfilei(passenger p)
{  ofstream fin("international.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}
void cancelticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary|ios::app);
   ofstream fin("international1.txt",ios::binary|ios::app);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnri()!=x)
      fin.write((char *)&p,sizeof(p));
      else
     {
         p.dispi();
         cout<<"Yukaridaki biletiniz siliniyor:\n"<<"Geri Ödenecek Tutar: TL 1000\n";
         f++;
     }
     fout.read((char *)&p,sizeof(p));
   }
   if(f==0)
    cout<<"\nBilet bulunamadi\n";
   fout.close();
   fin.close();
   remove("international.txt");
   rename("international1.txt","international.txt");
}
void checkticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnri()==x)
     {p.dispi();
      cout<<"\nSizin biletiniz"<<endl;
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));

   }
   fout.close();
   if(f==0)
   cout<<"Bilet bulunamadi"<<endl;
}
int main()
{
    class d_booking d1;
    class i_booking i1;
    class passenger p1;
    class payment p2;
    int ch,ch1,n;
    char input;
    do
    {
    	system("CLS");
    cout << "Ucus Rezervasyon Sistemine Hos Geldiniz" << endl << endl;
    cout << "1.Bilet Satin Al \n2.Ucus Iptal \n3.Bileti Kontrol Et \n4.Cikis" << endl;
    cout << "\nLutfen seciminizi girin:";
    cin >> ch;
      switch(ch)
      {
          case 1:
          system("CLS");
              cout << "\n\n\1.Yurtici Ucuslari \n\2.Yurtdisi Ucuslari" << endl;
              cout << "\nLutfen seceneginizi girin" << endl;
              cin >> ch1;
              switch(ch1)
              {
                   case 1:
                        p1.d_pnr();
                        p1.p_detail(1);
                        p1.gender_check();
                        p1.more_details();
                        p2.pay_detail();
                        p1.disp();
                        createfile(p1);
                        break;
                   case 2: 
                           p1.p_detail(2);
                           p1.i_pnr();
                           p1.gender_check();
                           p1.more_details();
                           p2.pay_detail();
                           p1.dispi();
                           createfilei(p1);
                           break;
                   default:
                    cout << "Yanlis giris girildi\nTekrar deneyin\n\n\n" << endl;
                    return main();
              }
          break;
          case 2:
              system("CLS");
              cout << "\n1.Yurtici Ucuslari \n\2.Yurtdisi Ucuslari" << endl;
                 cout << "\nLutfen seceneginizi girin" << endl;
                 cin >> ch1;
                  if(ch1==1)
                {
                   cout << "Lütfen PNR numaranizi girin:" << endl;
                   cin>>n;
                   cancelticket(n);
                }
                 else if(ch1==2)
               {  cout << "Lütfen PNR numaranizi girin:" << endl;
                  cin>>n;
                  cancelticketi(n);
               }
               else
               {
                   cout << "Yanlis giris girildi\nTekrar deneyin\n\n\n";
                   return main();
               }
               break;
          case 3:
          system("CLS");
                  cout << "\n1.Yurtici Ucuslari \n\2.Yurtdisi Ucuslari" << endl;
                  cout << "\nLutfen seceneginizi girin" << endl;
                  cin >> ch1;
                  if(ch1==1)
                  {cout << "Lütfen PNR numaranizi girin:" << endl;
                  cin>>n;
                  checkticket(n);}
                  else if(ch1==2)
                  {  cout << "Lütfen PNR numaranizi girin:" << endl;
                     cin>>n;
                     checkticketi(n);
                  }
                   else
               {
                   cout << "Yanlis giris girildi.\nTekrar deneyin\n\n\n";
                   return main();
               }
               break;
            case 4:
			system("CLS");
			return 0; 
          default:
            cout << "Yanlis giris girildi\nTekrar deneyin.\n\n\n\n" << endl;
            return main();
      }
    cout<<"\n\n\nDevam etmek istiyor musunuz: (y / Y)" << endl;
    cin >> input;
  }while(input=='Y' || input=='y');
return 0;
}
