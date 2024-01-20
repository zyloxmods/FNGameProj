#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortSharedAssetGroup.generated.h"

class UFortSharedAssetList;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortSharedAssetGroup : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortSharedAssetList*> SharedAssetsToLoad;
    
    UFortSharedAssetGroup();
};

