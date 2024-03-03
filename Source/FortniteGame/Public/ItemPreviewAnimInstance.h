#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_PlayerGliderAnimAsset.h"
#include "FortAnimInput_Skydiving.h"
#include "FortAnimInput_StandingPawnAnimAsset.h"
#include "FrontendAnimInstance.h"
#include "ItemPreviewAnimInstance.generated.h"

class AFortPlayerParachute;
class AFortWeapon;
class UFortItemDefinition;

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API UItemPreviewAnimInstance : public UFrontendAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_StandingPawnAnimAsset CurrentAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_StandingPawnAnimAsset DefaultAnimSetMale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_StandingPawnAnimAsset DefaultAnimSetFemale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_PlayerGliderAnimAsset CurrentGliderAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_Skydiving Skydiving;
    
public:
    UItemPreviewAnimInstance();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusedItemChanged(const UFortItemDefinition* FocusedItem, const AFortWeapon* EquippedWeapon, const AFortPlayerParachute* CurrentParachute);
    
};

