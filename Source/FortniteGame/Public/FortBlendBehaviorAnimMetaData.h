#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "FortBlendBehaviorAnimMetaData.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortBlendBehaviorAnimMetaData : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHidePropsDuringBlendInFrontEnd;
    
    UFortBlendBehaviorAnimMetaData();
};

