#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortSharedAssetList.generated.h"

class UFortWorldItemDefinition;
class UWorld;

UCLASS(Blueprintable)
class UFortSharedAssetList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortWorldItemDefinition*> SharedItemsToFullyLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> SharedAdditionalLevels;
    
    UFortSharedAssetList();
};

