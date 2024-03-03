#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "FortItemToBuildingGameplayActorPickupMapping.generated.h"

class ABuildingGameplayActor;

UCLASS(Blueprintable)
class UFortItemToBuildingGameplayActorPickupMapping : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPrimaryAssetId, TSoftClassPtr<ABuildingGameplayActor>> ItemToBGAMap;
    
public:
    UFortItemToBuildingGameplayActorPickupMapping();
};

