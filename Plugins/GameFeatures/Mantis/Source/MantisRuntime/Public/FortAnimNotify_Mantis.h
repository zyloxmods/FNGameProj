#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EFortMantisBranchPath.h"
#include "EFortMantisBranchRule.h"
#include "EFortMantisNotifyEvent.h"
#include "FortAnimNotify_Mantis.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAnimNotify_Mantis : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMantisNotifyEvent MantisNotifyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMantisBranchRule MantisBranchRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMantisBranchPath MantisBranchPath;
    
    UFortAnimNotify_Mantis();
};

