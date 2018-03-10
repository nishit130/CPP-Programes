//Area of Circke using functions
  #include<iostream.h>
  #include<conio.h>

  double area (double);

  void main()
  { clrscr();
    double a,r;
    cout<<"Enter radius of the circle: ";
    cin>>r;
    a = area(r);
    cout<<"Area of circle is :"<<a;
    getch();
  }

  double area (double r)
  {return ( 3.14*r*r ); }