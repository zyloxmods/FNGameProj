#pragma once
#include "CoreMinimal.h"
#include "ClimbLinkData.generated.h"

USTRUCT(BlueprintType)
struct FClimbLinkData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 UniqueLinkId;
    
    FORTNITEGAME_API FClimbLinkData();
};

