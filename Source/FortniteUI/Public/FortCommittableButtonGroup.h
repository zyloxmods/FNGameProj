#pragma once
#include "CoreMinimal.h"
#include "CommonButtonGroup.h"
#include "SimpleButtonGroupDelegateDelegate.h"
#include "FortCommittableButtonGroup.generated.h"

UCLASS(Blueprintable)
class UFortCommittableButtonGroup : public UCommonButtonGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleButtonGroupDelegate OnButtonCommitted;
    
    UFortCommittableButtonGroup();
};

