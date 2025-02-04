//https://www.naukri.com/code360/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	string result;
	for(int i = 0; i < str.length(); i++){
		if(str[i] != ' '){
			result += str[i];
		}
		else{
			result += "@40";
		}
	}

	return result;
}