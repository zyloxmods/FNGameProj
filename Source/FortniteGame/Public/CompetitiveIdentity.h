#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CompetitiveIdentity.generated.h"

USTRUCT(BlueprintType)
struct FCompetitiveIdentity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegionId;
    
    FORTNITEGAME_API FCompetitiveIdentity();
};

