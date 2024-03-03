#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FortAnimNotifyState_PlayPetMontage.generated.h"

class UPetSyncedDanceItemDefinition;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAnimNotifyState_PlayPetMontage : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPetSyncedDanceItemDefinition* PetDance;
    
    UFortAnimNotifyState_PlayPetMontage();
};

