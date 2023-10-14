o register                   |"<<endl;
    cout<<"\t| Press 3 to forgot your password       |"<<endl;
    cout<<"\t| Press 4 to exit                       |"<<endl;
    cout<<"\n\t\t\t Please enter your choice : ";
    cin>>c;
    cout<<endl;
    switch(c)
    {
        case 1 :
         login();
         break;

        case 2 :
         registration();
         break;

        case 3 :
         forgot();
         break;
      case 4:
       cout<<"\t\t\t Please select from the options given above \n"<<endl;
       break;

      default :
        system("cls");
        cout<<"\t\t\t Please select from the options given above\n"<<endl;
        main(); 
       }

}
void login()
{
    int count;
    string userId, password, id, pass;
    system("cls");
    cout<<"\t\t\t Please enter the unsername and password : "<<endl;
    cout<<"\t\t\t USERNAME :  ";
    cin>>userId;