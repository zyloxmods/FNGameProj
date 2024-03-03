#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HotfixableBlacklistLiteralLocations.generated.h"

USTRUCT(BlueprintType)
struct FHotfixableBlacklistLiteralLocations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FORTNITEGAME_API FHotfixableBlacklistLiteralLocations();
};

