#pragma once
#include "CoreMinimal.h"
#include "DynamicBackground.h"
#include "DynamicBackgrounds.generated.h"

USTRUCT(BlueprintType)
struct FDynamicBackgrounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDynamicBackground> Backgrounds;
    
    FORTNITEUI_API FDynamicBackgrounds();
};

