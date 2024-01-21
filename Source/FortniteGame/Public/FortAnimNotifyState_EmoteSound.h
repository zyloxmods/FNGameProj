#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FortAnimNotifyState_EmoteSound.generated.h"

class USoundBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FORTNITEGAME_API UFortAnimNotifyState_EmoteSound : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* EmoteSound1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* EmoteSound3P;

    virtual void NotifyBegin(class USkeletalMeshComponent * MeshComp, class UAnimSequenceBase * Animation, float TotalDuration) override;
    UFortAnimNotifyState_EmoteSound();
};

