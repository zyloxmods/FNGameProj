#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FFTSoundDataProvider.generated.h"

UINTERFACE(Blueprintable)
class UFFTSoundDataProvider : public UInterface {
    GENERATED_BODY()
};

class IFFTSoundDataProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMagnitudeForChannel(int32 ChannelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAverageMagnitude() const;
    
};

