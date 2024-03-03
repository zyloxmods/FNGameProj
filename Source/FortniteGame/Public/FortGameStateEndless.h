#pragma once
#include "CoreMinimal.h"
#include "FortGameStatePvE.h"
#include "FortGameStateEndless.generated.h"

UCLASS(Blueprintable)
class AFortGameStateEndless : public AFortGameStatePvE {
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

