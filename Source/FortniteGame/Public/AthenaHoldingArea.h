#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActor.h"
#include "IgnoredPlayerPawnArray.h"
#include "AthenaHoldingArea.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AAthenaHoldingArea : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bHoldingAreaActive, meta=(AllowPrivateAccess=true))
    uint8 bHoldingAreaActive: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IgnoredPlayerPawns, meta=(AllowPrivateAccess=true))
    FIgnoredPlayerPawnArray IgnoredPlayerPawns;
    
public:
    AAthenaHoldingArea();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IgnoredPlayerPawns();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bHoldingAreaActive();
    
};

