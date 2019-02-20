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

    std::cout << ShopDisplay.MainMenu() << std::endl;

    return 0;
}