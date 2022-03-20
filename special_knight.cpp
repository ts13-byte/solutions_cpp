#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool is_inside(int i,int j,int N){
    if(i>=1 && i<=N && j>=1 && j<=N) return true;
    return false;
    
}
int minsteps_normal(int N,int knight[],int target[]){
    int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
    int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    queue<pair<pair<int,int>,int>> q;
    q.push({{knight[0],knight[1]},0});
   int vis[N+1][N+1];
   for(int i=0;i<=N;i++){
       for(int j=0;j<=N;j++){
           vis[i][j]=0;
       }
   }
    vis[knight[0]][knight[1]]=1;
    while(!q.empty()){
        int x=q.front().first.first;
        int y=q.front().first.second;
        int d=q.front().second;
        q.pop();
        if(x==target[0] && y==target[1]) return d;
        for(int i=0;i<8;i++){
            int x1=x+dx[i];
            int y1=y+dy[i];
            if( is_inside(x1,y1,N) && vis[x1][y1]==0){
                vis[x1][y1]=true;
                q.push({{x1,y1},d+1});
            }
        }
        
    }
}
int minsteps_special(int N,int knight[],int target[]){
    int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
    int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    queue<pair<pair<int,int>,int>> q;
    q.push({{knight[0],knight[1]},0});
    int vis[N+1][N+1];
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            vis[i][j]=0;
        }
    }
    vis[knight[0]][knight[1]]=1;
    while(!q.empty()){
        int x=q.front().first.first;
        int y=q.front().first.second;
        int d=q.front().second;
        q.pop();
        if(x==target[0] && y==target[1]) return d;
        for(int i=0;i<8;i++){
            int x1=x+dx[i];
            int y1=y+dy[i];
            if( is_inside(x1,y1,N) && vis[x1][y1]==0){
                vis[x1][y1]=1;
                q.push({{x1,y1},d+1});
            }
            int x2=x1+dx[i];
            int y2=y1+dy[i];
            
            if( is_inside(x2,y2,N) && vis[x2][y2]==0){
                vis[x2][y2]=1;
                q.push({{x2,y2},d+1});
            }
            int x3=x2+dx[i];
            int y3=y2+dy[i];
            
             if(is_inside(x3,y3,N) && vis[x3][y3]==0){
                vis[x3][y3]=1;
                q.push({{x3,y3},d+1});
            }
            
        }
        
    }
}
int main() {
    // Write C++ code here
   
int N=30;
int knight[]={1,1};
int target[]={30,30};
cout<<minsteps_normal(N,knight,target)-minsteps_special(N,knight,target);
return 0;
}
