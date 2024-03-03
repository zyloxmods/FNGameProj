#pragma once
#include "CoreMinimal.h"
#include "FortSimpleWidgetAnimation.h"
#include "OnSimpleWidgetAnimationsFinishedDelegate.h"
#include "FortSimpleWidgetAnimations.generated.h"

USTRUCT(BlueprintType)
struct FFortSimpleWidgetAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSimpleWidgetAnimation> Targets;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSimpleWidgetAnimationsFinished OnAnimationsFinished;
    
    FORTNITEUI_API FFortSimpleWidgetAnimations();
};

