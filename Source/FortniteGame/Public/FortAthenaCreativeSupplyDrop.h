#pragma once
#include "CoreMinimal.h"
#include "FortAthenaSupplyDrop.h"
#include "FortItemQuantityPair.h"
#include "FortAthenaCreativeSupplyDrop.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaCreativeSupplyDrop : public AFortAthenaSupplyDrop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> SpawnItems;
    
    AFortAthenaCreativeSupplyDrop();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

