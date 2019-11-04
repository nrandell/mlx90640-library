#include "MLX90640_I2C_Driver.h"
#include "MLX90640_API.h"

extern "C"
{
    void WRAP_MLX90640_I2CInit()
    {
        MLX90640_I2CInit();
    }

    int WRAP_MLX90640_I2CRead(uint8_t slaveAddr, uint16_t startAddress, uint16_t nMemAddressRead, uint16_t *data)
    {
        return MLX90640_I2CRead(slaveAddr, startAddress, nMemAddressRead, data);
    }

    int WRAP_MLX90640_I2CWrite(uint8_t slaveAddr, uint16_t writeAddress, uint16_t data)
    {
        return MLX90640_I2CWrite(slaveAddr, writeAddress, data);
    }

    void WRAP_MLX90640_I2CFreqSet(int freq)
    {
        MLX90640_I2CFreqSet(freq);
    }

    int WRAP_MLX90640_DumpEE(uint8_t slaveAddr, uint16_t *eeData) {
        return MLX90640_DumpEE(slaveAddr, eeData);
    }

    int WRAP_MLX90640_GetFrameData(uint8_t slaveAddr, uint16_t *frameData) {
        return MLX90640_GetFrameData(slaveAddr, frameData);
    }

    int WRAP_MLX90640_ExtractParameters(uint16_t *eeData, paramsMLX90640 *mlx90640) {
        return MLX90640_ExtractParameters(eeData, mlx90640);
    }

    float WRAP_MLX90640_GetVdd(uint16_t *frameData, const paramsMLX90640 *params) {
        return MLX90640_GetVdd(frameData, params);
    }

    float WRAP_MLX90640_GetTa(uint16_t *frameData, const paramsMLX90640 *params) {
        return MLX90640_GetTa(frameData, params);
    }

    void WRAP_MLX90640_GetImage(uint16_t *frameData, const paramsMLX90640 *params, float *result) {
        WRAP_MLX90640_GetImage(frameData, params, result);
    }

    void WRAP_MLX90640_CalculateTo(uint16_t *frameData, const paramsMLX90640 *params, float emissivity, float tr, float *result) {
        return MLX90640_CalculateTo(frameData, params, emissivity, tr, result);
    }

    int WRAP_MLX90640_SetResolution(uint8_t slaveAddr, uint8_t resolution) {
        return MLX90640_SetResolution(slaveAddr, resolution);
    }

    int WRAP_MLX90640_GetCurResolution(uint8_t slaveAddr) {
        return MLX90640_GetCurResolution(slaveAddr);
    }

    int WRAP_MLX90640_SetRefreshRate(uint8_t slaveAddr, uint8_t refreshRate) {
        return MLX90640_SetRefreshRate(slaveAddr, refreshRate);
    }

    int WRAP_MLX90640_GetRefreshRate(uint8_t slaveAddr) {
        return MLX90640_GetRefreshRate(slaveAddr);
    }

    int WRAP_MLX90640_GetSubPageNumber(uint16_t *frameData) {
        return MLX90640_GetSubPageNumber(frameData);
    }

    int WRAP_MLX90640_GetCurMode(uint8_t slaveAddr) {
        return MLX90640_GetCurMode(slaveAddr);
    }

    int WRAP_MLX90640_SetInterleavedMode(uint8_t slaveAddr) {
        return MLX90640_SetInterleavedMode(slaveAddr);
    }

    int WRAP_MLX90640_SetChessMode(uint8_t slaveAddr) {
        return MLX90640_SetChessMode(slaveAddr);
    }

    void WRAP_MLX90640_BadPixelsCorrection(uint16_t *pixels, float *to, int mode, paramsMLX90640 *params) {
        MLX90640_BadPixelsCorrection(pixels, to, mode, params);
    }
}
