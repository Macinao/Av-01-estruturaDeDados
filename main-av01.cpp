#include <iostream>

using namespace std;

int main() {
	
	cout << "Ola mundo!\n";
	
	int numero;
	
	cout << "Digite um numero: ";
	cin >> numero;
	
	cout << "Seu numero e: " << numero << "\n";
	
	int n1;
	int n2;
	
	cout << "Digite um numero: ";
	cin >> n1;
	
	cout << "Digite mais um numero: ";
	cin >> n2;
	
	int n3 = n1 + n2;
	
	cout << "A soma de: " << n1 << " mais: " << n2 << " e igual a: " << n3 << "\n";
	
	double nota1;
	double nota2;
	double nota3;
	double nota4;
	
	cout << "Vamos ver como voce se saiu esse ano (^_^)\n";
	
	cout << "Sua primeira nota: ";
	cin >> nota1;
	
	cout << "Sua segunda nota: ";
	cin >> nota2;
	
	cout << "Sua terceira nota: ";
	cin >> nota3;
	
	cout << "Sua quarta nota: ";
	cin >> nota4;
	
	double media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	if(media >= 7){
		cout << "Sua media foi: " << media << " tudo na paz (^ ~~ ^)\n";
	}else{
		cout << "Sua media foi: " << media << " ta lascado (-_-*)\n";
	}
	
	double metros;
	
	cout << "Converta metros em centimetros: ";
	cin >> metros;
	
	double convercao = metros * 100;
	
	cout << "Voce converteu: " << metros << " metros, isso da: " << convercao << " centimetros!\n";
	
	double raio;
	
	cout << "Calcular area do raio, qual o raio: ";
	cin >> raio;
	
	double area = 3.14159 * (raio * 2);
	
	cout << "A area e equivalente a: " << area << "\n";
	
	double valor;
	
	cout << "Calcular area do quadrado: ";
	cin >> valor;
	
	double areaDoQuadrado = valor * 2;
	
	cout << "A area do quadrado e equivalente a: " << areaDoQuadrado << "\n";
	
	int horas;
	
	double valorHora;
	
	cout << "Quantas horas voce trabalha por mes: ";
	cin >> horas;
	
	cout << "Quanto voce recebe por hora: ";
	cin >> valorHora;
	
	double salario = horas * valorHora;
	
	cout << "Seu salario e: " << salario << "\n";
	
	double Fahrenheit;
	
	cout << "Coverta Fahrenheit para Celsius, digite um temperatura: ";
	cin >> Fahrenheit;
	
	double coverteFahrenheit = ((Fahrenheit - 32) * 5) / 9;
	
	cout << "Voce converteu " << Fahrenheit << " graus Fahrenheit, em " << coverteFahrenheit << " graus Celsius\n";
	
	double Celsius;
	
	cout << "Coverta Celsius para Fahrenheit, digite um temperatura: ";
	cin >> Celsius;
	
	double coverteCelsius = ((Celsius * 9) / 5) + 32;
	
	cout << "Voce converteu " << Celsius << " graus Celsius, em " << coverteCelsius << " graus Fahrenheit\n";
	
	double cotacaoDolar = 4.80;
	double valorSalario;
	
	cout << "Converter salario em dolar para real, valor do salario: ";
	cin >> valorSalario;
	
	double converteSalario = cotacaoDolar * valorSalario;
	
	cout << "Na convercao voce ganha: " << converteSalario << " Reais\n";
	
	char base;
	
	cout << "Peso ideal de homem(H) ou mulher(M)?";
	cin >> base;
	
	if(base == 'H'){
		double alturaH;
		
		cout << "Qual sua altura?";
		cin >> alturaH;
		
		double alturaIdealH = (72.7 * alturaH) + 58;
		
		cout << "Seu peso ideal e: " << alturaIdealH << "\n";
	}
	if(base == 'M'){
		double alturaM;
		
		cout << "Qual sua altura?";
		cin >> alturaM;
		
		double alturaIdealM = (62.1 * alturaM) - 44.7;
		
		cout << "Seu peso ideal e: " << alturaIdealM << "\n";
	}
	
	double impostoRenda = 0.11;
	double INSS = 0.08;
	double sindicato = 0.05;
	
	double descontado = (1 - (impostoRenda + INSS + sindicato));
	
	int horasTrabalhadas;
	
	double valorPorHora;
	
	cout << "Quantas horas voce trabalha por mes: ";
	cin >> horasTrabalhadas;
	
	cout << "Quanto voce recebe por hora: ";
	cin >> valorPorHora;
	
	double calculaSalarioDesconto = ((horasTrabalhadas * valorPorHora) * descontado);
	
	cout << "Seu salario com os descontos fica: " << calculaSalarioDesconto << "\n";
	
	/* esse aki eu nao soube fazer de cabeca */
	
	for (int i = 1; i <= 9; ++i) {
        cout << "Tabuada do " << i << ":\n";
        for (int j = 1; j <= 10; ++j) {
            cout << i << " x " << j << " = " << (i * j) << "\n";
        }
       
    }
    
    /* esse aki eu nao soube fazer de cabeca */
    
    double metrosPorLata = 18 * 3;
    double precoPorLata = 80.0;

    double areaParaPintar;
    cout << "Informe o tamanho da área a ser pintada em metros quadrados: ";
    cin >> areaParaPintar;

    int latasNecessarias = static_cast<int>(areaParaPintar / metrosPorLata);
    double precoTotal = latasNecessarias * precoPorLata;

	cout << "Quantidade de latas de tinta necessarias: " << latasNecessarias << "\n";
    cout << "Preco total: R$ " << precoTotal;
	
	return 0;
}
