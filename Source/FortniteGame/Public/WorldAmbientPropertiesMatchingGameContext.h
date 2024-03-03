#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGlobalWindInfo.h"
#include "FortTimeOfDayTheme.h"
#include "WorldAmbientPropertiesMatchingGameContext.generated.h"

USTRUCT(BlueprintType)
struct FWorldAmbientPropertiesMatchingGameContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery QueryToMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTimeOfDayTheme TimeOfDayTheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGlobalWindInfo GlobalWindInfo;
    
    FORTNITEGAME_API FWorldAmbientPropertiesMatchingGameContext();
};

