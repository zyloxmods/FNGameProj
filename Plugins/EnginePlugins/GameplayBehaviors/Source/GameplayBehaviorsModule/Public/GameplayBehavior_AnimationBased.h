#pragma once
#include "CoreMinimal.h"
#include "GameplayBehavior.h"
#include "MontagePlaybackData.h"
#include "GameplayBehavior_AnimationBased.generated.h"

class AActor;
class UAnimMontage;

UCLASS(Blueprintable)
class GAMEPLAYBEHAVIORSMODULE_API UGameplayBehavior_AnimationBased : public UGameplayBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMontagePlaybackData> ActivePlayback;
    
public:
    UGameplayBehavior_AnimationBased();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageFinished(UAnimMontage* Montage, bool bInterrupted, AActor* InAvatar);
    
};

