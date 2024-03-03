#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FortAnimNotifyState_RandomizeNextSection.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAnimNotifyState_RandomizeNextSection : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLoopsBeforeChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLoopsBeforeChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SectionsToJumpTo;
    
    UFortAnimNotifyState_RandomizeNextSection();
};

