#include "FortAnimNotifyState_EmoteSound.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"

UFortAnimNotifyState_EmoteSound::UFortAnimNotifyState_EmoteSound() {
    this->EmoteSound1P = NULL;
    this->EmoteSound3P = NULL;
    this->bPrimarySound = true;
    this->FadeOutTime = 1;
    this->CopyrightedAudio = false;
}

void UFortAnimNotifyState_EmoteSound::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
    if (EmoteSound3P != nullptr)
    {
        UGameplayStatics::PlaySoundAtLocation(MeshComp->GetWorld(), EmoteSound3P, MeshComp->GetComponentLocation(), 0.4f);
    }
}