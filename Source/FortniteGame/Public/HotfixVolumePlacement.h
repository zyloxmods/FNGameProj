#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HotfixVolumePlacement.generated.h"

USTRUCT(BlueprintType)
struct FHotfixVolumePlacement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Extent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeededOnClient;
    
    FORTNITEGAME_API FHotfixVolumePlacement();
};

