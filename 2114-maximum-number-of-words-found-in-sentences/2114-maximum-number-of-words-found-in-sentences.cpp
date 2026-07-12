class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 0;
        
        vector<int>words;
        for(int i=0; i<sentences.size(); i++){
            string sentence = sentences[i];
            int wordcount =1;
            for (int j=0; j<sentence.size(); j++){
                if(sentence[j] == ' '){
                    wordcount++;
                }
                 words.push_back(wordcount);
            }
        }

         int mx = *max_element(words.begin(), words.end());
         return mx;
    }
};