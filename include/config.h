#ifndef CONFIG_H
#define CONFIG_H

// Estrutura para armazenar as configurações
typedef struct {
    int order;
    int queue_size;
} Config;

// Função para carregar a configuração do arquivo
Config carregar_config(const char *path);

#endif
