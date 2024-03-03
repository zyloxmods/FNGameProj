#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortPickup.h"
#include "FortDeployableBasePickup.generated.h"

UCLASS(Blueprintable)
class AFortDeployableBasePickup : public AFortPickup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl AssociatedPlotOccupant;
    
public:
    AFortDeployableBasePickup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

