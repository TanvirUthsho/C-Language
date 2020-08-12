// CPP program to Find the minimum number of moves required to 
// reach the destination by the king in a chess board 
#include <bits/stdc++.h> 
using namespace std; 

// function to Find the minimum number of moves required to 
// reach the destination by the king in a chess board 
void MinSteps(int SourceX, int SourceY, int DestX, int DestY) 
{ 
	// minimum number of steps 
	cout << max(abs(SourceX - DestX), abs(SourceY - DestY)) << endl; 

	// while the king is not in the same row or column 
	// as the destination 
	
} 

// Driver code 
int main() 
{ 
	char sourceX, sourceY,destinationX, destinationY; 
    scanf("%c%c%c%c",&sourceX&sourceY&destinationX&destinationY);

	MinSteps(sourceX, sourceY, destinationX, destinationY); 

	return 0; 
} 
