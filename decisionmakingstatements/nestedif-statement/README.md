# nested if statement 

* An if-else statement within another if-else statement is known as nested if statement.
* This is used when an action has to be peformed based on many decisions.Hence,it is called as multi-way decision statement.

The syntax is shown below:

      if(expr1)
      {
        if(expr2)
            statement1;
        else    
            statement2;
      }
      else
      {
        if(expr3)
            statement3;
        else
            statement4;
      }
      Rest of the code;
      
 * The expression is evaluated to true or false.Only if the expr1 is true then true part statements will be executed where again it checks for expr2 otherwise false part statements are executed.
 
 ![Untitled Diagram drawio (3)](https://user-images.githubusercontent.com/67837564/181300708-54cc0f59-5652-440c-a1c4-493a9362936a.png)
