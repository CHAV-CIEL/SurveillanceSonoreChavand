

#include "arduinoFFT.h"
#include <driver/i2s.h>

#define SAMPLES 512              // Nombre d'échantillons
#define SAMPLING_FREQUENCY 44100 // Fréquence d'échantillonnage
#define DMA_BUF_LEN 512          // Taille du buffer DMA : 512 échantillons
#define DMA_BUF_COUNT 8          // Nombre de buffers DMA : 8

/// @brief classe pour la capteur du son
class Cson
{
public:
    /// @brief constructeur 
    Cson();
    
    float niveauSonoreMoyen;
    float niveauSonoreCrete;
    float *vReal;
    float *vImag;
    /// @brief Paramétrage d'I2S
    /// @return erreur
    esp_err_t Setup();
    /// @brief Fonction pour l'aquisition du son
    /// @return erreur 
    esp_err_t SamplesDmaAcquisition();

private:
    size_t bytesRead;
    int32_t *i2sData;
};
