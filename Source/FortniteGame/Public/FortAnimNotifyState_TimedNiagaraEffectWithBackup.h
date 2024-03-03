#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "EFXType.h"
#include "FortAnimNotifyState_TimedNiagaraEffectWithBackup.generated.h"

class UAthenaCosmeticItemDefinition;
class UParticleSystem;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAnimNotifyState_TimedNiagaraEffectWithBackup : public UAnimNotifyState_TimedNiagaraEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFXType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BackupTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticItemDefinition* CosmeticDefContainingVariants;
    
    UFortAnimNotifyState_TimedNiagaraEffectWithBackup();
};

