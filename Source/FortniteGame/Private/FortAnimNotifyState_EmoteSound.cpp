#include "FortAnimNotifyState_EmoteSound.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"

UFortAnimNotifyState_EmoteSound::UFortAnimNotifyState_EmoteSound() {
    EmoteSound1P = NULL;
    EmoteSound3P = NULL;
    bPrimarySound = true;
    FadeOutTime = 1;
    CopyrightedAudio = false;
}

void UFortAnimNotifyState_EmoteSound::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
    Super::NotifyBegin(MeshComp, Animation, TotalDuration);
    
      APlayerController* PlayerController = Cast<APlayerController>(MeshComp->GetOwner()->GetInstigatorController());
    if (PlayerController && PlayerController->IsLocalPlayerController())
    {
        if (EmoteSound1P)
        {
            UGameplayStatics::SpawnSoundAttached(EmoteSound1P, MeshComp, "pelvis", FVector::ZeroVector, EAttachLocation::SnapToTarget, false, FadeOutTime);
        }
    }
    else
    {
        if (EmoteSound3P)
        {
            UGameplayStatics::SpawnSoundAttached(EmoteSound3P, MeshComp, "pelvis", FVector::ZeroVector, EAttachLocation::SnapToTarget, false, FadeOutTime);
        }
    }
}
