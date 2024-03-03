#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NavOptionFallback.h"
#include "NavOptions.generated.h"

class AFortEventLevelNavigationActor;

USTRUCT(BlueprintType)
struct FNavOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CameraTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortEventLevelNavigationActor* NavObjToLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortEventLevelNavigationActor* NavObjToRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortEventLevelNavigationActor* NavObjToUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortEventLevelNavigationActor* NavObjToDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavOptionFallback> NavFallbacks;
    
    FORTNITEGAME_API FNavOptions();
};

