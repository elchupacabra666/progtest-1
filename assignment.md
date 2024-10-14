# Bankovní účet

### Hodnocení: 5.0 bodů (maximálně 5.0 bodů)  
### Termín odevzdání: 31.10.2022 11:59:59

## Zadání

Úkolem je realizovat program, který bude počítat zůstatek na bankovním účtu. Program bude zpracovávat transakce (vklad, výběr) a bude zohledňovat úročení.

### Požadavky:
- Banka vede účty v korunách.
- Umožňuje vkládat a vybírat peníze, připouští však nejvýše **jednu operaci za jeden den**.
- Banka povoluje **neomezený debet** (záporný zůstatek).
- **Kladný zůstatek** je úročen kreditní úrokovou mírou, **záporný zůstatek** je úročen debetní sazbou (může být odlišná).
- Úročení probíhá **denně**.
- Všechny částky musí být vyjádřeny v korunách a celých haléřích, zaokrouhlení probíhá směrem k nule.
- **Vklad/výběr se v úročení projeví až následující den**.

### Vstup programu:
- **Kreditní a debetní úrokové sazby** (v podobě desetinných čísel) vyjadřující denní úrok v procentech.
- **Seznam transakcí**: každá transakce je tvořena dvěma čísly:
  - **Dnem** provedení transakce.
  - **Částkou**: kladná pro vklad, záporná pro výběr.
  - **Nulová částka** znamená zrušení účtu a program na to zareaguje výpisem celkového zůstatku a ukončením.

### Výstup programu:
- **Hodnota zůstatku** při rušení účtu ve formátu specifikovaném níže.

### Chybové hlášení:
Program detekuje chyby okamžitě po načtení nesprávné hodnoty a vypíše chybové hlášení. Program skončí okamžitě, jakmile detekuje některou z následujících chyb:
- Na vstupu je **nečíselná hodnota**.
- **Nesprávné pořadí transakcí** (dny nejsou v rostoucím pořadí).
- **Chybějící částka** (oddělovač ve formátu vstupu transakce).

### Ukázka práce programu:

#### Ukázkový běh 1:
```plaintext
Zadejte kreditni urok [%]:
0.01
Zadejte debetni urok [%]:
0.1
Zadejte transakce:
0, 20000
45, -5000
100, 10000
120, 0
Zustatek: 25223.27
```

#### Ukázkový běh 2:
```plaintext
Zadejte kreditni urok [%]:
0.02
Zadejte debetni urok [%]:
0.4
Zadejte transakce:
10, 20000
25, -15000
45, -10000
70, 5000
100, 0
Zustatek: -491.27
```

#### Ukázkový běh 3:
```plaintext
Zadejte kreditni urok [%]:
abcd
Nespravny vstup.
```

#### Ukázkový běh 4:
```plaintext
Zadejte kreditni urok [%]:
0.02
Zadejte debetni urok [%]:
0.3
Zadejte transakce:
5, 2000
0, 3000
Nespravny vstup.
```

### Poznámky
- Ukázkové výpisy a vstupy uživatele slouží pro představu o správné implementaci programu.
- Program nevypisuje žádné zvýraznění textu ani HTML markup. 
- Na konci každého výpisu (včetně chybových hlášení) je vždy znak odřádkování `\n`.
