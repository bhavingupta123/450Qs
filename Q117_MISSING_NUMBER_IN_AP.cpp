class Solution{
public:
    int inSequence(int A, int B, int C){
        if (!C) 
            return A == B ;

        int res = (B - A) / C ;
        
        return (B - A) % C == 0 and res >= 0 ;
    }
};