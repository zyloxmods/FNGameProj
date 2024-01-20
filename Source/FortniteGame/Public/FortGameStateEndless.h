#pragma once
#include "CoreMinimal.h"
#include "FortGameStateZone.h"
#include "FortGameStateEndless.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameStateEndless : public AFortGameStateZone {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 WaveNumber;
    
public:
    AFortGameStateEndless();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void SetWaveNumber(int32 NewWaveNumber);
    
    UFUNCTION(BlueprintCallable)
    int32 GetWaveNumber();
    
};

