#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortConditionalAssetGroup.generated.h"

class UFortSharedAssetList;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConditionalAssetGroup : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UFortSharedAssetList*> ConditionalAssetsToLoad;
    
    UFortConditionalAssetGroup();
};

