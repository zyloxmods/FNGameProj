#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharmPreviewEntry.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FCharmPreviewEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> PreviewObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform PreviewTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPreviewUsingVehicleShader: 1;
    
    FORTNITEGAME_API FCharmPreviewEntry();
};

