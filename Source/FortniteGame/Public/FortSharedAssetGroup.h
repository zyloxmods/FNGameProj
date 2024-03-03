#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortSharedAssetGroup.generated.h"

class UFortSharedAssetList;

UCLASS(Blueprintable)
class UFortSharedAssetGroup : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortSharedAssetList*> SharedAssetsToLoad;
    
    UFortSharedAssetGroup();
};

