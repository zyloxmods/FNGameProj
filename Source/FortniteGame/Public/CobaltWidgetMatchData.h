#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CobaltWidgetMatchData.generated.h"

USTRUCT(BlueprintType)
struct FCobaltWidgetMatchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Teams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag POITag;
    
    FORTNITEGAME_API FCobaltWidgetMatchData();
};

