#ifndef FILME

    #define FILME

    typedef struct {

        char titulo[36], genero[36];
        int id, ano_lanc, duracao;
        Diretor *diretor;

    } Filme;

#endif // FILME

