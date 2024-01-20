#pragma once
#include "CoreMinimal.h"
#include "FortGameStateZone.h"
#include "PermaniteBoundariesInfo.h"
#include "FortGameStateKeep.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameStateKeep : public AFortGameStateZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PermaniteBoundariesInfo, meta=(AllowPrivateAccess=true))
    FPermaniteBoundariesInfo PermaniteBoundariesData;
    
    AFortGameStateKeep();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PermaniteBoundariesInfo();
    
};

