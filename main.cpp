#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <map>
#include <math.h>

#include "Item.h"
#include "Store.h"
#include "TextUI.h"


int main(){

    Store mainStore("store.txt");
    TextUI ShopDisplay;
    bool exit = false;

    while(!exit){
        std::string choice = ShopDisplay.MainMenu();
        ShopDisplay.RouteChoice(mainStore,choice);
        if(choice == "Leave")
            exit = true;
    }

    
    


    return 0;
}