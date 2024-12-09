// Harjoitustyö (Hotelli).cpp
// Ege Özkan

// Kirjastot:
#include <iostream>
#include <vector>
using namespace std;

// Metodi: Jos käyttäjä antaa muuta kuin numeron...
void eiNumeroAnnettu()
{
    cin.clear(); // Nollataan cin arvo (jotta koodi ei cräshää)
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Poistaa käyttäjän syötteestä kaikki merkit kappalejakoon asti
    cout << "Virheellinen syote. Syota kokonaisluku." << endl << endl;
}

// Metodi: Jos käyttäjä antaa muuta kuin kirjaimen..
void eiKirjainAnnettu()
{
    cin.clear(); // Nollataan cin arvo (jotta koodi ei cräshää)
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Poistaa käyttäjän syötteestä kaikki merkit kappalejakoon asti
    cout << "Virheellinen syote. Syota vain yksi kirjain." << endl << endl;
}

// Ohjelman pääfunktio
int main()
{
    // Muuttujat ja vectori:
    vector<int> huoneet = {};

    int kayttajanHuone;
    int oidenMaara;
    int loppuSumma = 0;
    string valinta;

    // Varmistaa, että ei tulostu aina sama rnd numero
    srand(time(0));

    // Arvomme random hotellin huonemäärä luvun väliltä 30-70
    int huoneidenLKM = 30 + (rand() % 41);

    // Arvomme random hinnan per yö 80-100€
    int huoneHinta = 80 + (rand() % 21);

    // Looppi niin kauan, kunnes käyttäjä ei enään halua varata huoneita
    while (true)
    {

        cout << "Tervetuloa hotelliin! Minka huoneen haluaisitte varata? (Total maara: " << huoneidenLKM << ")" << endl;
        cin >> kayttajanHuone;

        // Jos syöte on väärin (ei numero)...
        if (cin.fail()) 
        {
            eiNumeroAnnettu(); // Kutsutaan metodi
            continue;
        }

        // Jos käyttäjä valitsee huoneennumeroksi alle 1 tai yli huoneidenLKM...
        if (kayttajanHuone < 1 || kayttajanHuone > huoneidenLKM)
        {
            cout << "Pahoittelut, numeron on oltava valilla 1 - " << huoneidenLKM << ". Ole hyva ja valitse uusi numero." << endl;
            continue; // Palaa loopin alkuun
        }

        // Jos annettu huone numero löytyy vectorista...
        if (find(huoneet.begin(), huoneet.end(), kayttajanHuone) != huoneet.end())
        {
            cout << "Valitsemasi huone on varattu. Ole hyvä ja valitse toinen huonenumero." << endl << endl;
            continue; // Palaa loopin alkuun
        }

        // Muulloin...
        else
        {
            huoneet.push_back(kayttajanHuone); // ...lisätään varattu huone vectoriin 
        }

        // Teemme oman loopin yömäärälle, jos käyttäjä ei pistäkkään numeroa
        while (true)
        {
            cout << "Kuinka monta yota tahdotte yopya? (Huone hinta talla hetkella: " << huoneHinta << "e)" << endl;
            cin >> oidenMaara;

            // Jos syöte on väärin (ei numero)...
            if (cin.fail())
            {
                eiNumeroAnnettu(); // Kutsutaan metodi
                continue; // Palaa 'tämän while' loopin alkuun
            }

            // Muulloin...
            else
            {
                break; //...kaikki hyvin ja break tästä loopista ja koodi jatkuu
            }
        }

        // Per varaushinta ja kokonaisloppuhinnan kaavat
        int varausSumma = oidenMaara * huoneHinta;
        loppuSumma = loppuSumma + varausSumma;

        cout << "Varauksenenne summa on " << varausSumma << "e" << endl << endl;

        while (true)
        {
            // Kysytään käyttäjältä, haluaako hän varata lisää huoneita
            cout << "Haluatteko varata lisaa huoneita (k/e)? " << endl;
            cin >> valinta;

            // Jos syöte on väärin (ei kirjain)...
            if (cin.fail())
            {
                eiKirjainAnnettu(); // Kutsutaan metodi
                continue; // Palaa 'tämän while' loopin alkuun
            }

            // Jos valinta on ei...
            if (valinta == "e" || valinta == "E")
            {
                cout << "Loppusummanne on: " << loppuSumma << "e" << endl;
                cout << "Kiitos kaynnista ja tervetuloa uudelleen!";
                return EXIT_SUCCESS; // Palauttaa arvon 0 onnistumisesta
            }

            // Jos valinta on kyllä...
            else if (valinta == "k" || valinta == "K")
            {
                break; // ...lopetetaan looppi
            }

            // Muulloin (potentiaaliset virhetilanteet)
            else
            {
                eiKirjainAnnettu(); // Kutsutaan metodi
                cout << endl;
                continue; // Palaa 'tämän while' loopin alkuun
            }
        }

    }

    return EXIT_SUCCESS; // Palauttaa arvon 0 onnistumisesta
}

