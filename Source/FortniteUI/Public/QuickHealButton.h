#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BacchusButton.h"
#include "EFortHitPointModificationReason.h"
#include "QuickHealButton.generated.h"

class UFortLazyImage;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UQuickHealButton : public UBacchusButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Button_Overlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ChugJug_Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MedKit_Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Bandage_Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SmallShieldPotion_Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShieldPotion_Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlurpJuice_Tag;
    
public:
    UQuickHealButton();
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerShieldUpdated(float PlayerShield, EFortHitPointModificationReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerMaxShieldUpdated(float PlayerMaxShield);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerMaxHealthUpdated(float PlayerMaxHealth);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerHealthUpdated(float PlayerHealth, EFortHitPointModificationReason Reason);
    
};

