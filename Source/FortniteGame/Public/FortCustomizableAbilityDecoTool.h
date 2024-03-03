#pragma once
#include "CoreMinimal.h"
#include "FortAbilityDecoTool.h"
#include "FortCustomizableAbilityDecoTool.generated.h"

class AFortDecoHelper;
class AFortWeapon;

UCLASS(Blueprintable)
class AFortCustomizableAbilityDecoTool : public AFortAbilityDecoTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteToolAbilityOnPress;
    
public:
    AFortCustomizableAbilityDecoTool();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, Reliable, Server, WithValidation)
    void ServerReleaseTrigger();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReleaseSecondaryFire();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPressTrigger();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPressSecondaryFire();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteDecoAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void BPServerReleaseSecondaryFire();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void BPServerPressSecondaryFire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPReleaseTrigger(AFortDecoHelper* FortDecoHelper);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPReleaseSecondaryFire(AFortDecoHelper* FortDecoHelper);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPPressTrigger(AFortDecoHelper* FortDecoHelper);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPPressSecondaryFire(AFortDecoHelper* FortDecoHelper);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnUnEquip();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnSetDecoObjectPreview(AFortDecoHelper* FortDecoHelper);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnEquip(AFortWeapon* OldWeapon);
    
};

