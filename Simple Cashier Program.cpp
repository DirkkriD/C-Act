#include<iostream>
using namespace std;

      int main(){
      	  int icecream;
      	  int icecreamQty;
      	  int addon;
      	  int addonQty;
      	  double ChocolateFlavor = 50.00;
      	  double VanillaFlavor = 40.00;
      	  double MangoFlavor = 75.00;
      	  double AmountOfSaleCF = 0;
      	  double AmountOfSaleVF = 0;
      	  double AmountOfSaleMF = 0;
      	  double ChocolateChips = 20.00;
      	  double Sprinkles = 15.00;
      	  double AmountOfSaleChips = 0;
      	  double AmountOfSaleSprinkles = 0;
      	  double Cash;
      	  double total = 0;
      	
      	cout<<"Please select the number of your product\n\n";
      	
      	cout<<"[1] Chocolate..... Php 50.00\n";
		cout<<"[2] Vanilla........Php 40.00\n";
		cout<<"[3] Mango..........Php 75.00\n\n";
      	
      	cout<<"What Flavor do you want?: ";
      	cin>>icecream;
      	cout<<"How many?: ";
      	cin>>icecreamQty;
      	
      	cout<<"\nPlease select add-ons\n\n";
      	
      	cout<<"[1]Chocolate chips.....Php 20.00\n";
		cout<<"[2]Sprinkles...........Php 15.00\n\n";
      	
      	cout<<"What Add-on do you want?: ";
      	cin>>addon;
      	cout<<"How many?: ";
      	cin>>addonQty;
      	
      	cout<<"\nItem Ordered\n\n";
      	
    
    switch(icecream)
    {
    	case 1:
    		cout<<"ChocolateFlavor....Php 50.00 X "<<icecreamQty<<"="<<icecreamQty*ChocolateFlavor<<"\n"; 
			AmountOfSaleCF = icecreamQty * ChocolateFlavor;
		break;
		
		case 2:
    		cout<<"VanillaFlavor....Php 40.00 X "<<icecreamQty<<"="<<icecreamQty*VanillaFlavor<<"\n";
			AmountOfSaleVF = icecreamQty * VanillaFlavor;
		break;
		
		case 3:
    		cout<<"MangoFlavor...Php75.00.00 X "<<icecreamQty<<"="<<icecreamQty*MangoFlavor<<"\n";
		AmountOfSaleMF = icecreamQty * MangoFlavor;
		break;
	}
	
	{
	switch (addon)
	{
		case 1:
			cout<<"ChocolateChips....Php 20.00 X "<<addonQty<<" = "<<addonQty*ChocolateChips<<"\n";
			AmountOfSaleChips = addonQty * ChocolateChips;
			break;
			
		case 2:
			cout<<"Sprinkles....Php 15.00 X "<<addonQty<<" = "<<addonQty*Sprinkles<<"\n";
			AmountOfSaleSprinkles = addonQty * Sprinkles;
			break;	
	}
	
	    total = 0;
	    total = total + AmountOfSaleCF + AmountOfSaleVF + AmountOfSaleMF + AmountOfSaleChips + AmountOfSaleSprinkles;
	    
	    cout<<"\nTotal Amount is: "<<total<<"\n";
	    cout<<"Cash: ";
	    cin>>Cash;	
	}
      	if(Cash<total)
		  {
		  	cout<<"Invalid Payment. Please Order Again";
		  }
		  cout<<"\nChange: "<<Cash-total<<"\n\n";
      	
      	return 0;
	  }
