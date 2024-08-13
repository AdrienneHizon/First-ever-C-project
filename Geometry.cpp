#include <iostream>
#include <cmath>

//For clearing the console function
void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    // Assume Unix/Linux
    system("clear");
#endif
}

int main(){

    //For declaring the variables
    int geom, vol, ar, sar, per, trig, sct;
    double sq, sqv, rpl, rpw, rph, rpv, cr, ch, cv, cyr, cyh, cyv, spr, spv, pyl, pyw, pyh, pyv, sqa, rpa, spa, trb, trh, tra, sqas, rpas, cas, csh, cyas, spas, pyas, s1, s2, s3, s4, s5, s6, sper, opp, hyp, adj, deg, a, b, c;
    char cont;

    //Goto statement for repeating
    start:

    //Introduction proper
    std::cout << "==Welcome to Geometry Calculator!==" << "\n"
            << "NOTE: For consistency, the calculator uses the unit of meters." << "\n"
            << "Kindly convert the values to meters first for a more accurate answer. Thank you!" << "\n\n"
            << "Select an option to calculate (between 1-5):" << "\n"
            << "[1]     Volume" << "\n"
            << "[2]     Area" << "\n"
            << "[3]     Surface Area" << "\n"
            << "[4]     Perimeter" << "\n"
            << "[5]     Trigonometry" << "\n";

    //Input validation
    do {
        std::cout << "\n" << "Entered number: ";
        std::cin >> geom;
            
        if (geom > 0 && geom <= 5){
        	clearConsole();
            break;
        }
        else 
            std::cout << "Invalid number! Please enter between 1-5!" <<"\n";
    } while (geom < 0 || geom > 5);

    //Switch statements for the selected calculations
    switch (geom){
        case 1:

            std::cout << "\n" << "Calculating the Volume!" << "\n"
                    << "Enter the shape you want to calculate (between 1-6):" << "\n"
                    << "[0]     << BACK" << "\n"
                    << "[1]     Cube" << "\n"
                    << "[2]     Rectangular Prism" << "\n"
                    << "[3]     Cone" << "\n"
                    << "[4]     Cylinder" << "\n"
                    << "[5]     Sphere" << "\n"
                    << "[6]     Pyramid" << "\n";

            do {
                std::cout << "\n" << "Entered number: ";
                std::cin >> vol;

                if (vol >= 0 && vol <= 6){
                    if (vol == 0){
                    	clearConsole();
                        goto start;
                	}
                    if (vol >= 1 && vol <=6){
                        clearConsole();
                        break;
                    }
                }else
                    std::cout << "Invalid number! Please enter between 1-6!" <<"\n";

            } while (vol < 0 || vol > 6);
            
            //Calculation of volumes
            switch (vol){
                case 1:

                    std::cout << "Enter the value of the Cube!" << "\n"
                            << "Entered side: ";
                    std::cin >> sq;

                    sqv = sq*sq*sq;

                    std::cout << "The calculated volume is " << sqv << "m^3" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;

                case 2:
                
                    std::cout << "Enter the values of the Rectangular Prism!" << "\n"
                            << "Entered length: ";
                    std::cin >> rpl;
                    std::cout << "Entered width: ";
                    std::cin >> rpw;
                    std::cout << "Entered height: ";
                    std::cin >> rph;

                    rpv = rpl*rpw*rph;

                    std::cout << "\n" << "The calculated volume is " << rpv << "m^3" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;

                case 3:
                
                    std::cout << "Enter the values of the Cone!" << "\n"
                            << "Entered radius: ";
                    std::cin >> cr;
                    std::cout << "Entered height: ";
                    std::cin >> ch;

                    cv = 3.14*cr*cr*ch/3;

                    std::cout << "\n" << "The calculated volume is " << cv << "m^3" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;

                case 4:
                
                    std::cout << "Enter the values of the Cylinder!" << "\n"
                            << "Entered radius: ";
                    std::cin >> cyr;
                    std::cout << "Entered height: ";
                    std::cin >> cyh;

                    cyv = 3.14*cyr*cyr*cyh;

                    std::cout << "\n" << "The calculated volume is " << cyv << "m^3" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;
                
                case 5:
                
                    std::cout << "Enter the values of the Sphere!" << "\n"
                            << "Entered radius: ";
                    std::cin >> spr;

                    spv = 3.14*4*spr*spr*spr/3;

                    std::cout << "\n" << "The calculated volume is " << spv << "m^3" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;

                case 6:
                
                    std::cout << "Enter the values of the Pyramid!" << "\n"
                            << "Entered length: ";
                    std::cin >> pyl;
                    std::cout << "Entered width: ";
                    std::cin >> pyw;
                    std::cout << "Entered height: ";
                    std::cin >> pyh;

                    pyv = pyl*pyw*pyh/3;

                    std::cout << "\n" << "The calculated volume is " << pyv << "m^3" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;
            }
            break;

        //Calculating the areas
        case 2:

            std::cout << "\n" << "Calculating the Area!" << "\n"
                    << "Enter the shape you want to calculate (between 1-4):" << "\n"
                    << "[0]     << BACK" << "\n"
                    << "[1]     Square" << "\n"
                    << "[2]     Rectangle" << "\n"
                    << "[3]     Circle" << "\n"
                    << "[4]     Triangle" << "\n";

            do {
                std::cout << "\n" << "Entered number: ";
                std::cin >> ar;

                if (ar >= 0 && ar <= 4){
                    if (ar == 0){
                    	clearConsole();
                        goto start;
                    }
                    if (ar >= 1 && ar <= 4){
                        clearConsole();
                        break;
                    }
                }else
                    std::cout << "Invalid number! Please enter between 1-4!" <<"\n";

            } while (ar < 0 || ar > 4);
            
            switch (ar){
                case 1:
                
                    std::cout << "Enter the values of the Square" << "\n"
                            << "Entered sides: ";
                    std::cin >> sq;

                    sqa = sq*sq;

                    std::cout << "\n" << "The calculated area is " << sqa << "m^2" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;

                case 2:

                    std::cout << "Enter the values of the Rectangle!" << "\n"
                            << "Entered length: ";
                    std::cin >> rpl;
                    std::cout << "Entered width: ";
                    std::cin >> rpw;

                    rpa = rpl*rpw;

                    std::cout << "\n" << "The calculated area is " << rpa << "m^2" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;

                case 3:

                    std::cout << "Enter the values of the Circle!" << "\n"
                            << "Entered radius: ";
                    std::cin >> spr;

                    spa = 3.14*spr*spr;

                    std::cout << "\n" << "The calculated area is " << spa << "m^2" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;

                case 4:

                    std::cout << "Enter the values of the Triangle!" << "\n"
                            << "Entered base: ";
                    std::cin >> trb;
                    std::cout << "Entered height: ";
                    std::cin >> trh;

                    tra = trh*trb/2;

                    std::cout << "\n" << "The calculated area is " << tra << "m^2" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;
            }
            break;

        //Calculating the surface areas
        case 3:

            std::cout << "\n" << "Calculating the Surface Area!" << "\n"
                    << "Enter the shape you want to calculate (between 1-6):" << "\n"
                    << "[0]     << BACK" << "\n"
                    << "[1]     Cube" << "\n"
                    << "[2]     Rectangular Prism" << "\n"
                    << "[3]     Cone" << "\n"
                    << "[4]     Cylinder" << "\n"
                    << "[5]     Sphere" << "\n"
                    << "[6]     Pyramid" << "\n";

            do {
                std::cout << "\n" << "Entered number: ";
                std::cin >> sar;

                if (sar >= 0 && sar <= 6){
                    if (sar == 0){
                    	clearConsole();
                        goto start;
                    }
                    if (sar >= 1 && sar <=6){
                        clearConsole();
                        break;
                    }
                }else
                    std::cout << "Invalid number! Please enter between 1-6!" <<"\n";

            } while (sar < 0 || sar > 6);
            
            switch (sar){
                case 1:
                
                    std::cout << "Enter the values of the Cube" << "\n"
                            << "Entered sides: ";
                    std::cin >> sq;

                    sqas = 6*sq*sq;

                    std::cout << "\n" << "The calculated area is " << sqas << "m^2" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;

                case 2:
                
                    std::cout << "Enter the values of the Rectangular Prism!" << "\n"
                            << "Entered length: ";
                    std::cin >> rpl;
                    std::cout << "Entered width: ";
                    std::cin >> rpw;
                    std::cout << "Entered height: ";
                    std::cin >> rph;

                    rpas = 2*rpw*rpl + 2*rph*rpl + 2*rph*rpw;

                    std::cout << "\n" << "The calculated area is " << rpas << "m^2" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;

                case 3:
                
                    std::cout << "Enter the values of the Cone!" << "\n"
                            << "Entered radius: ";
                    std::cin >> cr;
                    std::cout << "Entered slanted height: ";
                    std::cin >> csh;

                    cas = 3.14*cr*(cr + csh);

                    std::cout << "\n" << "The calculated area is " << cas << "m^2" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;
                
                case 4:
                
                    std::cout << "Enter the values of the Cylinder!" << "\n"
                            << "Entered radius: ";
                    std::cin >> cyr;
                    std::cout << "Entered height: ";
                    std::cin >> cyh;

                    cyas = 2*3.14*cyr*cyh + 2*3.14*cyr*cyr;

                    std::cout << "\n" << "The calculated area is " << cyas << "m^2" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;

                case 5:
                
                    std::cout << "Enter the values of the Sphere!" << "\n"
                            << "Entered radius: ";
                    std::cin >> spr;

                    spas = 4*3.14*spr*spr;

                    std::cout << "\n" << "The calculated area is " << spas << "m^2" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;

                case 6:
                
                    std::cout << "Enter the values of the Pyramid!" << "\n"
                            << "Entered length: ";
                    std::cin >> pyl;
                    std::cout << "Entered width: ";
                    std::cin >> pyw;
                    std::cout << "Entered height: ";
                    std::cin >> pyh;

                    pyas = pyl*pyw + pyl*sqrt((pyw*pyw/4) + pyh*pyh) + pyw*sqrt((pyl*pyl/4) + pyh*pyh);

                    std::cout << "\n" << "The calculated area is " << pyas << "m^2" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;
            }
            break;

        //Calculating the perimeters
        case 4:

            std::cout << "\n" << "Calculating the Perimeter!" << "\n"
                    << "Enter the shape you want to calculate (between 1-4):" << "\n"
                    << "[0]     << BACK" << "\n"
                    << "[1]     Triangular (3-sided shapes)" << "\n"
                    << "[2]     Quadrilateral (4-sided shapes)" << "\n"
                    << "[3]     Pentagonal (5-sided shapes)" << "\n"
                    << "[4]     Hexagonal (6-sided shapes)" << "\n";

            do {
                std::cout << "\n" << "Entered number: ";
                std::cin >> per;

                if (per >= 0 && per <= 4){
                    if (per == 0){
                    	clearConsole();
                        goto start;
                    }
                    if (per >= 1 && per <=4){
                        clearConsole();
                        break;
                    }
                }else
                    std::cout << "Invalid number! Please enter between 1-4!" <<"\n";

            } while (per < 0 || per > 4);
            
            switch (per){
                case 1:
                
                    std::cout << "Enter the values of the Triangular Shape!" << "\n"
                            << "Entered side 1: ";
                    std::cin >> s1;
                    std::cout << "Entered side 2: ";
                    std::cin >> s2;
                    std::cout << "Entered side 3: ";
                    std::cin >> s3;

                    sper = s1 + s2 + s3;

                    std::cout << "\n" << "The calculated perimeter is " << sper << "m" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y'){
                                sper = 0;
                                s1 = 0;
                                s2 = 0;
                                s3 = 0;
                                s4 = 0;
                                s5 = 0;
                                s6 = 0;
                                goto start;
                            }
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;

                case 2:
                
                    std::cout << "Enter the values of the Quadrilateral Shape!" << "\n"
                            << "Entered side 1: ";
                    std::cin >> s1;
                    std::cout << "Entered side 2: ";
                    std::cin >> s2;
                    std::cout << "Entered side 3: ";
                    std::cin >> s3;
                    std::cout << "Entered side 4: ";
                    std::cin >> s4;

                    sper = s1 + s2 + s3 + s4;

                    std::cout << "\n" << "The calculated perimeter is " << sper << "m" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y'){
                                sper = 0;
                                s1 = 0;
                                s2 = 0;
                                s3 = 0;
                                s4 = 0;
                                s5 = 0;
                                s6 = 0;
                                goto start;
                            }
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;

                case 3:
                
                    std::cout << "Enter the values of the Pentagonal Shape!" << "\n"
                            << "Entered side 1: ";
                    std::cin >> s1;
                    std::cout << "Entered side 2: ";
                    std::cin >> s2;
                    std::cout << "Entered side 3: ";
                    std::cin >> s3;
                    std::cout << "Entered side 4: ";
                    std::cin >> s4;
                    std::cout << "Entered side 5: ";
                    std::cin >> s5;

                    sper = s1 + s2 + s3 + s4 + s5;

                    std::cout << "\n" << "The calculated perimeter is " << sper << "m" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y'){
                                sper = 0;
                                s1 = 0;
                                s2 = 0;
                                s3 = 0;
                                s4 = 0;
                                s5 = 0;
                                s6 = 0;
                                goto start;
                            }
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;
                
                case 4:
                
                    std::cout << "Enter the values of the Hexagonal Shape!" << "\n"
                            << "Entered side 1: ";
                    std::cin >> s1;
                    std::cout << "Entered side 2: ";
                    std::cin >> s2;
                    std::cout << "Entered side 3: ";
                    std::cin >> s3;
                    std::cout << "Entered side 4: ";
                    std::cin >> s4;
                    std::cout << "Entered side 5: ";
                    std::cin >> s5;
                    std::cout << "Entered side 6: ";
                    std::cin >> s6;

                    sper = s1 + s2 + s3 + s4 + s5 + s6;

                    std::cout << "\n" << "The calculated perimeter is " << sper << "m" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y'){
                                sper = 0;
                                s1 = 0;
                                s2 = 0;
                                s3 = 0;
                                s4 = 0;
                                s5 = 0;
                                s6 = 0;
                                goto start;
                            }
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;
            }
            break;
        
        //Calculating trigonometry
        case 5:

            std::cout << "\n" << "Calculating the Trigonometry!" << "\n"
                    << "Enter the values you want to calculate (between 1 and 2):" << "\n"
                    << "[0]     << BACK" << "\n"
                    << "[1]     Degrees" << "\n"
                    << "[2]     Finding the hypotenuse" << "\n";

            do {
                std::cout << "\n" << "Entered number: ";
                std::cin >> trig;

                if (trig >= 0 && trig <= 2){
                    if (trig == 0){
                    	clearConsole();
                        goto start;
                    }
                    if (trig >= 1 && trig <=2){
                        clearConsole();
                        break;
                    }
                }else
                    std::cout << "Invalid number! Please enter either 1 and 2!" <<"\n";

            } while (trig < 0 || trig > 2);
            
            switch (trig){
                case 1:

                     std::cout << "\n" << "Calculating the Degrees!" << "\n"
                    << "Enter the values you want to calculate (between 1-3):" << "\n"
                    << "[0]     << BACK" << "\n"
                    << "[1]     Sine (Opposite/Hypotenuse)" << "\n"
                    << "[2]     Cosine (Adjacent/Hypotenuse)" << "\n"
                    << "[3]     Tangent (Opposite/Adjacent)" << "\n";

                    do {
                        std::cout << "\n" << "Entered number: ";
                        std::cin >> sct;

                        if (sct >= 0 && sct <= 3){
                        if (sct == 0)
                            goto start;
                        if (sct >= 1 && sct <=3)
                            break;
                        }else
                        std::cout << "Invalid number! Please enter either 1 and 2!" <<"\n";

                    } while (sct < 0 || sct > 3);

                    switch (sct){
                        case 1:

                            std::cout << "Enter the values for Sine!" << "\n"
                                    << "Entered opposite side: ";
                            std::cin >> opp;
                            std::cout << "Entered hypotenuse side: ";
                            std::cin >> hyp;

                            deg = asin(opp / hyp)* 180/3.14;

                            std::cout << "\n" << "The calculated value is " << deg << " degrees" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                            do {
                                std::cin >> cont;
                                clearConsole();
                                cont = toupper(cont);

                                if (cont == 'Y' || cont == 'N'){
                                    if (cont == 'Y'){
                                        opp = 0;
                                        hyp = 0;
                                        adj = 0;
                                        deg = 0;
                                        goto start;
                                    }
                                    else
                                        break;
                                } else
                                    std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                            << "Entered Input: ";
                            } while (cont != 'Y' || cont != 'N');
                            break;
                        
                        case 2:

                            std::cout << "Enter the values for Cosine!" << "\n"
                                    << "Entered adjacent side: ";
                            std::cin >> adj;
                            std::cout << "Entered hypotenuse side: ";
                            std::cin >> hyp;

                            deg = acos(adj / hyp)* 180/3.14;

                            std::cout << "\n" << "The calculated value is " << deg << " degrees" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                            do {
                                std::cin >> cont;
                                clearConsole();
                                cont = toupper(cont);

                                if (cont == 'Y' || cont == 'N'){
                                    if (cont == 'Y'){
                                        opp = 0;
                                        hyp = 0;
                                        adj = 0;
                                        deg = 0;
                                        goto start;
                                    }
                                    else
                                        break;
                                } else
                                    std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                            << "Entered Input: ";
                            } while (cont != 'Y' || cont != 'N');
                            break;

                        case 3:

                            std::cout << "Enter the values for Tangent!" << "\n"
                                    << "Entered opposite side: ";
                            std::cin >> opp;
                            std::cout << "Entered adjacent side: ";
                            std::cin >> adj;

                            deg = atan(opp / adj)* 180/3.14;

                            std::cout << "\n" << "The calculated value is " << deg << " degrees" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                            do {
                                std::cin >> cont;
                                clearConsole();
                                cont = toupper(cont);

                                if (cont == 'Y' || cont == 'N'){
                                    if (cont == 'Y'){
                                        opp = 0;
                                        hyp = 0;
                                        adj = 0;
                                        deg = 0;
                                        goto start;
                                    }
                                    else
                                        break;
                                } else
                                    std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                            << "Entered Input: ";
                            } while (cont != 'Y' || cont != 'N');
                            break;
                    }
                    break;

                case 2:

                    std::cout << "Enter the values for calculating Hypotenuse!" << "\n"
                            << "Entered side A: ";
                    std::cin >> a;
                    std::cout << "Entered side B: ";
                    std::cin >> b;

                    c = sqrt(a*a + b*b);

                    std::cout << "\n" << "The calculated length of hypotenuse is " << c << "m" << "\n"
                            << "Do you want to use the program again? Typing Y will teleport you to main menu. (Y/N): ";
                    
                    do {
                        std::cin >> cont;
                        clearConsole();
                        cont = toupper(cont);

                        if (cont == 'Y' || cont == 'N'){
                            if (cont == 'Y')
                                goto start;
                            else
                                break;
                        } else
                            std::cout << "Invalid input! Please enter either Y or N!" << "\n"
                                    << "Entered Input: ";
                    } while (cont != 'Y' || cont != 'N');
                    break;
            }
            break;

    }
    
    //Ending of program
    return 0;
}
