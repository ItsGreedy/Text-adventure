#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <conio.h>

using namespace std;


int main(int argc, char** argv)
{
    //declarations
    bool startingb = false;
    bool intro = false;
    bool start = false;
    
  
    int choiceOne_Path;
    //Function for choice
    int choice;
    
   
  
    retry:
        cout << "*Choose your Story*" << endl;
        cout << "1 - Sam the Penguin" << endl;
        cout << "2 - Bob the Bird" << endl;
     //Choose who to play as
  
        cout << "\nChoose wisely: ";
        cin >> choiceOne_Path;
        if (choiceOne_Path == 1)
        {
            cout << "You have chosen the legendary penguin Sam!!" << endl;
        }
        else if (choiceOne_Path == 2) 
        {
            //bob doesn't actually have a working story
            cout << "Bobs story currently in development" << endl;
            goto retry;
           
            //loops until they choose the right one

        }

        else 
        {
            cout << "Please use inputs specified. Try again." << endl;
            goto retry;
        }

        cout << "\nPress any key to continue..." << endl;

        _getch(); 



        do
        {
            string introArray[] = {"Introduction", "Start Game", "Exit"};
             
            cout << "Please Select: " << endl;
            
            for (int i = 0; i<3; i++)
            {
                cout << i+1 << " - " << introArray[i] << endl;
            }
            //small array for intro menu for game
            string selection;
            cout<< ">";
            cin >> selection;
            //allows for user input
            if (selection == "1")
                //if and else statements for picking an option
            {

                do
                {
                    //story
                    cout << "Tiny creatures run the world. Worms, lady bugs, ans snails." << endl;
                    cout << "The leader, Snailington the Snail. He has powers of a god." << endl;
                    cout << "Will you be able to survive this horrifying world?" << endl;
                    cout << "Let's find out, Sam the Penguin!!" << endl;
                    cout << "" << endl;
                    cout << "" << endl;
                    cout << "- press 1 to go back to main menu -" << endl;
                    cout << ">" << endl;
                    cin >> selection;

                    if (selection == "1")
                    {
                        startingb = true;
                        intro = true;
                    }
                    else
                    {
                        cout << "Error! Please press 1 to go to the main menu! Try again." << endl;
                        cin.ignore(2);
                        intro = false;
                    }
                }while (intro == false);
            }  
            else if (selection == "2")
            {
                startingb =false;
                start = true;
            }
            else if (selection == "3")
            {
                startingb = false;
                exit(0);
            }
            else
            {
                bool exit = false;
                do
                {
                    cout <<"Your input is incorrect." << endl;;
                    cout <<"press 1 and enter to try again." << endl;
                    cout << ">" << endl;
                    cin >> selection;

                    if (selection == "1")
                    {
                        exit = true;
                        startingb = true;
                    }
                    else
                    {
                        exit = false;

                    }
                }while (exit == false);
            }



        }while (startingb == true || start != true);
        

                //more declarations
            string character = "";
            string weapon = "";
            int damage = 0;
            int elife = 100;
            int slife = 100;
            bool running = true;
            bool change = false;
            do{




                do
                {

                    //chooses weapon 
                    string weaponArray[] = {"Legendary Ice blade     (Damage 40,  Killrate 80%)", "Bowtie                  (Damage 45,  Killrate 70%)" , "Wand of God             (Damage 60,  Killrate 60%)", "Fish on stick           (Damage 100, Killrate 30%)"};

                    cout << "Please Select Weapon: " << endl;

                    for (int i = 0; i<4; i++)
                    {
                        cout << i+1 << " - " << weaponArray[i] << endl;
                    }

                    cout << ">";
                    cin >> weapon;
                    if (weapon == "1")
                    {
                        weapon = "Legendary Ice Blade";
                        damage = 40;

                    }
                    else if (weapon == "2")
                    {
                        weapon = "Bow Tie";
                        damage = 45;
                    }
                    else if (weapon == "3")
                    {
                        weapon = "Wand of God";
                        damage = 60;
                    }
                    else if (weapon == "4")
                    {
                        weapon = "Fish on Stick";
                        damage = 100;
                    }
                    else
                    {
                        cout << "No weapon found. Press enter and try again.";

                        cin.ignore(2);
                        // 2 enter spaces
                        weapon = "";
                    }


                    //loops back to weapons

                }while (weapon == "");


                string yesno;
                //creates string for yes and no
                do
                {


                    //creating new function

                    cout << "Selected weapon: " << weapon << endl;
                    cout << "" << endl;

                    cout << "Do you want to change anything before the game starts?" << endl;
                    cout << "If NO press 1, if YES press 2" << endl;

                    cout << ">";
                    cin >> yesno;
                    if (yesno == "1")
                    {
                        change = false;
                    }
                    //If they want to change their weapon before they start the game, they can
                    else if (yesno == "2")
                    {
                        change = true;    
                    }
                    else
                    {
                        cout << "Please press enter to try again." << endl;
                        cin.ignore(2);
                        yesno = "";
                    }
                } while (yesno == "");
             }while (change == true); 

        
        string attackdodge;
        //battle mechanic
        
        cout << "Sam the Penguin!!" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "It's up to you!!" << endl;
        cout << "Defeat all incoming clones of Snailington until he's destroyed!" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "Attack or dodge incoming attacks from the enemy!" << endl;
        cout << "" << endl;
        cout << "Waddle your way to victory!!!" << endl;
        
        cin.ignore(1);
        
        cout << "********************************************" << endl;
        cout << "" << endl;
        
        
        do{
            cout << "Choose 1 to attack or 2 to dodge" << endl;
            cout << ">";
            cin >> attackdodge;
            
            
            if (attackdodge == "1" || attackdodge == "2")
            {
                
                int killrate = (rand()%100) +1;
                //random num generator (the percent the snail and sam gets hit)
                
                if(attackdodge == "1")
                {
                    //if it is a ice blade, it will deduct damage of ice blade from life points
                    if(weapon == "Legendary Ice Blade")
                    {
                        //it has a 80% success rate to hit
                        if (killrate > 0 && killrate <=80)
                        {
                            cout << "You ice slashed the snail" << endl;
                            elife = elife - damage;
                            //subtracts damage from hp
                            if (elife <= 0)
                            {
                                elife = 0;
                            }
                            cout << "Snail life = " << elife << endl;
                        }
                        else if (killrate >= 80 && killrate <= 100)
                        {
                            elife = elife;
                            cout << "Oh no, you missed!" << endl;
                            cout << "Snail life = " << elife << endl;
                        }
                        if (killrate > 0 && killrate <= 30)
                        {
                            cout << "You got slugged" << endl;
                            slife = slife - 50;
                            if (slife<0)
                            {
                                slife = 0;
                            }
                            cout << "Your life = " << slife << endl;
                        }
                        else if (killrate > 30 && killrate <= 100)
                        {
                            slife = slife;
                            cout << "Your life = " << slife << endl;
                        }
                    }
                    if (weapon == "Bowtie")
                    {
                        // it has a 70% chance to hit 
                        if(killrate > 0 && killrate <= 70)
                        {
                            cout << "You slapped the snail" << endl;
                            elife = elife - damage;
                            if (elife <=0)
                            {
                                elife = 0;
                            }
                            cout << "Snail life = " << elife << endl;
                        }
                        else if (killrate >= 80 && killrate <= 100)
                        {
                            elife = elife;
                            cout << "Oh no, you missed!" << endl;
                            cout << "Snail life = " << elife << endl;
                        }
                        if(killrate > 0 && killrate <=30)
                        {
                            cout << "You got slugged" << endl;
                            slife = slife - 50;
                            if (slife<0)
                            {
                                slife = 0;
                            }
                            cout << "Your life = " << slife << endl;
                        }
                        else if (killrate > 30 && killrate <=100)
                        {
                            slife = slife;
                            cout << "Your life = " << slife << endl;
                        }
                    }
                    if (weapon == "Wand of God")
                    {
                        //it has a 60% chance to hit
                        if(killrate > 0 && killrate <= 60)
                        {
                            cout << "You throw the wand at the snails" << endl;
                            elife = elife - damage;
                            if (elife <= 0)
                            {
                                elife = 0;
                            }
                            cout << " Snail life = " << elife << endl;
                        }
                        else if (killrate >= 70 && killrate <= 100)
                        {
                            elife = elife;
                            cout << "Oh no, you missed!" << endl;
                            cout << "Snail life = " << elife << endl;
                        }
                        if (killrate > 0 && killrate <= 30)
                        {
                            cout<< "You got slugged" << endl; 
                            slife = slife -50;
                            if (slife<0)
                            {
                                slife = 0;
                            }
                            cout << "Your life = " << slife << endl;
                        }
                        else if(killrate > 30 && killrate <= 100)
                        {
                            slife = slife;
                            cout << "Your life = " << slife << endl;
                        }
                    }
                    
                    if (weapon == "Fish on Stick")
                    {
                        // it has a 30% chance to hit
                        if (killrate > 0 && killrate <= 30)
                        {
                            cout << "You shot a laser from the fishes mouth" << endl;
                            elife - elife - damage;
                            if (elife <=0)
                            {
                                elife = 0;
                            }
                            cout << "Snail life = " << elife << endl;
                        }
                        else if (killrate >= 40 && killrate <= 100)
                        {
                            elife = elife;
                            cout << "Oh no, you missed!" << endl;
                            cout << "Snail life = " << elife << endl;
                        }
                        if (killrate > 0 && killrate <= 30)
                        {
                            cout << "You got slugged" << endl;
                            slife = slife - 50;
                            if (slife<0)
                            {
                                slife = 0;
                            }
                            cout << "Your life = " << slife << endl;
                        }
                        else if (killrate > 30 && killrate <=100)
                        {
                            slife = slife;
                            cout << "Your life = " << slife << endl;
                        }
                    }
                }
                
                if (attackdodge == "2")
                {
                    if (weapon == "Legendary Ice Blade" || weapon == "Bowtie" || weapon == "Wand of God" || weapon == "Fish on Stick")
                    {
                        //specifies which weapon will do what it is supposed
                        if (killrate > 0 && killrate <= 30)
                        {
                            cout << "You got Slugged" << endl;
                            slife = slife - 50;
                            if (slife < 0)
                            {
                                slife = 0;
                            }
                            cout << "Your life = " << slife << endl;
                        }
                        else if (killrate > 30 && killrate <= 100)
                        {
                            slife = slife;
                            cout << "Nice dodge!" << endl;
                            cout << "Your life = " << slife << endl;
                        }
                    }
                }
            }
            else
            {
                cout <<"Error: Please enter a valid input. Press enter and try again." << endl;
                //wrong input
                cin.ignore(2);
                //press enter twice
            };
        }while ((elife != 0) && (slife !=0));
        


             cout << "***********************************************" << endl;
             cout << string(10, '\n');
             
             //these all decide which victory text plays when you win or lose, or come to a draw.
            if (slife > elife)
            {
                 cout << "You defeated Snailington!!!" << endl;
                 cout << "You win!!!" << endl;
            }
            else if (slife < elife)
            {
                 cout << "Snailington Slugged you into the Shadow Realm!" << endl;
                 cout << "You lost..." << endl;
             }
            else if (slife == elife)
            {
                 cout << "You are at a standstill with Snailington..." << endl;
                 cout << "It is a draw!" << endl;
            }
        
        
   
        
        cout << "Enter 1 to go back to the main menu." << endl;
        cout << "Enter 2 to quit game." << endl;
       
        
        cout << ">";
        string backquit;
        do
        {  
            cin >> backquit;
        }while (backquit != "1" && backquit != "2");
        //brings you back to the main menu
        if (backquit == "1")
        {
            slife = 100;
            elife = 100;
            goto retry;
        
        }
        else if (backquit == "2")
        {
            cout << "Goodbye!" << endl;
            exit(0);
        }
        
       
        exit(0);
//end
        return 0;
}

