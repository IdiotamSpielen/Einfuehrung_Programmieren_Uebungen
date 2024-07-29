/*
* Aufgabenstellung:
*
* Primary:
* Objektorientiert einen Fuhrpark entwerfen
* 
* Firebird: erbt Hersteller von Auto. 
* Wattzahl der Unterbodenbelichtung: double.
* Fahren gibt „Brummbrumm“  aus. 
* Firebird erbt von Rennwagen.
* 
* Weitere Rennwagen: Ferner existieren zwei weitere Rennwagen in Ihrem Fuhrpark. Im Rahmen von ausgiebigen Testphasen zeigte sich, dass das obere Auto, ein Model Majorette Turbo, beim Aufruf der Methode fahren, nicht „Brummbrumm“ macht sondern „Uuhweemmn“.  Zudem ist beim Majorette Turbo die jeweilige Anzahl der Flügeltüren gespeichert. Das rechte Auto, vom Typ Fire Turbo, gibt ebenfalls wie der Firebird „Brummbrumm“ aus. Zudem ist gespeichert, ob der Turbo beim Fire Turbo angeschalten ist. 
* 
* Freizeitwagen: Mercedes Benz AMG. Entspricht der Kategorie Freizeitwagen.
* Freizeitwagen verfügen zum Teil über eine integrierte Minibar: boolean in Klasse
* Mercedes Benz AMG zudem Wegfahrsperre vorhanden: boolean.
* Alle Freizeitwagen: "fahren"-Methode gibt „scheeechuiehh“ aus.
* 
* Beachcar: kann springen - return "JumpJump" 
* ausklappbaren Sonnenschutz - boolean.
* 
* Lowrider: Da die Sprungfunktionalität bei unseren Kunden besonders gut ankommt, soll es zudem vom Firebird eine Spezialisieurng geben, die die Sprungfähigkeit inne hat. Dort jedoch nicht in Form der Ausgabe von „JumpJump“ , sondern durch die Ausgabe von „I am a Lowrider“. Der Auftraggeber möchte dabei sichergestellt haben, dass alle Autos, die eine Sprungfunktionalität versprechen, diese auch tatsächlich ausführen können. 
* 
* Fuhrparkverwalter: Es soll zudem eine Klasse Fuhrparkverwalter geben, die über eine typsichere Collection verfügt, mittels derer auf alle vorhandenen Instanzen des Fuhrparks zugegriffen werden kann. Der Fuhrparkverwalter soll zudem, nach einem Aufruf seiner Methode checkFuhrpark, alle Autos Probe fahren lassen. Der Fuhrparkverwalter ist es auch, der jedem Auto bei der Erstellung eine AutoID zuweist, die jedes Auto im Fuhrpark eindeutig identifizierbar macht. 
*
* Secondary:
* Ein einzigartiger Fuhrparkverwalter: Der Kunde fordert nun im Rahmen der Programmgestaltung, dass zu jedem Zeitpunkt immer nur eine Instanz der Klasse Fuhrparkverwalter geben darf. Ein Kollege hat darauf hin von einer möglichen Umsetzung im Rahmen des sogenannten Singleton-Patterns gesprochen. Finden Sie hierzu passende Informationen im Internet .
*
* Ein Kollege meint, wenn der Fuhrparkverwalter eine generische Liste des Typs Auto hält, würde damit eine dynamische Polymorphie ermöglicht. Versuchen Sie zu klären, was damit gemeint ist.
* 
* Der Fuhrparkverwalter will springen: Ihr Fuhrparkverwalter möcht nun alle Autos seines Fuhrparks springen lassen, sofern die jeweilige Autos über eine passende Sprungfunktion verfügen. Erstellen Sie zu diesem Zweck eine Methode der Klasse Fuhrparkverwalter, die diesem Wunsch gerecht wird. Rufen Sie anschließen
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car{
private:
    std::string Hersteller;
public:
    virtual std::string fahren() = 0;
};

class Rennwagen : public virtual Car{
    public:
};

class Fuhrparkverwalter{
    private:
    public:
};


class SpringenInterface
{
    /*Abstrakte klasse, weil C++ keine Interfaces hat.
    Ich hasse diese Sprache aus ganzer Seele!*/
    public:
        virtual std::string springen() = 0;
};

class Freizeitwagen : public virtual Car{
    public:
        //Überschriebene Methode
        string fahren() override{
            return "scheeechuiehh";
        }
};

class Firebird : public virtual Rennwagen{
    private:
        int ubWatt;
    public:
        string fahren() override{
            return "BrummBrumm";
        }
};

class BenzAMG : public virtual Freizeitwagen{
    private:
        bool hatMinibar;
        bool hatWegfahrSperre;
    public:
};

class Beachcar : public virtual Freizeitwagen, public virtual SpringenInterface{
    private:
        bool hatSonnenschutz;
    public:
        Beachcar(){}
        std::string springen() override{
            return "JumpJump";
        }
};

class Fuhrpark
{
private:
public:
    //und damit soll nun eine komposition dargestellt werden?
    std::vector<Car*> cars;
};


int main()
{
    Beachcar beachcar1;
    cout << beachcar1.fahren();
    return 0;
};
