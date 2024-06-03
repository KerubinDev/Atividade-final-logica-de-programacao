#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unistd.h>
#include <cstdlib>
using namespace std;

   struct tarefa
   {
    int id;
    string titulo;
    string descricao;
    string data;
    string status;
   };
    
    class gerenciadrotarefas {
        private:
        vector<tarefa> tarefas;
        int proximoid;

        public:
        gerenciadrotarefas() : proximoid(1) {}

        void adicionartarefa() { //aqui nós definimos a criação de tarefas
            tarefa novatarefa;
            novatarefa.id = proximoid++;
            cout << "digite o titulo da tarefa: "; cin.ignore(); getline(cin, novatarefa.titulo);
            cout << "digite a titulo descrição: "; cin.ignore(); getline(cin, novatarefa.descricao);
            cout << "digite a data de vencimento(dd/mm/yyyy): "; cin.ignore(); getline(cin, novatarefa.data);
            cout << "digite o status (Pendente, Em Progresso, Concluída): "; cin.ignore(); getline(cin, novatarefa.status);

            tarefas.push_back(novatarefa);
            cout << "[■□□□□□□□□□] 10%" << endl;
            sleep(1);
            cout << "[■■□□□□□□□□] 20%" << endl;
            sleep(1);
            cout << "[■■■□□□□□□□] 30%" << endl;
            sleep(1);
            cout << "[■■■■□□□□□□] 40%" << endl;
            sleep(1);
            cout << "[■■■■■□□□□□] 50%" << endl;
            sleep(1);
            cout << "[■■■■■■□□□□] 60%" << endl;  
            sleep(1);
            cout << "[■■■■■■■□□□] 70%" << endl;
            sleep(1);
            cout << "[■■■■■■■■□□] 80%" << endl;
            sleep(1);
            cout << "[■■■■■■■■■□] 90%" << endl;
            sleep(1);

            int aleatorio;
            while (true)
            {
                int aleatorio = rand() % 2 + 1;

            if (aleatorio == 1){
            cout << "Tarefa Criada" << endl;
            break;
            }
            else{
                cout << "---------------" << endl;
                cout << "Erro na criação" << endl;
                cout << "---------------" << endl;
                cout << "[■□□□□□□□□□] 10%" << endl;
            sleep(1);
            cout << "[■■□□□□□□□□] 20%" << endl;
            sleep(1);
            cout << "[■■■□□□□□□□] 30%" << endl;
            sleep(1);
            cout << "[■■■■□□□□□□] 40%" << endl;
            sleep(1);
            cout << "[■■■■■□□□□□] 50%" << endl;
            sleep(1);
            cout << "[■■■■■■□□□□] 60%" << endl;
            sleep(1);
            cout << "[■■■■■■■□□□] 70%" << endl;
            sleep(1);
            cout << "[■■■■■■■■□□] 80%" << endl;
            sleep(1);
            cout << "[■■■■■■■■■□] 90%" << endl;
            sleep(1);
            }
            }
            
            
            
        }

        void visualizartarefa(){ //aqui nós definimos a visualização de tarefas
            if (tarefas.empty()){
                cout << "Nenhuma tarefa registrada." << endl;
                return;
            }
            for (const auto& tarefa : tarefas)
            {
                cout << "id: " << tarefa.id << endl;
                cout << "Titulo: " << tarefa.titulo << endl;
                cout << "Descrição: " << tarefa.descricao << endl;
                cout << "Data: " << tarefa.data << endl;
                cout << "Status: " << tarefa.status << endl;
            }
            
        }
        void editartarefa(){ //aqui nós definimos a edição de tarefas
            int id;
            cout << "Digite o ID da tarefa para editar: ";
            cin >> id;
            auto it = find_if(tarefas.begin(), tarefas.end(), [id](const tarefa& tarefas){
                return tarefas.id == id;
            });

            if (it != tarefas.end()){
                cout << "Digite o novo titulo da tarefa: " << endl; cin.ignore(); getline(cin, it->titulo);
                cout << "Digite a nova descrição da tarefa: " << endl; cin.ignore(); getline(cin, it->descricao);
                cout << "Digite a nova data da tarefa: " << endl; cin.ignore(); getline(cin, it->data);
                cout << "Digite o novo status da tarefa: " << endl; cin.ignore(); getline(cin, it->status);
            cout << "[■□□□□□□□□□] 10%" << endl;
            sleep(1);
            cout << "[■■□□□□□□□□] 20%" << endl;
            sleep(1);
            cout << "[■■■□□□□□□□] 30%" << endl;
            sleep(1);
            cout << "[■■■■□□□□□□] 40%" << endl;
            sleep(1);
            cout << "[■■■■■□□□□□] 50%" << endl;
            sleep(1);
            cout << "[■■■■■■□□□□] 60%" << endl;
            sleep(1);
            cout << "[■■■■■■■□□□] 70%" << endl;
            sleep(1);
            cout << "[■■■■■■■■□□] 80%" << endl;
            sleep(1);
            cout << "[■■■■■■■■■□] 90%" << endl;
            sleep(1);
            cout << "tarefa editada com sucesso" << endl;
            } else {
                cout << "tarefa com ID " << id << " não encontrada." << endl;
            }
        }
//system (clear);
        void removertarefa(){ //aqui nós definimos a remoção de tarefas
            int id;
            cout << "Digite o ID da tarefa que deseja excluir: ";
            cin >> id;
            auto it = find_if(tarefas.begin(), tarefas.end(), [id](const tarefa& tarefas){
                return tarefas.id == id;
            });

            if (it != tarefas.end()){
                tarefas.erase(it);
            cout << "[■□□□□□□□□□] 10%" << endl;
            sleep(1);
            cout << "[■■□□□□□□□□] 20%" << endl;
            sleep(1);
            cout << "[■■■□□□□□□□] 30%" << endl;
            sleep(1);
            cout << "[■■■■□□□□□□] 40%" << endl;
            sleep(1);
            cout << "[■■■■■□□□□□] 50%" << endl;
            sleep(1);
            cout << "[■■■■■■□□□□] 60%" << endl;
            sleep(1);
            cout << "[■■■■■■■□□□] 70%" << endl;
            sleep(1);
            cout << "[■■■■■■■■□□] 80%" << endl;
            sleep(1);
            cout << "[■■■■■■■■■□] 90%" << endl;
            sleep(1);
                cout << "tarefa removida com sucesso" << endl;
            } else {
                cout << "tarefa com ID " << id << " não encontrada." << endl;
            }
        }

        void pesquisartarefa(){ //aqui nós definimos a pesquisa de tarefas
            string titulo;
            cout << "Digite o titulo da tarefa: "; cin.ignore(); getline(cin, titulo);
            bool encontrada = false;

            for (const auto& tarefa : tarefas)
            {
                if (tarefa.titulo.find(titulo) != string::npos){
                    cout << "ID: " << tarefa.id << endl << "Titulo: " << tarefa.titulo << endl << "Descrição: " << tarefa.descricao << endl << "Data: " << tarefa.data << endl << "Status: " << tarefa.status << endl;

                    encontrada = true;
                }
            }
            if (!encontrada){
                cout << "Nenhuma tarefa encontrada com o titulo " << titulo << endl;
            }
        }
        void filtrarTarefas(){ //aqui nós definimos a filtragem de tarefas
            string status;
            cout << "Digite o status das tarefas as serem filtradas (Pendente, Em Andamento, Concluida): "; cin.ignore(); getline(cin, status);
            bool encontrada =  false;
            for (const auto& tarefa : tarefas) {
                if (tarefa.status == status){
                    cout << "ID: " << tarefa.id << endl << "Titulo: " << tarefa.titulo << endl << "Descrição: " << tarefa.descricao << endl << "Data: " << tarefa.data << endl;
                    encontrada = true;
                }
            }
            if (!encontrada){
                cout << "Nenhuma tarefa encontrada com o status " << status << endl;
            }
        }
    };

    int main(){
        gerenciadrotarefas gerenciador;
        int opcao;

        do{ //aqui nós definimos como seria o menu
            cout << "Sistema de Gerenciador de Tarefas" << endl;
            cout << "•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*" << endl;
            cout << "1. Adicionar Tarefas" << endl;
            cout << "2. Visualizar Tarefas" << endl;
            cout << "3. Editar Tarefas" << endl;
            cout << "4. Remover Tarefas" << endl;
            cout << "5. Pesquisar Tarefas" << endl;
            cout << "6. Filtrar Tarefas" << endl;
            cout << "0. Sair" << endl;
            cout << "•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*" << endl;
            cout << "Escolha uma opção: ";
            
            cin >> opcao;

            switch (opcao) //aqui nós definimos o switch que controla o menu
            {
            case 1:
                gerenciador.adicionartarefa();
                break;
            case 2:
                gerenciador.visualizartarefa();
                break;
            case 3:
                gerenciador.editartarefa();
                break;
            case 4:
                gerenciador.removertarefa();
                break;
            case 5:
                gerenciador.pesquisartarefa();
                break;
            case 6:
                gerenciador.filtrarTarefas();
                break;
            case 0:
                cout << "Saindo" << endl;
                break;
            default:
                cout << "Opção invalida ;-;" << endl;
                break;
            }
        } while (opcao != 0);

        return 0;
    }