// Brute force solution 
class Solution {
private:

    int right_max(vector<int>height,int first,int& max_ind){
        int maxi=0;
        for(int i=first+1;i<height.size();i++){
            if(height[i]>maxi){
                maxi=height[i];
                max_ind=i;
            }
        }
        return maxi;
    }
public:
    int trap(vector<int>& height) {
        int count=0;
        int lm=0;
        int rm=0;
        int rightmax_ind=0;
        for(int i=0;i<height.size();i++){
            if(i!=0){
                lm=max(lm,height[i-1]);
            }
            if(lm==0) continue;
            if(rightmax_ind<=i){
                rm=right_max(height,i,rightmax_ind);
            }
            int val=min(rm,lm)-height[i];
            if(val>0){
                count+=val;
            }
        }
        return count;
    }
};
// Better solution
class Solution {
private:
    void leftmax(vector<int>height,vector<int>&left){
        int lm=0;
        for(int i=0;i<height.size();i++){
           if(i!=0){
               lm=max(lm,height[i-1]);
           }
           left[i]=lm;
        }
}
void rightmax(vector<int>height,vector<int>&right){
        int rm=0;
        int n=height.size();
        for(int i=n-1;i>=0;i--){
            if(i!=(n-1)){
                rm=max(rm,height[i+1]);
            }
            right[i]=rm;
        }
}
public:
    int trap(vector<int>& height) {
        vector<int>left(height.size());
        vector<int>right(height.size());
        leftmax(height,left);
        rightmax(height,right);
        int count=0;
        for(int i=0;i<height.size();i++){
            int val=(min(left[i],right[i])-height[i]);
            cout<<"val: "<<val<<endl;
            if(val>0){
                count+=val;
            }
        }
        return count;
   }
};
// optimize solution
class Solution {
public:
    int trap(vector<int>& height) {
       int left_max,right_max;
       left_max=right_max=INT_MIN;
       int s=0,e=height.size()-1;
       int count=0;
       while(s<e){
           left_max=max(left_max,height[s]);
           right_max=max(right_max,height[e]);
           count+=(left_max<=right_max)?(left_max-height[s++]):(right_max-height[e--]);
       }
      return count;
    }
};
