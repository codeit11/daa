#include <bits/stdc++.h>
using namespace std;
int main(){
string F_str,K_str,X_str; getline(cin,F_str); getline(cin,K_str); getline(cin,X_str);
string F = F_str.substr(2); string K = K_str.substr(2); string X = X_str.substr(2); if (X == "?"){
float F_num = stof(F); float K_num = stof(K);
float ans = F_num/(-K_num);
cout << "X " << fixed << setprecision(2) << ans; }
else if (F == "?"){
float K_num = stof(K);
float X_num = stof(X);
float ans = -K_num * X_num;
cout << "F " << fixed << setprecision(2) << ans;
} else{
float F_num = stof(F);
float X_num = stof(X);
float ans = -(F_num / X_num);
cout << "K " << fixed << setprecision(2) << ans;
}
return 0; }