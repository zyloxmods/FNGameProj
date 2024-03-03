#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PlayNiagaraEffect.h"
#include "EFXType.h"
#include "FortAnimNotify_PlayNiagaraEffectWithBackup.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_PlayNiagaraEffectWithBackup : public UAnimNotify_PlayNiagaraEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFXType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BackupTemplate;
    
    UFortAnimNotify_PlayNiagaraEffectWithBackup();
};

