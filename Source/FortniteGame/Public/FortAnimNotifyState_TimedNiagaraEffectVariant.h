#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "FortAnimNotifyState_TimedNiagaraEffectVariant.generated.h"

class UAthenaCosmeticItemDefinition;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAnimNotifyState_TimedNiagaraEffectVariant : public UAnimNotifyState_TimedNiagaraEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticItemDefinition* CosmeticDefContainingVariants;
    
public:
    UFortAnimNotifyState_TimedNiagaraEffectVariant();
};

