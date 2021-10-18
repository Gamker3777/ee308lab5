 else if((grade==3)||(grade==4))
         {
         a=(rand()%1000)+1;  
         b=(rand()%1000)+1;
         a2=(rand()%10)+1;  
         b2=(rand()%10)+1;
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
             case 3:cout<<a2<<'*'<<b2<<'=';cin>>sum;
                    if(a2*b2 != sum){js++;}else{js1++;}
                     y++;
                    break;
             case 4:if(a2<b2){t=a2;a2=b2;b2=t;}cout<<a2<<'/'<<b2<<'=';cin>>sum;cout<<"--remainder-=";cin>>sum1;
                    if(a2/b2 == sum && a2%b2 == sum1){js1++;}else{js++;}
                     y++;
                    break;
          }
         }
