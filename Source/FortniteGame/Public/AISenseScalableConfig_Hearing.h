#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AISenseScalableConfig.h"
#include "AISenseScalableConfig_Hearing.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAISenseScalableConfig_Hearing : public UAISenseScalableConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HearingRange;
    
public:
    UAISenseScalableConfig_Hearing();
};

