#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortItemIconDefinition.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortItemIconDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SmallImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> LargeImage;
    
    UFortItemIconDefinition();
};

