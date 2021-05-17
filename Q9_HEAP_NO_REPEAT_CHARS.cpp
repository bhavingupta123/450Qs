class Solution {
public:
    string reorganizeString(string s) {
			vector<int> chrCountVector(26);
			for (auto& chr: s) { if(++chrCountVector[chr-97] > (s.size()+1)/2) return "";}
		
			priority_queue<pair<int, char>> max_heap;
			for (int i = 0; i < 26; i++) {
				if (chrCountVector[i]) {max_heap.push({chrCountVector[i], 97+i});}
			}

			int i = 0;
			pair<int, char> prev = max_heap.top(); max_heap.pop();
			s[i++] = prev.second;
			while (not max_heap.empty()) {
				pair<int, char> curr = max_heap.top(); max_heap.pop();
				s[i++] = curr.second;
				if (--prev.first) max_heap.push(prev);
				prev = curr;
			}
		return s;
	}
};