#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
void main()
{
clrscr();
char key,key2,dtls,sym[10],back,fb1,fb2[100],name[100];
char pt,his,wel,Edet[100],edet;
int i;
for(i=11;i<1000;++i)
{
cout<<"0110101010000100110011100101";
cprintf("0110101110001011011010100111");
}
clrscr();
for(i=13;i<14;++i)
{
cprintf("                   ___         ___  ___   _    _    ___                      ");
cprintf("          \\        / |      |    |    |   | | \\  / |  |                          ");
cprintf("          \\  /\\  /  |--    |    |    |   | |  \\/  |  |--                        ");
cprintf("           \\/  \\/   |___   |___ |___ |___| |      |  |___    ");
cout<<"\n\n\t\t\t\t\t               TO THE PERIODIC TABLE";
cout<<"\n\n\n\n\n\n\n\n\n  A Project By:";
cout<<"\n\n\n\n";
textcolor(i+34); // 34 white     //99          //34 blink 314254
textbackground(i+12212);   //red 15   //110  //blue 12212  //10231 //3 //31425
}
cprintf("\n\n                                                                                      Enter your name to continue\n");
gets(name);
{PM:
clrscr();
cout<<"\t\t\t  Welcome to the PERIODIC TABLE\t\t\t\t";
textcolor(i+45);       //45
ifstream mm("pt.txt",ios::in);
while(!mm.eof())
{
mm.get(pt);
cout<<pt;
}}
/*cout<<"\n\n\n ";
cprintf("[H ]                                                                    |He|");
cprintf("    [Li][Be]                                            |B ||C ||N ||O ||F ||Ne|");
cprintf("    [Na][Mg]                                            |Al||Si||P ||S ||Cl||Ar|");
cprintf("    [K ][Ca]  |Sc||Ti||V ||Cr||Mn||Fe||Co||Ni||Cu||Zn|  |Ga||Ge||As||Se||Br||Kr|");
cprintf("    [Rb][Sr]  |Y ||Zf||Nb||Mo||Tc||Ru||Rh||Pd||Ag||Cd|  |In||Sn||Sb||Te||I ||Xe|");
cprintf("    [Cs][Ba]  |f ||Hf||Ta||W ||Re||Os||Ir||Pt||Au||Hg|  |Ti||Pb||Bi||Po||At||Rn|");
cprintf("    [Fr][Ra]  |f ||Rf||Db||Sg||Bh||Hs||Mt||Ds||Rg||Cn|                          ");
cprintf("\n");
cprintf("              |La||Ce||Pr||Nd||Pm||Sm||Eu||Gd||Tb||Dy||Ho||Er||Tm||Yb||Lu|");
cprintf("                    |Ac||Th||Pa||U ||Np||Pu||Am||Cm||Bk||Cf||Es||Fm||Md||No||Lr|");
} */
PM1:
textcolor(i+12); //12green 2black 15purple 44 blink:  9010 929 949 989 //all blink 929
cprintf("\n\n          Mannual Search:-");
cprintf("\nEnter Atomic Symbol of the respected Element                                               ");
gets(sym);

ifstream m(sym,ios::in);
clrscr();
{while(!m)
{PM3:clrscr();
cout<<"\n\tThis element is not in the Periodic Table....";
cout<<"\n\tYou Discovered this new element.........";
cout<<"\n\n\n\n\n\t\nPress 'S' to submit details about this new Element '"<<sym<<"'";
cout<<"\n\t\nPress 'K' to Know about other submitted Elements";
cout<<"\n\t\nPress 'P' to go to the Periodic Table";
cout<<"\n\t\nPress 'M' to Feedback menu";
cout<<"\n\t\nPress 'E' to exit";
back=getch();
switch(back)
{
case 'S'|'s' : goto PM6;break;
case 'K'|'k' : goto PM7;break;
case 'P'|'p' : goto PM; break;
case 'M'|'m' : goto PM2; break;
case 'E'|'e' : exit(0); break;
default : goto PM3;
}
}
while(!m.eof())
{

m.get(dtls);
cout<<dtls;
}
cout<<"\n\n\nPress any key to continue....";
key2=getch();
m.close();}
PM2:
clrscr();

cout<<"\n\n\n\n\n\t\t\tPress 'S' to search again";
cout<<"\n\t\t\t\nPress 'P' to go to Periodic Table";
cout<<"\n\t\t\t\nPress 'F' to give Feedback (recommended)";
cout<<"\n\t\t\t\nPress 'C' to see Feedbacks";
cout<<"\n\t\t\t\nPress 'H' to know History of the Periodic Table";
cout<<"\n\t\t\t\nPress 'E' to exit program";
cout<<"\n\n\n\n\n\tTip : Do you know about any element more......\nPress 'X'";
back=getch();
switch(back)
	 {case 'S'|'s':	    cout<<"\n";
		      goto PM1;
		      break;
	  case 'P'|'p' :   cout<<"\n";
		      goto PM;
		      break;
	  case 'H'|'h' : goto PM9;
			break;
	  case 'F'|'f': cout<<"\n";
			goto PM4;
			break;
	  case 'C'|'c': cout<<"\n";
			 goto PM5;
			 break;
	  case 'X'|'x' : goto PM8;
	  case 'E'|'e':	 cout<<"\n";
	 exit(0);
	 break;
	 default: cout<<"\n\n\n\n\nError:";
	 goto PM2;
	 break;
}
{PM4: clrscr();ofstream m2("Feedback.txt",ios::out|ios::app);
	 cout<<"\n                            +++++++ FEEDBACK ++++++";
	 cout<<"\n\nPlease write your Feedback for us : ";
	 gets(fb2);
	 m2<<"#"<<name<<" : "<<fb2<<"\n";
	 m2.close();
	 cout<<"\nThanks.....";
	 cout<<"\nFor your Feedback.";
	 cout<<"\n\n\nPress any key to continue....";
	 key=getch();
	 goto PM2;
	    }

{PM5: clrscr(); ifstream m1("Feedback.txt",ios::in);
			cout<<"\n";

			while(!m1.eof())
			 {m1.get(fb1);
			 cout<<fb1; }
			 m1.close();
			 cout<<"\nPress any key to continue....";
			 key=getch();
			 goto PM2;
			 }
{ PM6:clrscr();ofstream m2("Edetails.txt",ios::out|ios::app);
	       cout<<"\nEnter Details about Element '"<<sym<<"' : ";
	       gets(Edet);
	       m2<<"\n\nOwner        : "<<name<< "\nElement Name : "<<sym<<"\nDetails      : "<<Edet;
	       cout<<"\n\n\nPress any Key to continue..... ";
	       key=getch();
	       goto PM3;
	       m2.close(); }

{PM7:clrscr();ifstream m2("Edetails.txt",ios::in);
	       while(!m2.eof())
	       {
	       m2.get(edet);
	       cout<<edet;
	       }
	       cout<<"\n\n\n\n\nPress any Key to continue..... ";
	       key=getch();
	       goto PM3;
	       m2.close();
	       }
{
PM8: clrscr();
	cout<<"Enter the Symbol of that Element : ";
	gets(sym);
ifstream m2(sym,ios::in);
	while(!m2.eof())
	{
	m2.get(dtls);
	cout<<dtls;
	}m2.close();
ofstream m3(sym,ios::out|ios::app);
	{
	cout<<"\nEnter More About This Element : ";
	gets(fb2);
	m3<<"\nName : "<<name<<"\nDetails : "<<fb2;
	cout<<"\nThanks For this....... ";
	cout<<"\nPress any Key to continue.... ";
	key=getch();
	goto PM;
	m3.close();
}
}
{PM9: clrscr();ifstream m1("history.txt",ios::in);
			 while(!m1.eof())
			 {
			 m1.get(his);
			 cout<<his;
			 }
			 cout<<"\n\n\nPress any Key to Continue.....";
			 key=getch();
			 goto PM2;
}
getch();
}












