#pragma once
#include "CoreMinimal.h"
#include "FortPlayerStateZone.h"
#include "FortPlayerStatePvP.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerStatePvP : public AFortPlayerStateZone {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TotalQuantum, meta=(AllowPrivateAccess=true))
    int32 TotalQuantum;
    
public:
    AFortPlayerStatePvP();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TotalQuantum(const int32 PrevTotalQuantum);
    
};

