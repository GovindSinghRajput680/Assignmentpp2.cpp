#include<iostream>
using namespace std;
int main(){int n;
cout<<"Enter the value for n : ";
cin>>n;
//Q 1
for(int i = 1; i<n; i++){
for(int k = 1; k <= (n-i-1);k++){

    cout<<"  ";
}


for(int j =1; j<= (2*i - 1); j++)
{cout<<j<<" ";
}
cout<<endl;}
//Q 2.
for(int i = 1; i<=n; i++){
for(int k = 1; k <= (n-i);k++){

    cout<<"  ";
}


for(int j =1; j<= (2*i - 1); j++)
{cout<<char(j+64)<<" ";
}
cout<<endl;}
//Q3
for(int i = 1; i<= n; i++){for(int j = 1; j<=(n- i);j++){

    cout<<"  ";
}
for(int k = (64 + i);k >= 65;k-- ){
cout<<char(k)<<" ";
}
for(int l = 66; l<= 64+i; l++ ){
if(i ==1){
    continue;
}
cout<<char(l)<<" ";
}
cout<<endl;
}
//Q 4
for(int i = 1; i<= n ; i++){char ch = 'A';
for(int j =1; j<= (n-i+1); j++){
cout<<ch<<" ";
ch++;
}
for(int k = 1; k <= (2*i - 3);k++ )
{cout<<"  ";}
ch+=(2*i -3);
for(int j =1; j<= (n-i+1); j++){
    if(i == 1 && j == 1){ch++;
        continue;
    }
cout<<ch<<" ";
ch++;

}
cout<<endl;
    }
//Q 5    
 for(int i = 1; i<= n ; i++){
for(int j =1; j<= (n-i+1); j++){
cout<<j<<" ";
}
for(int k = 1; k <= (2*i - 3);k++ )
{cout<<"  ";}
int a = (i+n-1);
for(int j =1 ; j<=(n-i+1); j++){
    if(i == 1 && j == 1){a++;
        continue;
    }
cout<<(2*n-a) <<" ";
a++;

}
cout<<endl;
    }   
//Q 6
 for(int i = 1; i<= n; i++){
for(int j =1; j<= (2*n-1); j++){
if(i == j || j == (2*n -i)){
    cout<<"* ";
}
else{ cout<<"  ";}
}
cout<<endl;
    }      
//Q 7 
 for(int i = 1; i<= n-1; i++){
for(int j =1; j<= (2*n-1); j++){
if((n-i+1) == j || j == (n+i-1)){
    cout<<"* ";
}
else{ cout<<"  ";}
}cout<<endl;
}

 for(int i = 1; i<= n; i++){
for(int j =1; j<= (2*n-1); j++){
if(i == j || j == (2*n -i)){
    cout<<"* ";
}
else{ cout<<"  ";}
}
cout<<endl;
    }
//Q 8

for(int i = 1; i<= n; i++){
for(int j = 1; j<=(2*n-1);j++){if(i == (n-j+1)|| (i ==(j-n+1) && j >4) )
{ cout<<i;}
else {cout<<" ";}
}
cout<<endl;

}

//Q 9
for(int i = 1; i<= (2*n+1);i++){
for(int j = 1; j<= (2*n+1);j++){
   if(i == n+1 || j ==n+1){
    cout<<"*";
    continue;
   }
int a = j-1, b =i;
if(a>n-1){
    a = (2*n+1-j);
}
if(b>n){
    b = (2*n+2-i); 
}
if(b == (n-a+1)&& a<n){
    cout<<"*";
}
else{cout<<" ";}

}
cout<<endl;
}
//Q 10
int nsp = n+1;
int nst = 1;
for(int i =1;i <= 2*n ; i++){
    if(i == n || i == (n+1)){
        for(int l = 1; l<= 2*n-1;l++){
            cout<<"*";
            
}cout<<endl;
continue;
    }
for(int j = 1; j<= nst ; j++){
    cout<<"*";
}
for(int k =1; k<= nsp;k++){
    cout<<" ";
}
for(int j = 1; j<= nst ; j++){
    cout<<"*";
}
if(i< n-1){
nsp-=2, nst++;
}
else if(i> n+1){
    nst--,nsp+=2;
}
cout<<endl;
}
//Q 11
int nst = 4;
int nsp = 0;
for(int i = 1; i<= 2*n -1;i++){
for(int j =1; j<= nst; j++){
cout<<"*";
}
for(int k =1; k<= nsp;k++){
    cout<<" ";
}
for(int j =1; j<= nst; j++){if((i == 1 || i == 2*n-1) && j == 1){
    nsp--;
    continue;
}
cout<<"*";
}
if(i <n){
    nst--, nsp+=2;
}
else if(i>=n){
    nst++ , nsp-=2;
}
cout<<endl;
}



    }      
    
    
    
    
    