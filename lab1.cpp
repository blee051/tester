 // string list1_input;
    // getline(cin,list1_input);
    
    // cout << list1_input << endl;
    
    // string value;
    // int temp;
    // while(list1_input.size() > 0)
    // {
    //     int space_idx = list1_input.find(' ');
    //     if(space_idx == -1)
    //     {
    //          value = list1_input;
    //          if(value != " ")
    //          {
    //             temp = stoi(value);
    //             list1.push_back(temp);
    //          }
    //          break;
    //     }
    //     value = list1_input.substr(0,space_idx);
    //     //for loop
    //     //find new index where there is a number 0-9
    //     for(int i = space_idx; list1_input.at(i) <= '0' 
    //         && list1_input.at(i) >= '9'; ++space_idx, ++i ) 
    //     {}
        
    //     list1_input = list1_input.substr(space_idx);
        
    //     if(value != " ")
    //     {
    //         temp = stoi(value);
    //         list1.push_back(temp);
    //     }
    // }
    
/*    
    cout << "Enter list 2: " << endl;
    
    string list2_input;
    getline(cin,list2_input);
    
    cout << list2_input << endl;
    
    string value2;
    int temp2;
    while(list2_input.size() > 0)
    {
        int space_idx = list2_input.find(' ');
        if(space_idx == -1)
        {
             value2 = list2_input;
             if(value2 != " ")
             {
                temp2 = stoi(value2);
                list2.push_back(temp2);
             }
             break;
        }
       
        
        value2 = list2_input.substr(0,space_idx);
         //for loop
        //find new index where there is a number 0-9
        // look through list_input start from space_idx
        // continue until you find a character that is 0-9 as a character
        for( int i = space_idx; list2_input.at(i) <= '0'
            && list2_input.at(i) >= '0'; ++i, ++space_idx )
        {}
        
        list2_input = list2_input.substr(space_idx);
        
        if(value2 != " ")
        {
            temp2 = stoi(value2);
            list2.push_back(temp2);
        }
    }
    
    // List 1 print
    cout << "List 1 Print: ";
    for( list<int>::iterator it= list1.begin(); it!= list1.end(); ++it )
    {
        cout << *it << " ";
    }
    cout << endl;
    
    // List 2 Print
    cout << "List 2 Print: "; 
    for( list<int>::iterator it= list2.begin(); it!= list2.end(); ++it )
    {
        cout << *it << " ";
    }
    cout << endl;