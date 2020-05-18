# Question Link : https://www.codechef.com/problems/SAFEROBO

T = int(input())
for _ in range(T):
    l = list(input())
    sa,sb=map(int,input().split())
    
    if('A' not in l or 'B' not in l):
        break;
    
    c = 0
    x = l.index('A') 
    y = l.index('B') 
    
    while(x<y):
        
        x = x + sa
        y = y - sb
        
        if x==y :
            c = c+1
            
        
        else:
            c = 0
           
    if c>=1:
        print('unsafe')
    else:
        print('safe')
        
    
   


