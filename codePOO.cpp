class Semaforo {
  private:
    int pinoVermelho;
    int pinoAmarelo;
    int pinoVerde;

  public:
    // Construtor
    Semaforo(int vermelho, int amarelo, int verde) {
      pinoVermelho = vermelho;
      pinoAmarelo = amarelo;
      pinoVerde = verde;

      pinMode(pinoVermelho, OUTPUT);
      pinMode(pinoAmarelo, OUTPUT);
      pinMode(pinoVerde, OUTPUT);
    }

    void vermelho(int tempo) {
      digitalWrite(pinoVermelho, HIGH);
      delay(tempo);
      digitalWrite(pinoVermelho, LOW);
    }

    void amarelo(int tempo) {
      digitalWrite(pinoAmarelo, HIGH);
      delay(tempo);
      digitalWrite(pinoAmarelo, LOW);
    }

    void verde(int tempo) {
      digitalWrite(pinoVerde, HIGH);
      delay(tempo);
      digitalWrite(pinoVerde, LOW);
    }

    void cicloCompleto() {
      vermelho(6000);
      verde(4000);
      amarelo(2000);
    }
};

Semaforo semaforo(13, 12, 11);

void setup() {
  // O construtor já define os pinos como OUTPUT
}

void loop() {
  semaforo.cicloCompleto();
}
