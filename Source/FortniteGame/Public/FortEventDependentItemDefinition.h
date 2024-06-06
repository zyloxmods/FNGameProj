#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortEventDependentItemDefinition.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortEventDependentItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalendarChannelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequiredEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAccountItemDefinition* TargetReplacementItem;
    
public:
    UFortEventDependentItemDefinition(const FObjectInitializer& ObjectInitializer);
};

