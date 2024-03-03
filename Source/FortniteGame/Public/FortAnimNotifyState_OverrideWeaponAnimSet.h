#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FortAnimNotifyState_OverrideWeaponAnimSet.generated.h"

class UFortWeaponAnimSet;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAnimNotifyState_OverrideWeaponAnimSet : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWeaponAnimSet* WeaponOverrideAnimSet;
    
    UFortAnimNotifyState_OverrideWeaponAnimSet();
};

