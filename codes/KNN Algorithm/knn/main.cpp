// Implementa��o do k-NN (k-nearest neighbors algorithm)

#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <map>

using namespace std;

class Instancias
{
private:
	string classe;
	double x, y;

public:
	Instancias(double x, double y, string classe)
	{
		this->x = x;
		this->y = y;
		this->classe = classe;
	}

	string getClasse()
	{
		return classe;
	}

	double getX()
	{
		return x;
	}

	double getY()
	{
		return y;
	}
};

// fun��o que retorna a dist�ncia euclidiana entre 2 indiv�duos
double obterDistEuclidiana(Instancias ind1, Instancias ind2)
{
	/*
		a dist�ncia euclidiana � a raiz quadrada da soma das
		diferen�as dos valores dos atributos elevado ao quadrado
	*/

	double soma = pow((ind1.getX() - ind2.getX()), 2) +
				  pow((ind1.getY() - ind2.getY()), 2);

	return sqrt(soma);
}

// essa fun��o classifica uma nova amostra
string classificarAmostra(vector<Instancias>& individuos,
						  Instancias novo_teste, int K)
{
	// se o K for par decrementa
	if(K % 2 == 0)
	{
		K--;
		if(K <= 0)
			K = 1;
	}

	// obt�m o tamanho do vetor
	int tam_vet = individuos.size();

	/*
		set de pairs da dist�ncia de cada indiv�duo
		do conjunto de treinamento para o novo exemplo
		cada pair � composto pela dist�ncia e o �ndice
		do indiv�duo no vetor
	*/
	set<pair<double, int> > dist_individuos;

	/*
		calcula-se a dist�ncia euclidiana do novo exemplo
		para cada amostra do conjunto de treinamento
	*/
	for(int i = 0; i < tam_vet; i++)
	{
		double dist = obterDistEuclidiana(individuos[i], novo_teste);
		dist_individuos.insert(make_pair(dist, i));
	}
	/*
	para decidir a qual classe pertence o novo exemplo,
	basta verificar a classe mais frequente dos K
	vizinhos mais pr�ximos
	*/
	set<pair<double, int> >::iterator it;

	vector<int> cont_classes(2); //  agregadores + medidores

	int contK = 0;

	for(it = dist_individuos.begin(); it != dist_individuos.end(); it++)
	{
		if(contK == K) break;

		string classe = individuos[it->second].getClasse();

		if(classe == "")
			cont_classes[0]++;
		else if(classe == "")
			cont_classes[1]++;
		else
			cont_classes[2]++;

		contK++;
	}

	string classe_classificacao;

	if(cont_classes[0] >= cont_classes[1] && cont_classes[0] >= cont_classes[2])
		classe_classificacao = "";
	else if(cont_classes[1] >= cont_classes[0] && cont_classes[1] >= cont_classes[2])
		classe_classificacao = "";
	else
		classe_classificacao = "";

	return classe_classificacao;
}

int main(int argc, char *argv[])
{

	vector<Instancias> individuos;

	/*
		o K � a quantidade de vizinhos que ser�o
		levados em conta para classifica��o de um
		novo dado, � recomend�vel que seja �mpar
		para que n�o possa haver empate
	*/
	int K = 3;

	// tamanho do conjunto de dados de treinamento
	int tam_treinamento = 11;

	/*
		o processo de treinamento consiste em apenas
		armazenar o conjunto de dados de treinamento
	*/
	for(int i = 0; i < tam_treinamento; i++)
	{
		string classe;
		double x, y;

		cin >> x >> y >> classe;

		individuos.push_back(Instancias(x, y, classe));
	}

	int acertos = 0;
	int tam_testes = 16 - tam_treinamento;

	// processo de classifica��o
	for(int i = 0; i < tam_testes; i++)
	{
		string classe;
		double x, y;

		cin >> x >> y >> classe;

		Instancias ind(x, y, classe);

		string classe_obtida = classificarAmostra(individuos, ind, K);

		cout << "Classe esperada: " << classe << "\n";
		cout << "Classe obtida: " << classe_obtida << "\n\n";

		if(classe == classe_obtida)
			acertos++;
	}

	cout << acertos << " acertos de um total de " << tam_testes << " testes.\n";

	return 0;
}
