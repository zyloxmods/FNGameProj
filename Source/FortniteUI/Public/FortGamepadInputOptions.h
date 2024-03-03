#pragma once
#include "CoreMinimal.h"
#include "ECommonGamepadType.h"
#include "FortInputOptions.h"
#include "FortGamepadInputOptions.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortGamepadInputOptions : public UFortInputOptions {
    GENERATED_BODY()
public:
    UFortGamepadInputOptions();
    UFUNCTION(BlueprintCallable)
    void SetControllerPlatformEnum(const ECommonGamepadType InControllerPlatform);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerPlatform(const FString& InControllerPlatform);
    
    UFUNCTION(BlueprintCallable)
    void ResetCustomGamepadToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomGamepadConfig(const FString& ConfigName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCustomGamepadBindingChanges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleGamePadToggleMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetControllerPlatform() const;
    
    UFUNCTION(BlueprintCallable)
    bool AreAllImportantActionsBound(TArray<FText>& OutUnboundScreenLabels, const bool bRichText);
    
};

