import numpy as np
import matplotlib.pyplot as plt

# Parâmetros iniciais
N0 = 100  # Quantidade inicial de partículas virais
meia_vida = 1  # Meia-vida do vírus no ar, em horas
time = np.linspace(0, 6, 200)  # Tempo de 0 a 6 horas, com 100 pontos no gráfico

# Calcular a constante de decaimento λ
lambda_decay = np.log(2) / meia_vida

# Função de decaimento
N_t = N0 * np.exp(-lambda_decay * time)

# Gráfico do decaimento
plt.plot(time, N_t)
plt.title("Decaimento das partículas no Ar")
plt.xlabel("Tempo (horas)")
plt.ylabel("Quantidade de partículas virais viáveis %")
plt.grid(True)
plt.show()
