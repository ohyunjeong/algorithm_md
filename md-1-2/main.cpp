//
//  main.cpp
//  md-1-2 46쪽
//
//  Created by 오윤정 on 2016. 12. 29..
//  Copyright © 2016년 오윤정. All rights reserved.
//

#include<stdio.h>

#define MAXN 9
int ans, index, A[MAXN+1];

void solve(void)
{
    for(int i=1; i<10; i++)
    {
        scanf("%d",&A[i]);
        if(ans<A[i]) ans=A[i], index=i;
    }
    
}

int main(){
    solve();
    printf("%d\n%d\n",ans,index);
    return 0;
}
