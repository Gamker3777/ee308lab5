 else if((grade==5)||(grade==6))
         {
         a=(rand()%100)+1;  
         b=(rand()%100)+1;
		 a1=(rand()%1000)+1;  
         b1=(rand()%1000)+1;
         c=(rand()%4)+1; 
		 switch(c)
         {
             case 1:cout<<a1<<'+'<<b1<<'=';cin>>sum;
                    if(a1+b1 != sum){js++;}else{js1++;}
                     y++;
                    break;
             case 2:if(a1<b1){t=a1;a1=b1;b=t;}cout<<a1<<'-'<<b1<<'=';cin>>sum;
                    if(a1-b1 != sum){js++;}else{js1++;}
                     y++;
                    break;
             case 3:cout<<a<<'*'<<b<<'=';cin>>sum;
                    if(a*b != sum){js++;}else{js1++;}
                     y++;
                    break;
             case 4:if(a<b){t=a;a=b;b=t;}cout<<a<<'/'<<b<<'=';cin>>sum;cout<<"remainder =";cin>>sum1;
                    if(a/b == sum && a%b == sum1){js1++;}else{js++;}
                     y++;
                    break;
          }
         }
