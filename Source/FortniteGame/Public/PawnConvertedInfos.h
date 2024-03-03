#pragma once
#include "CoreMinimal.h"
#include "PawnConvertedInfos.generated.h"

USTRUCT(BlueprintType)
struct FPawnConvertedInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConvertedPawnUniqueID;
    
    FORTNITEGAME_API FPawnConvertedInfos();
};

