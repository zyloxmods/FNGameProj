#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ESkyCapState.h"
#include "SkyCapTargetData.h"
#include "AthenaSkyCap.generated.h"

UCLASS(Blueprintable)
class AAthenaSkyCap : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyCapTargetData TargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SkyCapState, meta=(AllowPrivateAccess=true))
    ESkyCapState SkyCapState;
    
public:
    AAthenaSkyCap();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StormStarting_Client();
    
    UFUNCTION(BlueprintCallable)
    void OnStopMovement(const FHitResult& ImpactResult, float Time);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SkyCapState();
    
};

