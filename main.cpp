/* Selection IF, Integer Arrays and replacement (Lab 3 Week 3)
 Created by @Anlil Iwas on 02/06/24.
 New code: Arrrays, manipulating arrays, for loops, while loops.
 Objective: Create a program that will allow the user to enter a number they see and replace that number by manipulating the array.
 */

#include <iostream>
using namespace std; // only 2 header files needed.
void display();
void game(); //2 player game
void game2(); //1 player game vs AI
bool checkWin();
void checkWhere();
char array [9]  = {'0','1','2','3','4','5','6','7','8'}; // array of 9 elements. global variables




int main() {


  int choice;
  //array is initialized  with characters
 

  cout<<" Welcome to Tic Tac Toe\n select either 1 or 2"<<endl;
  cout<<"Please select which you would like to play\n 1) vs AI\n 2) 2 Player"<<endl;
  cin>>choice;
  if(choice == 1)
  {
    display();
    game2();
  }
  else{
    display();
    game();
    
  }
  
    
  
  
 


 
  cout<<"\n";



  //below is the second part of the code, you can think of this code as 2 different parts, one part is to print and intialize an array, the other part is manipulating it

  



}



 











void game()
{
  //now, time to manipulate the array based on user inout
  int x; //this variable is what the user will input
  int o;
  int z = 0; //this variable is needed to intialize the while loop 


  while (z < 9) //setting a boundary for the while loop, so that it will not go over the arrays limit of 9 characters. remember, I can change this to z<9 same thing

    {
      startX:

      cout<<"\u001b[34mchoose a number on display player x"<<endl;
      //interacting with user
      cin>>x;//store the variable
    
      if(array[x] != 'x' and array[x] != 'o') //if the array is not equal to x and o, then it will print out the array.
        { 
          array[x] = 'x'; //if the array is not equal to x, then it will print out the
        
        display();
          if (checkWin())
          {
            
            cout<<"player x wins, nicely done. "<<endl;
             checkWhere();
           
            break;
          }
          



          z++;



        }
       else
        {
          cout<<"This spot is already filled" <<endl;
          goto startX;

        }
      if(z == 9)
      {
        cout<<"It is a tie"<<endl; //added here instead of the end because my while loop would not stop and go infintely if all spots were filled, i couldnt figure out how to stop it so i added this here
        break;
      }

      startO:
      cout<<"\u001b[31mchoose a number on display player o"<<endl;
      cin>>o; //store the variable

      if(array[o] != 'o' and array[o] != 'x') //if the array is not equal to x and o, then it will print out the array.
        { 
          array[o] = 'o'; //if the array is not equal to x, then it will print out the
        display();
        
          
          if (checkWin())
          {
            
            cout<<"player o wins, Nicely done"<<endl;
            checkWhere();
           
            break;
          }



          z++;



        }
       else
        {
          cout<<"This spot is already filled" <<endl;
          goto startO;
          

        }

     





  
}
  
 
    
}


bool checkWin()
{
 
  // Check rows
  cout << "Checking for win..." << endl; //debugging code to see if the function is working
  if (array[0] == array[1] && array[1] == array[2]) {
      return true;
      
  }
  if (array[3] == array[4] && array[4] == array[5]) {
      return true;
  }
  if (array[6] == array[7] && array[7] == array[8]) {
      return true;
  }

  // Check columns
  if (array[0] == array[3] && array[3] == array[6]) {
      return true;
  }
  if (array[1] == array[4] && array[4] == array[7]) {
      return true;
  }
  if (array[2] == array[5] && array[5] == array[8]) {
      return true;
  }

  // Check diagonals
  if (array[0] == array[4] && array[4] == array[8]) {
      return true;
  }
  if (array[2] == array[4] && array[4] == array[6]) {
      return true;
  }
  cout << "No win detected." << endl; //debug statments to check if the code is working
  return false;
}
//end of second function





//function to print the board 
void display()
{
  cout << " " << array[0] << " | " << array[1] << " | " << array[2] << endl;
  cout << "---|---|---" << endl;
  cout << " " << array[3] << " | " << array[4] << " | " << array[5] << endl;
  cout << "---|---|---" << endl;
  cout << " " << array[6] << " | " << array[7] << " | " << array[8] << endl;
}


//function below is to check Where the user won, if they won, it will print out the location of the winning characters

void checkWhere()
{
  //check where the user won
  if (array[0] == array[1] && array[1] == array[2])
  {
    cout<<"you won in the top row"<<endl;
  }
  if (array[3] == array[4] && array[4] == array[5])
  {
    cout<<"you won in the middle row"<<endl;
  }
  if (array[6] == array[7] && array[7] == array[8])
  {
    cout<<"you won in the bottom row"<<endl;
  }
  if (array[0] == array[3] && array[3] == array[6])
  {
    cout<<"you won in the left first column"<<endl;
  }
  if (array[1] == array[4] && array[4] == array[7])
  {
    cout<<"you won in the middle column"<<endl;
  }
  if (array[2] == array[5] && array[5] == array[8])
  {
    cout<<"you won in the right column"<<endl;
  }
  if (array[0] == array[4] && array[4] == array[8])
  {
    cout<<"you won in the left diagonal"<<endl;
    
  }
  if (array[2] == array[4] && array[4] == array[6])
  {
    cout<<"you won in the right diagonal"<<endl;
  }
}
void game2()
{
  int x; //this variable is what the user will input
  int o;
  int z = 0; //this variable is needed to intialize the while loop 


  while (z <= 8) //setting a boundary for the while loop, so that it will not go over the arrays limit of 9 characters. remember, I can change this to z<9 same thing

    {
      startX:

      cout<<"\u001b[34mchoose a number on display player x"<<endl;
      //interacting with user
      cin>>x;//store the variable

      if(array[x] != 'x' and array[x] != 'o') //if the array is not equal to x and o, then it will print out the array.
        { 
          array[x] = 'x'; //if the array is not equal to x, then it will print out the

        display();
          if (checkWin())
          {

            cout<<"player x wins, nicely done. "<<endl;
             checkWhere();
            break;
          

           
          }
        




          z++;



        }
       else
        {
          cout<<"This spot is already filled" <<endl;
          goto startX;

        }
      if(z == 9)
      {
        cout<<"It is a tie"<<endl; //added here instead of the end because my while loop would not stop and go infintely if all spots were filled, i couldnt figure out how to stop it so i added this here
        break;
      }

      startO:
       o = rand() % 9; //random number generator

      if(array[o] != 'o' and array[o] != 'x') //if the array is not equal to x and o, then it will print out the array.
        { 
          array[o] = 'o'; //if the array is not equal to x, then it will print out the
        cout<<"\n\n";
        cout<<"\u001b[31mAI Turn: "<<endl;
        display();


          if (checkWin())
          {

            cout<<"player o wins, Nicely done"<<endl;
            checkWhere();

            break;
          }



          z++;



        }
       else
        {
          
          goto startO;


        }








    }  
 
}




