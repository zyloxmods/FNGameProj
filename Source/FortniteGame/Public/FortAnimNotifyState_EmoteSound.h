#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Components/AudioComponent.h"
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrimarySound;
    
    UPROPERTY(VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CopyrightedAudio;

#if WITH_EDITORONLY_DATA
    UPROPERTY(Transient, BlueprintReadOnly)
    UAudioComponent* PreviewComp = nullptr;
#endif
    UFortAnimNotifyState_EmoteSound();
    virtual void NotifyBegin(class USkeletalMeshComponent * MeshComp, class UAnimSequenceBase * Animation, float TotalDuration) override;
};

