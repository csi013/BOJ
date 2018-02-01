//
//  main.cpp
//  1002Turret
//
//  Created by 최세일 on 2018. 1. 18..
//  Copyright © 2018년 Choi Seil. All rights reserved.
//

#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
    int T;
    int x1,y1,r1;
    int x2,y2,r2;
    double dist;
    double sum_radius;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        
        if(x1 == x2 && y1 == y2 && r1 == r2){
            printf("-1\n");
            continue;
        }
        dist = sqrt(pow(abs(x2-x1),2)+pow(abs(y2-y1),2));
        sum_radius = r1 + r2;
        
        if(dist > sum_radius)
            printf("0\n");
        else if(dist < sum_radius)
        {
            if(dist + min(r1,r2) > max(r1,r2))
            {
                printf("2\n");
            }
            else if(dist + min(r1,r2) < max(r1,r2))
            {
                printf("0\n");
            }
            else
                printf("1\n");
        }
        else
            printf("1\n");
    }
  
    return 0;
}
