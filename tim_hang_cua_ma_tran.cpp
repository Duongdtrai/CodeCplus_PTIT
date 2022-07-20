#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, m;
int s[1005][1005];

void swap(int row1, int row2, int col){
    for (int i = 0; i < col; i++){
        int temp = s[row1][i];
        s[row1][i] = s[row2][i];
        s[row2][i] = temp;
    }
}

// void display(){
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++)
// 			cout<<s[i][j]<<" ";
//         cout<<endl;
//     }
// }
 
int rankOfMatrix(){
    int rank = m;
	
	for (int row = 0; row < rank; row++){
		if (s[row][row]){
			for (int col = 0; col < n; col++){
				if (col != row){
					double mult = (double)s[col][row] / s[row][row];
					for (int i = 0; i < rank; i++)
						s[col][i] -= mult * s[row][i];
				}
			}
        }
        else{
            bool reduce = true;
            for (int i = row + 1; i < n;  i++){
                if (s[i][row])
                {
                    swap(row, i, rank);
                    reduce = false;
                    break ;
                }
            }
            
            if (reduce){
                rank--;
                for (int i = 0; i < n; i ++)
                    s[i][row] = s[i][rank];
            }
            row--;
        }
    }
    return rank;
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int check;
	cin>>check;
	while(check--){
		cin>>n>>m;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>s[i][j];
			}
		}
		cout<<rankOfMatrix()<<endl;
	}
}