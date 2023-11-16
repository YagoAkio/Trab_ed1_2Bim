struct livro{
	int ;
	TpPontDP *Prox;
};

struct TpDesc{
	TpPontDP *Inicio, *Fim;
	int Qtde;
};

void Inicializar(TpDesc &Desc){
	Desc.Inicio = Desc.Fim = NULL;
	Desc.Qtde= 0;
}
