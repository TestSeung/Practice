#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n, m;
	int card;
	vector<int> hand;
	vector<int> sum;
	
	cin >> n >> m;

	while (n--) {
		cin >> card;
		hand.push_back(card);
	}
	
	int next;
	int firstCard = 0;
	int secondCard = 1;
	int lastCard = 2;

	int temp = 0;
	while (true) {

		if (lastCard == hand.size()){
			break;
		}
		
		while (true) {
			
			temp += hand[firstCard];

			temp += hand[secondCard];

			temp += hand[lastCard];
			

			sum.push_back(temp);

			temp = 0;

			lastCard++;

			if (hand[lastCard-1] == hand[hand.size()-1]) {
				secondCard++;
				lastCard = secondCard + 1;
				if (secondCard == hand.size()-1) {
					break;
				}
			}

		}
		
		firstCard++;
		secondCard = firstCard + 1;
		lastCard = firstCard + 2;
	}

	sort(sum.begin(), sum.end());
	int answer = 0;
	//최대값이 m보다 크면 m보다 커질때 바로 전 숫자
	//작다면? 그게 최대값인거지. 그러니 max를 구해보자
	for (int i = 0; i < sum.size(); i++) {
		//처음부터 맞는다면 2번째 if문에서 range오류가 생길 수 있다.
		if (sum[i] == m) {
			answer = sum[i];
		}
		if (sum[i] > m ) {
			answer = sum[i-1];
			break;
		}
		if (sum[i] <= m) {
			answer = sum[i];
		}
	}
	cout << answer;
}