#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TileCompInterpData.generated.h"

USTRUCT(BlueprintType)
struct FTileCompInterpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector InitialTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DesiredTranslation;
    
    FORTNITEGAME_API FTileCompInterpData();
};

