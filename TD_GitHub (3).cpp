//Fonctions réalisées par l'étudiant 1 :
int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}
bool estMajeur(int age);
{
	
	if (age<18)
	{
		printf("FAUX");
		return printf("FAUX");
	}
	if (age>18)
	{
		printf("FAUX");
		return printf("FAUX");
	}
	if (age<0)
	{
		printf("VRAI");
		return printf("VRAI");
	}
}
int exposant(int nbre, int exp);
{
	int resultat;
	int cas;
	for (int cas = 0; cas < exp; cas++)
	{
		nbre = nbre * exp;
	}
	resultat = nbre;
	
	return resultat;
}
float TVA(int prix);
{
	int resultat;
	if (prix < 1000);
	{
		resultat = prix * 1.055;
		return resultat;
	}
	else (prix  >= 1000)
	{
		resultat = prix * 1.196;
		return resultat;
	}
}
int plusGrand(int a, int b, int c);
{
	int tableau[3] = {a, b, c};
	int cas;
	int transport;
	for (cas=1 ; i <= 3-1; cas++) 
	{ 
    while (cas > 0 && tableau[cas-1] > tableau[cas]) {
      transport = tableau[cas];
      tableau[cas] = tableau[cas-1];
      tableau[cas-1] = transport;
 
      cas--;
    }
	resultat = tableau[cas + 3 - 1];
	return resultat;
}









//Fonctions réalisées par l'étudiant 2 :

bool estPair(int nb) {
if (nb%2==0 || nb%==0) {
    return vrai;
    }
    else {
    return faux;
    }}

int sommeNombre(int nb) {
    int somme = 0;
    for (int i = nb; i >= 1; i--) {
        somme += i;
    }
    return somme;
}


double salaireNet(double salaire); {

double salaireNet = salaire * (1 - 0.23);
    
    
    double prime = salaireNet * 0.12;
    
    
    salaireNet += prime;
    
    return salaireNet;
	
	}

int plusPetit(int a, int b, int c); {
    int plusPetit = a; 
   
    if (b < plusPetit) {
        plusPetit = b;
    }
    
    if (c < plusPetit) {
        plusPetit = c;
    }
    
    return plusPetit;
}








//Fonctions réalisées par l'étudiant 3 :
