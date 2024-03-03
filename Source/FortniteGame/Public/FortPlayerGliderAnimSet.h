#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortAnimInput_PlayerGliderAnimAsset.h"
#include "FortTagToGliderAnimSetPair.h"
#include "FortPlayerGliderAnimSet.generated.h"

UCLASS(Blueprintable)
class UFortPlayerGliderAnimSet : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_PlayerGliderAnimAsset AnimAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTagToGliderAnimSetPair> OverrideAnimAssets;
    
public:
    UFortPlayerGliderAnimSet();
};

