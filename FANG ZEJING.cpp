 while(y<time)
    {
           
         if((grade==1)||(grade==2))
         {
        a=(rand()%100)+1;  
         b=(rand()%100)+1;
         c=(rand()%4)+1; 
		 switch(c)
         {
             case 1:cout<<a<<'+'<<b<<'=';cin>>sum;
                    if(a+b != sum){js++;}else{js1++;}
                    y++;
                    break;
             case 2:if(a<b){t=a;a=b;b=t;}cout<<a<<'-'<<b<<'=';cin>>sum;
                    if(a-b != sum){js++;}else{js1++;}
                    y++;
                    break;
          }
         }
         else if((grade==3)||(grade==4))
         {
         a=(rand()%1000)+1;  
         b=(rand()%1000)+1;
         a2=(rand()%10)+1;  
         b2=(rand()%10)+1;
         c=(rand()%4)+1; 
