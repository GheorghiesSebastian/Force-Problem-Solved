#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using std::cin;
using std::cout;
using std::vector;
using std::max_element;
using std::ofstream;

int alpha = 0; //numarul de numere
int beta = 0; //numerele introduse de utilizator
int delta = 0; //lista fortelor
int zeta = 0; //forta/suma divizorilor maxima
int sigma = 0;
int omicron = 0; // problema (adica t-ul , fiind 1 sau 2)
int tau = 0;

vector<int> gamma; //numerele trimise de utilizator
vector<int> phi;
vector<int> epsilon;

int main(void)
{
	cin >> omicron;
	if (omicron == 1)
	{
		cin >> alpha;
		for (int x = 0; x < alpha; ++x)
		{
			cin >> beta;
			gamma.push_back(beta);
		}
		for (auto theta : gamma)
		{
			delta = 0;
			for (int y = 1; y <= theta; ++y)
			{
				if (theta % y == 0)
					delta = delta + 1;
			}
			epsilon.push_back(delta);
		}
		zeta = *max_element(epsilon.begin(), epsilon.end());
		sort(gamma.begin(), gamma.end());
		for (auto eta : gamma)
		{
			sigma = 0;
			for (int z = 1; z <= eta; ++z)
			{
				if (eta % z == 0)
				{
					sigma = sigma + 1;
				}
			}
			if (sigma == zeta)
			{
				ofstream FortaOut("./forta.out.txt");
				FortaOut << zeta;
				FortaOut.close();
				return 0;
			}
		}
	}
	if (omicron == 2)
	{
		cin >> alpha;
		for (int v = 0; v < alpha; ++v)
		{
			cin >> beta;
			gamma.push_back(beta);
		}
		for (auto theta : gamma)
		{

			delta = 0;
			for (int y = 1; y <= theta; ++y)
			{
				if (theta % y == 0)
					delta = delta + 1;
			}
			epsilon.push_back(delta);
		}
		for (auto psi : epsilon)
		{
			tau = 0;
			for (auto eta : epsilon)
			{
				if (psi == eta)
					tau = tau + 1;
			}
			phi.push_back(tau);
		}
		zeta = *max_element(phi.begin(), phi.end());
		ofstream FortaOut("./forta.out.txt");
		FortaOut << zeta;
		FortaOut.close();
		return 0;
	}
	return 0;
}