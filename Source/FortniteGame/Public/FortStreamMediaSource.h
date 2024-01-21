#pragma once
#include "CoreMinimal.h"
#include "BaseMediaSource.h"
#include "FortStreamMediaSource.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortStreamMediaSource : public UBaseMediaSource {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StreamUrl;
    
    UFortStreamMediaSource();
};

