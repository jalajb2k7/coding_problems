#include<iostream>
//13114-47616-16201
#include<string>
std::string longestPalindromicSubtring(std::string inputString){
    int n = inputString.size();
    int mid = 0;
    int maxlength = -1;
    int start=0;
    int end=0;
    while(mid<n){
        int prev = mid-1;
        int fwd = mid+1;
        while(prev>=0 && fwd <n &&inputString[prev] == inputString[fwd]){
            if(fwd-prev+1 > maxlength){
                maxlength = fwd-prev+1;
                start = prev;
                end = fwd;
            }
            prev--;
            fwd++;
        }
        mid++;
    }
    int hare = 0;
    while(hare<n-1){
        int prev = hare;
        int fwd = hare+1;
        while(prev>=0 && fwd<n && inputString[prev] == inputString[fwd]){
            if(fwd-prev+1>maxlength){
                maxlength  = fwd-prev+1;
                start = prev;
                end = fwd;
            }
            prev--;
            fwd++;
        }
        hare++;
    }
    std::string ans =  inputString.substr(start,end-start+1);
    return ans;
    
}
 
int main(){
    std::string inputString = "FourscoreandsevenyearsagoourfaathersbroughtforthonthiscontainentanewnationconceivedinzLibertyanddedicatedtothepropositionthatallmenarecreatedequalNowweareengagedinagreahtcivilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";
    std::string longestPalindromicSubstring = longestPalindromicSubtring(inputString);
    std::cout<<longestPalindromicSubstring;
    return 0;
}