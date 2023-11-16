struct exemplar_Disp{
	int NEx;
	
};

struct obra{
	int autor,titulo;
	obra *Prox,*Ant;
	obra *ExE;
	exemplar_Disp *ExD;
};



struct TpDescObra{
	obra *Inicio, *Fim;
	int Qtde;
};

void Inicializar(TpDescObra &Desc){
	Desc.Inicio = Desc.Fim = NULL;
	Desc.Qtde= 0;
}

//void Emprestimo (void){
//	
//}

//void Devolucao(void){
//	
//}
