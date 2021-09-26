/*Write a menu-driven program that implement following operations (using separate functions) on a linear array:
1.     Insert a new element at end as well as at a given position.
2.     Delete an element from a given whose value is given or whose position is given.
3.     To find the location of a given element.
4.     To display the elements of the linear array.*/

class WS
{
    int arr[] = { 1,2,3,4,5,6,0,0,0,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    void inst( );
    void del( );
    void loc( );
    void display( );

    void main ( )
    {
        WS obj;
        int ch=0;
        do
        {
            print('press 1 to insert element ');
            print('press 2 to delete element ');
            print('press 3 to locate element ');
            print('press 4 to display elements ');
            cin >>ch;

            if(ch==1)
            obj.inst();
            else if( ch==2)
            obj.del();
            else if(ch==3)
            obj.loc();
            else if(ch==4)
            obj.display();


            print('To continue the operations press 1/0');
            cin >>ch;

            /* code */
        } while (ch==1);
        
    }

void inst() 
{   int x, int pos
    printf(' enter integer and position ')        
     cin >> x;
     cin >>pos;
    int i;
      n++; 
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
  
     arr[pos - 1] = x;
 
    }



}


