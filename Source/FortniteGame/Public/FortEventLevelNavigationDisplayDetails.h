#pragma once
#include "CoreMinimal.h"
#include "FortEventLevelNavigationDisplayDetails.generated.h"

USTRUCT(BlueprintType)
struct FFortEventLevelNavigationDisplayDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NavActorName;
    
    FORTNITEGAME_API FFortEventLevelNavigationDisplayDetails();
};

