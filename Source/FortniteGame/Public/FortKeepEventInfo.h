#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KeepEventWaveData.h"
#include "FortKeepEventInfo.generated.h"

UCLASS(Blueprintable)
class UFortKeepEventInfo : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventDescription;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeepEventWaveData> Waves;
    
public:
    UFortKeepEventInfo();
    UFUNCTION(BlueprintCallable)
    int32 NumberOfWaves();
    
    UFUNCTION(BlueprintCallable)
    FKeepEventWaveData GetWave(int32 Index);
    
};

