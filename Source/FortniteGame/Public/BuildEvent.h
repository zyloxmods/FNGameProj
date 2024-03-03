#pragma once
#include "CoreMinimal.h"
#include "BaseSample.h"
#include "BuildEvent.generated.h"

USTRUCT(BlueprintType)
struct FBuildEvent : public FBaseSample {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEdit;
    
    FORTNITEGAME_API FBuildEvent();
};

