# C++ Harjoitustyö - Hotellihuoneen Varausohjelma (2024)
## Johdanto

Tämä ohjelma on C++-ohjelmoinnin perusteet -kurssin harjoitustyö, joka toteuttaa hotellihuoneiden varaamiseen tarkoitetun komentorivipohjaisen ohjelman. Ohjelmassa käyttäjä voi varata huoneita, valita öiden määrän, ja nähdä jokaisen varauksen hinnan sekä lopullisen hinnan, jos varaa useamman huoneen. Tavoitteena oli luoda helppokäyttöinen ja virheitä kestävä sovellus.

## Ominaisuudet

1. Satunnaisesti luotu huonemäärä:

- Ohjelma arpoo hotellille huonemäärän, joka on väliltä 30–70.

2. Satunnaisesti määrätty hinta per yö:

- Yhden yön hinta vaihtelee satunnaisesti välillä 80–100 euroa.

3. Huoneiden varaaminen:

- Käyttäjä voi valita huoneen numeron itse. Jos huonetta ei ole saatavilla, ohjelma pyytää valitsemaan toisen.

4. Öiden määrän valinta:

- Käyttäjä määrittää öiden määrän ja ohjelma laskee varauksen hinnan.

5. Useamman huoneen varaaminen:

- Käyttäjä voi halutessaan tehdä useampia varauksia peräkkäin.

6. Lopullisen hinnan laskeminen:

- Ohjelma laskee kaikki varaukset yhteen ja ilmoittaa kokonaishinnan, kun käyttäjä lopettaa huoneiden varaamisen.

## Varmistukset ja virheenkäsittely

1. Numerosyötteiden tarkistus:

- Ohjelma tarkistaa, että huonenumero ja öiden määrä ovat kokonaislukuja. Virheellisistä syötteistä ilmoitetaan käyttäjälle selkeästi.

- Jos käyttäjä antaa ei-numeerisen syötteen, ohjelma tyhjentää syötteen ja pyytää käyttäjää syöttämään kokonaisluvun uudelleen.

2. Syötteiden rajojen tarkistus:

- Huonenumeroiden tulee olla annetun huonemäärän (30–70) välillä. Jos käyttäjä syöttää luvun tämän ulkopuolelta, ohjelma pyytää syöttämään uuden luvun.

- Öiden määrän on oltava positiivinen kokonaisluku.

3. Varattujen huoneiden käsittely:

- Ohjelma tarkistaa, onko valittu huone jo varattu. Jos huone on varattu, käyttäjää kehotetaan valitsemaan toinen huone.

4. Kyllä/Ei-vaihtoehdot (k/e):

- Kun ohjelma kysyy, haluaako käyttäjä varata lisää huoneita, vain kirjaimet “k” (kyllä) ja “e” (ei) hyväksytään. Jos syöte ei ole näiden joukossa, ohjelma pyytää uutta syötettä.

## Esimerkki ohjelman käytöstä

1. Ohjelma tervehtii käyttäjää ja kertoo vapaana olevien huoneiden määrän.

2. Käyttäjä valitsee haluamansa huoneen numeron.

3. Ohjelma tarkistaa syötteen (onko kelvollinen) ja huoneen saatavuuden.

4. Käyttäjä valitsee öiden määrän.

5. Ohjelma laskee varauksen hinnan ja näyttää sen käyttäjälle.

6. Käyttäjä voi valita, haluaako varata lisää huoneita.

7. Kun käyttäjä lopettaa varaamisen, ohjelma näyttää kokonaissumman ja kiittää käyttäjää.

## Loppusanat

Ohjelma on suunniteltu siten, että se olisi helppokäyttöinen ja kestäisi käyttäjän virhesyötteet. Tämä harjoitustyö tarjoaa kattavan esimerkin ohjelmoinnin perusteista ja osoittaa eri ohjelmointirakenteita, kuten silmukoita, ehtolauseita ja funktioita.
