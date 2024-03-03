#pragma once
#include "CoreMinimal.h"
#include "BuildingContainer.h"
#include "FortItemQuantityPair.h"
#include "BuildingCustomizableSpawnContainer.generated.h"

UCLASS(Blueprintable)
class ABuildingCustomizableSpawnContainer : public ABuildingContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> SpawnItems;
    
    ABuildingCustomizableSpawnContainer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

